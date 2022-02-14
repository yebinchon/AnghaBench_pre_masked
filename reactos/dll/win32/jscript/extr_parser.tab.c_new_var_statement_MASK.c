
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int head; } ;
typedef TYPE_1__ variable_list_t ;
struct TYPE_6__ {int stat; int variable_list; } ;
typedef TYPE_2__ var_statement_t ;
typedef int statement_t ;
typedef int parser_ctx_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static statement_t *FUNC_1(parser_ctx_t *VAR_1, variable_list_t *VAR_2)
{
    var_statement_t *VAR_3;

    VAR_3 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_3));
    if(!VAR_3)
        return ((void*)0);

    VAR_3->variable_list = VAR_2->head;

    return &VAR_3->stat;
}
