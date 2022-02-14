
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* json_aelem_action ) (int ,int) ;
struct TYPE_6__ {int semstate; int (* array_element_end ) (int ,int) ;int (* array_element_start ) (int ,int) ;} ;
typedef int JsonTokenType ;
typedef TYPE_1__ JsonSemAction ;
typedef int JsonLexContext ;



 int VAR_0 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(JsonLexContext *VAR_1, JsonSemAction *VAR_2)
{
 json_aelem_action VAR_3 = VAR_2->array_element_start;
 json_aelem_action VAR_4 = VAR_2->array_element_end;
 JsonTokenType VAR_5 = FUNC_0(VAR_1);

 bool VAR_6;

 VAR_6 = VAR_5 == VAR_0;

 if (VAR_3 != ((void*)0))
  (*VAR_3) (VAR_2->semstate, VAR_6);


 switch (VAR_5)
 {
  case 128:
   FUNC_2(VAR_1, VAR_2);
   break;
  case 129:
   FUNC_1(VAR_1, VAR_2);
   break;
  default:
   FUNC_3(VAR_1, VAR_2);
 }

 if (VAR_4 != ((void*)0))
  (*VAR_4) (VAR_2->semstate, VAR_6);
}
