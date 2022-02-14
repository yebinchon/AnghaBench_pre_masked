
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int member_0; void* break_label; void* continue_label; int member_2; int member_1; } ;
typedef TYPE_1__ statement_ctx_t ;
struct TYPE_8__ {int statement; TYPE_5__* expr; TYPE_3__* variable; int in_expr; } ;
typedef TYPE_2__ forin_statement_t ;
typedef int compiler_ctx_t ;
struct TYPE_10__ {int type; } ;
struct TYPE_9__ {int identifier; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,TYPE_5__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,void*) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ,void*) ;

__attribute__((used)) static HRESULT FUNC_11(compiler_ctx_t *VAR_11, forin_statement_t *VAR_12)
{
    statement_ctx_t VAR_13 = {4, VAR_2, VAR_2};
    HRESULT VAR_14;

    if(VAR_12->variable) {
        VAR_14 = FUNC_5(VAR_11, VAR_12->variable);
        if(FUNC_0(VAR_14))
            return VAR_14;
    }

    VAR_13.break_label = FUNC_1(VAR_11);
    if(!VAR_13.break_label)
        return VAR_1;

    VAR_13.continue_label = FUNC_1(VAR_11);
    if(!VAR_13.continue_label)
        return VAR_1;

    VAR_14 = FUNC_2(VAR_11, VAR_12->in_expr, VAR_9);
    if(FUNC_0(VAR_14))
        return VAR_14;

    if(VAR_12->variable) {
        VAR_14 = FUNC_6(VAR_11, VAR_12->variable->identifier, VAR_10);
        if(FUNC_0(VAR_14))
            return VAR_14;
    }else if(FUNC_7(VAR_12->expr->type)) {
        VAR_14 = FUNC_3(VAR_11, VAR_12->expr, VAR_10);
        if(FUNC_0(VAR_14))
            return VAR_14;
    }else {
        VAR_14 = FUNC_10(VAR_11, VAR_7, VAR_3);
        if(FUNC_0(VAR_14))
            return VAR_14;


        return VAR_8;
    }

    VAR_14 = FUNC_9(VAR_11, VAR_5, VAR_0);
    if(FUNC_0(VAR_14))
        return VAR_14;

    FUNC_8(VAR_11, VAR_13.continue_label);
    VAR_14 = FUNC_10(VAR_11, VAR_4, VAR_13.break_label);
    if(FUNC_0(VAR_14))
        return VAR_1;

    VAR_14 = FUNC_4(VAR_11, &VAR_13, VAR_12->statement);
    if(FUNC_0(VAR_14))
        return VAR_14;

    VAR_14 = FUNC_10(VAR_11, VAR_6, VAR_13.continue_label);
    if(FUNC_0(VAR_14))
        return VAR_14;

    FUNC_8(VAR_11, VAR_13.break_label);
    return VAR_8;
}
