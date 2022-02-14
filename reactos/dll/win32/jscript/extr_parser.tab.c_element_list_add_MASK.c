
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int expression_t ;
struct TYPE_5__ {TYPE_2__* tail; } ;
typedef TYPE_1__ element_list_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;


 TYPE_2__* FUNC_0 (int *,int,int *) ;

__attribute__((used)) static element_list_t *FUNC_1(parser_ctx_t *VAR_0, element_list_t *VAR_1, int VAR_2, expression_t *VAR_3)
{
    VAR_1->tail = VAR_1->tail->next = FUNC_0(VAR_0, VAR_2, VAR_3);

    return VAR_1;
}
