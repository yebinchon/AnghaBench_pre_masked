
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* subexpr; } ;
typedef TYPE_3__ unary_expression_t ;
struct TYPE_13__ {TYPE_1__* args; } ;
typedef TYPE_4__ member_expression_t ;
typedef int compile_ctx_t ;
struct TYPE_14__ {TYPE_4__* expr; int is_strict; } ;
typedef TYPE_5__ call_statement_t ;
struct TYPE_15__ {int right; TYPE_2__* left; } ;
typedef TYPE_6__ binary_expression_t ;
struct TYPE_11__ {scalar_t__ type; } ;
struct TYPE_10__ {scalar_t__ type; int next; } ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_4__*,int ,int ) ;
 int FUNC_3 (int *,TYPE_4__*,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_5(compile_ctx_t *VAR_5, call_statement_t *VAR_6)
{
    HRESULT VAR_7;



    if(!VAR_6->is_strict && VAR_6->expr->args && !VAR_6->expr->args->next && VAR_6->expr->args->type == VAR_1) {
        binary_expression_t *VAR_8 = (binary_expression_t*)VAR_6->expr->args;

        if(VAR_8->left->type == VAR_0) {
            member_expression_t VAR_9 = *VAR_6->expr;

            FUNC_1("converting call expr to assign expr\n");

            VAR_9.args = ((unary_expression_t*)VAR_8->left)->subexpr;
            return FUNC_2(VAR_5, &VAR_9, VAR_8->right, VAR_3);
        }
    }

    VAR_7 = FUNC_3(VAR_5, VAR_6->expr, VAR_3);
    if(FUNC_0(VAR_7))
        return VAR_7;

    if(!FUNC_4(VAR_5, 0))
        return VAR_2;

    return VAR_4;
}
