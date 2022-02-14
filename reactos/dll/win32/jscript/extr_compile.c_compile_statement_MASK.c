
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int with_statement_t ;
typedef int while_statement_t ;
typedef int var_statement_t ;
typedef int try_statement_t ;
typedef int switch_statement_t ;
struct TYPE_23__ {int type; } ;
typedef TYPE_1__ statement_t ;
struct TYPE_24__ {struct TYPE_24__* next; } ;
typedef TYPE_2__ statement_ctx_t ;
typedef int labelled_statement_t ;
typedef int if_statement_t ;
typedef int forin_statement_t ;
typedef int for_statement_t ;
typedef int expression_statement_t ;
struct TYPE_25__ {TYPE_2__* stat_ctx; } ;
typedef TYPE_3__ compiler_ctx_t ;
typedef int branch_statement_t ;
struct TYPE_26__ {int stat_list; } ;
typedef TYPE_4__ block_statement_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*,int *) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (TYPE_3__*,int *) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 int FUNC_15 (TYPE_3__*,int *) ;

__attribute__((used)) static HRESULT FUNC_16(compiler_ctx_t *VAR_2, statement_ctx_t *VAR_3, statement_t *VAR_4)
{
    HRESULT VAR_5;

    if(VAR_3) {
        VAR_3->next = VAR_2->stat_ctx;
        VAR_2->stat_ctx = VAR_3;
    }

    switch(VAR_4->type) {
    case 143:
        VAR_5 = FUNC_1(VAR_2, ((block_statement_t*)VAR_4)->stat_list);
        break;
    case 142:
        VAR_5 = FUNC_2(VAR_2, (branch_statement_t*)VAR_4);
        break;
    case 141:
        VAR_5 = FUNC_3(VAR_2, (branch_statement_t*)VAR_4);
        break;
    case 140:

        VAR_5 = VAR_1;
        break;
    case 139:
        VAR_5 = FUNC_4(VAR_2, (expression_statement_t*)VAR_4);
        break;
    case 138:
        VAR_5 = FUNC_5(VAR_2, (for_statement_t*)VAR_4);
        break;
    case 137:
        VAR_5 = FUNC_6(VAR_2, (forin_statement_t*)VAR_4);
        break;
    case 136:
        VAR_5 = FUNC_7(VAR_2, (if_statement_t*)VAR_4);
        break;
    case 135:
        VAR_5 = FUNC_8(VAR_2, (labelled_statement_t*)VAR_4);
        break;
    case 134:
        VAR_5 = FUNC_9(VAR_2, (expression_statement_t*)VAR_4);
        break;
    case 133:
        VAR_5 = FUNC_10(VAR_2, (switch_statement_t*)VAR_4);
        break;
    case 132:
        VAR_5 = FUNC_11(VAR_2, (expression_statement_t*)VAR_4);
        break;
    case 131:
        VAR_5 = FUNC_12(VAR_2, (try_statement_t*)VAR_4);
        break;
    case 130:
        VAR_5 = FUNC_13(VAR_2, (var_statement_t*)VAR_4);
        break;
    case 129:
        VAR_5 = FUNC_14(VAR_2, (while_statement_t*)VAR_4);
        break;
    case 128:
        VAR_5 = FUNC_15(VAR_2, (with_statement_t*)VAR_4);
        break;
    VAR_0;
    }

    if(VAR_3) {
        FUNC_0(VAR_2->stat_ctx == VAR_3);
        VAR_2->stat_ctx = VAR_3->next;
    }

    return VAR_5;
}
