
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int PacketQueue; } ;
typedef int * PQUEUE_ENTRY ;
typedef int PLIST_ENTRY ;
typedef TYPE_1__* PCONNECTION_ENDPOINT ;


 int * FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

PQUEUE_ENTRY FUNC_3(PCONNECTION_ENDPOINT VAR_2)
{
    PLIST_ENTRY VAR_3;
    PQUEUE_ENTRY VAR_4 = ((void*)0);

    if (FUNC_1(&VAR_2->PacketQueue)) return ((void*)0);

    VAR_3 = FUNC_2(&VAR_2->PacketQueue);

    VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_0);

    return VAR_4;
}
