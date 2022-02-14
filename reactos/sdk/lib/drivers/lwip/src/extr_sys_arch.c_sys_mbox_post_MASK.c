
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Event; int Lock; int ListHead; } ;
typedef TYPE_1__ sys_mbox_t ;
struct TYPE_7__ {int ListEntry; void* Message; } ;
typedef TYPE_2__* PLWIP_MESSAGE_CONTAINER ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_2 ;

void
FUNC_4(sys_mbox_t *VAR_3, void *VAR_4)
{
    PLWIP_MESSAGE_CONTAINER VAR_5;

    VAR_5 = FUNC_1(VAR_2, sizeof(*VAR_5));
    FUNC_0(VAR_5);

    VAR_5->Message = VAR_4;

    FUNC_2(&VAR_3->ListHead,
                                &VAR_5->ListEntry,
                                &VAR_3->Lock);

    FUNC_3(&VAR_3->Event, VAR_1, VAR_0);
}
