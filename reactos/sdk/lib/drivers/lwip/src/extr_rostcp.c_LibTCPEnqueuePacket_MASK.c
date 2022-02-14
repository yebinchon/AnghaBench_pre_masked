
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pbuf {int dummy; } ;
struct TYPE_5__ {int Lock; int PacketQueue; } ;
struct TYPE_4__ {int ListEntry; scalar_t__ Offset; struct pbuf* p; } ;
typedef TYPE_1__* PQUEUE_ENTRY ;
typedef TYPE_2__* PCONNECTION_ENDPOINT ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int VAR_0 ;

void FUNC_2(PCONNECTION_ENDPOINT VAR_1, struct pbuf *VAR_2)
{
    PQUEUE_ENTRY VAR_3;

    VAR_3 = (PQUEUE_ENTRY)FUNC_0(&VAR_0);
    VAR_3->p = VAR_2;
    VAR_3->Offset = 0;

    FUNC_1(&VAR_1->PacketQueue, &VAR_3->ListEntry, &VAR_1->Lock);
}
