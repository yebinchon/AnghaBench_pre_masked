
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; } ;
struct TYPE_9__ {int tailfree; TYPE_1__* tail; } ;
struct TYPE_8__ {int freeptr; TYPE_3__* next; } ;
typedef TYPE_2__ AfterTriggerEventList ;
typedef TYPE_3__ AfterTriggerEventChunk ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(AfterTriggerEventList *VAR_0,
        const AfterTriggerEventList *VAR_1)
{
 AfterTriggerEventChunk *VAR_2;
 AfterTriggerEventChunk *VAR_3;

 if (VAR_1->tail == ((void*)0))
 {

  FUNC_0(VAR_0);
 }
 else
 {
  *VAR_0 = *VAR_1;

  for (VAR_2 = VAR_0->tail->next; VAR_2 != ((void*)0); VAR_2 = VAR_3)
  {
   VAR_3 = VAR_2->next;
   FUNC_1(VAR_2);
  }

  VAR_0->tail->next = ((void*)0);
  VAR_0->tail->freeptr = VAR_0->tailfree;





 }
}
