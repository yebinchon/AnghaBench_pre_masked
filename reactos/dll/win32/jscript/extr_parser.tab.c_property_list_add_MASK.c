
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* tail; } ;
typedef TYPE_1__ property_list_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ property_definition_t ;
typedef int parser_ctx_t ;



__attribute__((used)) static property_list_t *FUNC_0(parser_ctx_t *VAR_0, property_list_t *VAR_1, property_definition_t *VAR_2)
{
    VAR_1->tail = VAR_1->tail->next = VAR_2;
    return VAR_1;
}
