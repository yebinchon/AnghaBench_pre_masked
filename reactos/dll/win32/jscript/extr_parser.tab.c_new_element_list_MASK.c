
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int parser_ctx_t ;
typedef int expression_t ;
struct TYPE_4__ {int tail; int head; } ;
typedef TYPE_1__ element_list_t ;


 int FUNC_0 (int *,int,int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;

__attribute__((used)) static element_list_t *FUNC_2(parser_ctx_t *VAR_0, int VAR_1, expression_t *VAR_2)
{
    element_list_t *VAR_3 = FUNC_1(VAR_0, sizeof(element_list_t));

    VAR_3->head = VAR_3->tail = FUNC_0(VAR_0, VAR_1, VAR_2);

    return VAR_3;
}
