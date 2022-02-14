
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int text ;
struct TYPE_5__ {int flags; void* action_state; int action; int * lex; } ;
struct TYPE_4__ {int object_field_start; int scalar; void* semstate; } ;
typedef TYPE_1__ JsonSemAction ;
typedef int JsonLexContext ;
typedef int JsonIterateStringValuesAction ;
typedef TYPE_2__ IterateJsonStringValuesState ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void
FUNC_3(text *VAR_2, uint32 VAR_3, void *VAR_4,
     JsonIterateStringValuesAction VAR_5)
{
 JsonLexContext *VAR_6 = FUNC_0(VAR_2, 1);
 JsonSemAction *VAR_7 = FUNC_1(sizeof(JsonSemAction));
 IterateJsonStringValuesState *VAR_8 = FUNC_1(sizeof(IterateJsonStringValuesState));

 VAR_8->lex = VAR_6;
 VAR_8->action = VAR_5;
 VAR_8->action_state = VAR_4;
 VAR_8->flags = VAR_3;

 VAR_7->semstate = (void *) VAR_8;
 VAR_7->scalar = VAR_1;
 VAR_7->object_field_start = VAR_0;

 FUNC_2(VAR_6, VAR_7);
}
