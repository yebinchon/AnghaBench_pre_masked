
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int PacketQueue; } ;
struct TYPE_8__ {int p; } ;
typedef TYPE_1__* PQUEUE_ENTRY ;
typedef int PLIST_ENTRY ;
typedef TYPE_2__* PCONNECTION_ENDPOINT ;


 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static
void
FUNC_7(PCONNECTION_ENDPOINT VAR_3)
{
    PLIST_ENTRY VAR_4;
    PQUEUE_ENTRY VAR_5 = ((void*)0);

    FUNC_4(VAR_3);

    while (!FUNC_3(&VAR_3->PacketQueue))
    {
        VAR_4 = FUNC_5(&VAR_3->PacketQueue);
        VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_0);


        FUNC_6(VAR_5->p);

        FUNC_2(&VAR_2, VAR_5);
    }

    FUNC_1(VAR_3);
}
