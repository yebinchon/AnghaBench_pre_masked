
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int text ;
struct TYPE_5__ {TYPE_4__* strval; void* action_state; int action; int * lex; } ;
typedef TYPE_1__ TransformJsonStringValuesState ;
struct TYPE_7__ {int len; int data; } ;
struct TYPE_6__ {int object_field_start; int array_element_start; void* scalar; int array_end; int array_start; int object_end; int object_start; void* semstate; } ;
typedef int JsonTransformStringValuesAction ;
typedef TYPE_2__ JsonSemAction ;
typedef int JsonLexContext ;


 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *,int) ;
 TYPE_4__* FUNC_2 () ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;

text *
FUNC_5(text *VAR_7, void *VAR_8,
        JsonTransformStringValuesAction VAR_9)
{
 JsonLexContext *VAR_10 = FUNC_1(VAR_7, 1);
 JsonSemAction *VAR_11 = FUNC_3(sizeof(JsonSemAction));
 TransformJsonStringValuesState *VAR_12 = FUNC_3(sizeof(TransformJsonStringValuesState));

 VAR_12->lex = VAR_10;
 VAR_12->strval = FUNC_2();
 VAR_12->action = VAR_9;
 VAR_12->action_state = VAR_8;

 VAR_11->semstate = (void *) VAR_12;
 VAR_11->scalar = VAR_6;
 VAR_11->object_start = VAR_5;
 VAR_11->object_end = VAR_3;
 VAR_11->array_start = VAR_2;
 VAR_11->array_end = VAR_1;
 VAR_11->scalar = VAR_6;
 VAR_11->array_element_start = VAR_0;
 VAR_11->object_field_start = VAR_4;

 FUNC_4(VAR_10, VAR_11);

 return FUNC_0(VAR_12->strval->data, VAR_12->strval->len);
}
