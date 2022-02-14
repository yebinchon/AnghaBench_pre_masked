
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* DebugInfo; } ;
struct TYPE_6__ {TYPE_4__ msg_crst; int messages; int msg_event; } ;
struct TYPE_5__ {scalar_t__* Spare; } ;
typedef TYPE_2__ EventsQueue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(EventsQueue* VAR_1)
{
    FUNC_0(VAR_1->msg_event);
    FUNC_1(VAR_1->messages);
    VAR_1->msg_crst.DebugInfo->Spare[0] = 0;
    FUNC_2(&VAR_1->msg_crst);
    return VAR_0;
}
