
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int property_definition_type_t ;
struct TYPE_4__ {int * next; int * value; int * name; int type; } ;
typedef TYPE_1__ property_definition_t ;
typedef int parser_ctx_t ;
typedef int literal_t ;
typedef int expression_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static property_definition_t *FUNC_1(parser_ctx_t *VAR_0, property_definition_type_t VAR_1,
                                                      literal_t *VAR_2, expression_t *VAR_3)
{
    property_definition_t *VAR_4 = FUNC_0(VAR_0, sizeof(property_definition_t));

    VAR_4->type = VAR_1;
    VAR_4->name = VAR_2;
    VAR_4->value = VAR_3;
    VAR_4->next = ((void*)0);

    return VAR_4;
}
