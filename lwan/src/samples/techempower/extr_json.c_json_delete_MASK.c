
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* head; } ;
struct TYPE_7__ {int tag; struct TYPE_7__* next; TYPE_1__ children; struct TYPE_7__* string_; } ;
typedef TYPE_2__ JsonNode ;





 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(JsonNode *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  FUNC_1(VAR_0);

  switch (VAR_0->tag) {
   case 128:
    FUNC_0(VAR_0->string_);
    break;
   case 130:
   case 129:
   {
    JsonNode *VAR_1, *VAR_2;
    for (VAR_1 = VAR_0->children.head; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
     VAR_2 = VAR_1->next;
     FUNC_2(VAR_1);
    }
    break;
   }
   default:;
  }

  FUNC_0(VAR_0);
 }
}
