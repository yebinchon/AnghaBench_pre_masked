
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* location; int relfilenode; } ;
struct TYPE_5__ {struct TYPE_5__* next; TYPE_1__ location; struct TYPE_5__* prev; } ;
typedef TYPE_2__ ss_lru_item_t ;
struct TYPE_6__ {TYPE_2__* head; TYPE_2__* tail; } ;
typedef int RelFileNode ;
typedef void* BlockNumber ;


 int FUNC_0 (int ,int ) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static BlockNumber
FUNC_1(RelFileNode VAR_1, BlockNumber VAR_2, bool VAR_3)
{
 ss_lru_item_t *VAR_4;

 VAR_4 = VAR_0->head;
 for (;;)
 {
  bool VAR_5;

  VAR_5 = FUNC_0(VAR_4->location.relfilenode, VAR_1);

  if (VAR_5 || VAR_4->next == ((void*)0))
  {




   if (!VAR_5)
   {
    VAR_4->location.relfilenode = VAR_1;
    VAR_4->location.location = VAR_2;
   }
   else if (VAR_3)
    VAR_4->location.location = VAR_2;


   if (VAR_4 != VAR_0->head)
   {

    if (VAR_4 == VAR_0->tail)
     VAR_0->tail = VAR_4->prev;
    VAR_4->prev->next = VAR_4->next;
    if (VAR_4->next)
     VAR_4->next->prev = VAR_4->prev;


    VAR_4->prev = ((void*)0);
    VAR_4->next = VAR_0->head;
    VAR_0->head->prev = VAR_4;
    VAR_0->head = VAR_4;
   }

   return VAR_4->location.location;
  }

  VAR_4 = VAR_4->next;
 }


}
