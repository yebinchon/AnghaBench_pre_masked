
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ SHM_QUEUE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(SHM_QUEUE *VAR_0)
{
 SHM_QUEUE *VAR_1 = VAR_0->next;
 SHM_QUEUE *VAR_2 = VAR_0->prev;

 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(FUNC_1(VAR_1));
 FUNC_0(FUNC_1(VAR_2));

 VAR_2->next = VAR_0->next;
 VAR_1->prev = VAR_0->prev;

 VAR_0->prev = VAR_0->next = ((void*)0);
}
