
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* tail; TYPE_3__* head; } ;
struct TYPE_9__ {int * key; TYPE_3__* next; TYPE_2__* prev; struct TYPE_9__* parent; TYPE_1__ children; } ;
struct TYPE_8__ {TYPE_2__* prev; } ;
struct TYPE_7__ {TYPE_3__* next; } ;
typedef TYPE_4__ JsonNode ;


 int FUNC_0 (int *) ;

void FUNC_1(JsonNode *VAR_0)
{
 JsonNode *VAR_1 = VAR_0->parent;

 if (VAR_1 != ((void*)0)) {
  if (VAR_0->prev != ((void*)0))
   VAR_0->prev->next = VAR_0->next;
  else
   VAR_1->children.head = VAR_0->next;
  if (VAR_0->next != ((void*)0))
   VAR_0->next->prev = VAR_0->prev;
  else
   VAR_1->children.tail = VAR_0->prev;

  FUNC_0(VAR_0->key);

  VAR_0->parent = ((void*)0);
  VAR_0->prev = VAR_0->next = ((void*)0);
  VAR_0->key = ((void*)0);
 }
}
