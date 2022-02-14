
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ SHM_QUEUE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(SHM_QUEUE *VAR_0, SHM_QUEUE *VAR_1)
{
 SHM_QUEUE *VAR_2 = VAR_0->next;

 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(FUNC_1(VAR_1));

 VAR_1->prev = VAR_2->prev;
 VAR_1->next = VAR_0->next;
 VAR_0->next = VAR_1;
 VAR_2->prev = VAR_1;
}
