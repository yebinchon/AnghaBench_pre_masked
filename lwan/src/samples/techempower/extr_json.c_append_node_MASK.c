
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* tail; TYPE_2__* head; } ;
struct TYPE_6__ {TYPE_1__ children; struct TYPE_6__* next; struct TYPE_6__* prev; struct TYPE_6__* parent; } ;
typedef TYPE_2__ JsonNode ;



__attribute__((used)) static void FUNC_0(JsonNode *VAR_0, JsonNode *VAR_1)
{
 VAR_1->parent = VAR_0;
 VAR_1->prev = VAR_0->children.tail;
 VAR_1->next = ((void*)0);

 if (VAR_0->children.tail != ((void*)0))
  VAR_0->children.tail->next = VAR_1;
 else
  VAR_0->children.head = VAR_1;
 VAR_0->children.tail = VAR_1;
}
