
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int size; int contVal; } ;
typedef TYPE_1__ JsonbParseState ;


 void* FUNC_0 (int) ;

__attribute__((used)) static JsonbParseState *
FUNC_1(JsonbParseState *VAR_0)
{
 JsonbParseState *VAR_1,
      *VAR_2,
      *VAR_3;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_1 = FUNC_0(sizeof(JsonbParseState));
 VAR_2 = VAR_0;
 VAR_3 = VAR_1;
 for (;;)
 {
  VAR_3->contVal = VAR_2->contVal;
  VAR_3->size = VAR_2->size;
  VAR_2 = VAR_2->next;
  if (VAR_2 == ((void*)0))
   break;
  VAR_3->next = FUNC_0(sizeof(JsonbParseState));
  VAR_3 = VAR_3->next;
 }
 VAR_3->next = ((void*)0);

 return VAR_1;
}
