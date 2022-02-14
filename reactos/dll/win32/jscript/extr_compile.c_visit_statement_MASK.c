
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_22__ {TYPE_7__* statement; int expr; } ;
typedef TYPE_2__ with_statement_t ;
struct TYPE_23__ {TYPE_7__* statement; int expr; } ;
typedef TYPE_3__ while_statement_t ;
struct TYPE_24__ {int variable_list; } ;
typedef TYPE_4__ var_statement_t ;
struct TYPE_25__ {TYPE_7__* finally_statement; TYPE_1__* catch_block; TYPE_7__* try_statement; } ;
typedef TYPE_5__ try_statement_t ;
struct TYPE_26__ {TYPE_13__* case_list; int expr; } ;
typedef TYPE_6__ switch_statement_t ;
struct TYPE_27__ {int type; struct TYPE_27__* next; } ;
typedef TYPE_7__ statement_t ;
struct TYPE_28__ {TYPE_7__* statement; } ;
typedef TYPE_8__ labelled_statement_t ;
struct TYPE_29__ {TYPE_7__* else_stat; TYPE_7__* if_stat; int expr; } ;
typedef TYPE_9__ if_statement_t ;
struct TYPE_16__ {TYPE_7__* statement; int expr; int in_expr; int variable; } ;
typedef TYPE_10__ forin_statement_t ;
struct TYPE_17__ {int end_expr; TYPE_7__* statement; int expr; int begin_expr; int variable_list; } ;
typedef TYPE_11__ for_statement_t ;
struct TYPE_18__ {int expr; } ;
typedef TYPE_12__ expression_statement_t ;
typedef int compiler_ctx_t ;
struct TYPE_19__ {TYPE_7__* stat; struct TYPE_19__* next; int expr; } ;
typedef TYPE_13__ case_clausule_t ;
struct TYPE_20__ {int stat_list; } ;
typedef TYPE_14__ block_statement_t ;
struct TYPE_21__ {TYPE_7__* statement; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_4(compiler_ctx_t *VAR_2, statement_t *VAR_3)
{
    HRESULT VAR_4 = VAR_1;

    switch(VAR_3->type) {
    case 143:
        VAR_4 = FUNC_1(VAR_2, ((block_statement_t*)VAR_3)->stat_list);
        break;
    case 142:
    case 141:
    case 140:
        break;
    case 139:
    case 134:
    case 132: {
        expression_statement_t *VAR_5 = (expression_statement_t*)VAR_3;
        if(VAR_5->expr)
            VAR_4 = FUNC_2(VAR_2, VAR_5->expr);
        break;
    }
    case 138: {
        for_statement_t *VAR_6 = (for_statement_t*)VAR_3;

        if(VAR_6->variable_list)
            VAR_4 = FUNC_3(VAR_2, VAR_6->variable_list);
        else if(VAR_6->begin_expr)
            VAR_4 = FUNC_2(VAR_2, VAR_6->begin_expr);
        if(FUNC_0(VAR_4))
            break;

        if(VAR_6->expr) {
            VAR_4 = FUNC_2(VAR_2, VAR_6->expr);
            if(FUNC_0(VAR_4))
                break;
        }

        VAR_4 = FUNC_4(VAR_2, VAR_6->statement);
        if(FUNC_0(VAR_4))
            break;

        if(VAR_6->end_expr)
            VAR_4 = FUNC_2(VAR_2, VAR_6->end_expr);
        break;
    }
    case 137: {
        forin_statement_t *VAR_7 = (forin_statement_t*)VAR_3;

        if(VAR_7->variable) {
            VAR_4 = FUNC_3(VAR_2, VAR_7->variable);
            if(FUNC_0(VAR_4))
                break;
        }

        VAR_4 = FUNC_2(VAR_2, VAR_7->in_expr);
        if(FUNC_0(VAR_4))
            return VAR_4;

        if(VAR_7->expr) {
            VAR_4 = FUNC_2(VAR_2, VAR_7->expr);
            if(FUNC_0(VAR_4))
                return VAR_4;
        }

        VAR_4 = FUNC_4(VAR_2, VAR_7->statement);
        break;
    }
    case 136: {
        if_statement_t *VAR_8 = (if_statement_t*)VAR_3;

        VAR_4 = FUNC_2(VAR_2, VAR_8->expr);
        if(FUNC_0(VAR_4))
            return VAR_4;

        VAR_4 = FUNC_4(VAR_2, VAR_8->if_stat);
        if(FUNC_0(VAR_4))
            return VAR_4;

        if(VAR_8->else_stat)
            VAR_4 = FUNC_4(VAR_2, VAR_8->else_stat);
        break;
    }
    case 135:
        VAR_4 = FUNC_4(VAR_2, ((labelled_statement_t*)VAR_3)->statement);
        break;
    case 133: {
        switch_statement_t *VAR_9 = (switch_statement_t*)VAR_3;
        statement_t *VAR_10;
        case_clausule_t *VAR_11;

        VAR_4 = FUNC_2(VAR_2, VAR_9->expr);
        if(FUNC_0(VAR_4))
            return VAR_4;

        for(VAR_11 = VAR_9->case_list; VAR_11; VAR_11 = VAR_11->next) {
            if(!VAR_11->expr)
                continue;
            VAR_4 = FUNC_2(VAR_2, VAR_11->expr);
            if(FUNC_0(VAR_4))
                return VAR_4;
        }

        for(VAR_11 = VAR_9->case_list; VAR_11; VAR_11 = VAR_11->next) {
            while(VAR_11->next && VAR_11->next->stat == VAR_11->stat)
                VAR_11 = VAR_11->next;
            for(VAR_10 = VAR_11->stat; VAR_10 && (!VAR_11->next || VAR_11->next->stat != VAR_10);
                VAR_10 = VAR_10->next) {
                VAR_4 = FUNC_4(VAR_2, VAR_10);
                if(FUNC_0(VAR_4))
                    return VAR_4;
            }
        }
        break;
    }
    case 131: {
        try_statement_t *VAR_12 = (try_statement_t*)VAR_3;

        VAR_4 = FUNC_4(VAR_2, VAR_12->try_statement);
        if(FUNC_0(VAR_4))
            return VAR_4;

        if(VAR_12->catch_block) {
            VAR_4 = FUNC_4(VAR_2, VAR_12->catch_block->statement);
            if(FUNC_0(VAR_4))
                return VAR_4;
        }

        if(VAR_12->finally_statement)
            VAR_4 = FUNC_4(VAR_2, VAR_12->finally_statement);
        break;
    }
    case 130:
        VAR_4 = FUNC_3(VAR_2, ((var_statement_t*)VAR_3)->variable_list);
        break;
    case 129: {
        while_statement_t *VAR_13 = (while_statement_t*)VAR_3;

        VAR_4 = FUNC_2(VAR_2, VAR_13->expr);
        if(FUNC_0(VAR_4))
            return VAR_4;

        VAR_4 = FUNC_4(VAR_2, VAR_13->statement);
        break;
    }
    case 128: {
        with_statement_t *VAR_14 = (with_statement_t*)VAR_3;

        VAR_4 = FUNC_2(VAR_2, VAR_14->expr);
        if(FUNC_0(VAR_4))
            return VAR_4;

        VAR_4 = FUNC_4(VAR_2, VAR_14->statement);
        break;
    }
    VAR_0;
    }

    return VAR_4;
}
