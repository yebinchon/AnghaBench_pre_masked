
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int statement_t ;
struct TYPE_5__ {int * head; } ;
typedef TYPE_1__ statement_list_t ;
typedef int parser_ctx_t ;
struct TYPE_6__ {int stat; int * stat_list; } ;
typedef TYPE_2__ block_statement_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static statement_t *FUNC_1(parser_ctx_t *VAR_1, statement_list_t *VAR_2)
{
    block_statement_t *VAR_3;

    VAR_3 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_3));
    if(!VAR_3)
        return ((void*)0);

    VAR_3->stat_list = VAR_2 ? VAR_2->head : ((void*)0);

    return &VAR_3->stat;
}
