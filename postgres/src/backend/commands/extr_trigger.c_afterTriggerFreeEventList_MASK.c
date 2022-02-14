
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {int * tailfree; int * tail; TYPE_2__* head; } ;
typedef TYPE_1__ AfterTriggerEventList ;
typedef TYPE_2__ AfterTriggerEventChunk ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(AfterTriggerEventList *VAR_0)
{
 AfterTriggerEventChunk *VAR_1;

 while ((VAR_1 = VAR_0->head) != ((void*)0))
 {
  VAR_0->head = VAR_1->next;
  FUNC_0(VAR_1);
 }
 VAR_0->tail = ((void*)0);
 VAR_0->tailfree = ((void*)0);
}
