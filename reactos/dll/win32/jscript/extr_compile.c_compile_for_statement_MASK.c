
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {unsigned int break_label; unsigned int continue_label; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ statement_ctx_t ;
struct TYPE_14__ {scalar_t__ end_expr; int statement; scalar_t__ expr; scalar_t__ begin_expr; scalar_t__ variable_list; } ;
typedef TYPE_2__ for_statement_t ;
struct TYPE_15__ {unsigned int code_off; } ;
typedef TYPE_3__ compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,unsigned int) ;
 int FUNC_6 (TYPE_3__*,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_7(compiler_ctx_t *VAR_6, for_statement_t *VAR_7)
{
    statement_ctx_t VAR_8 = {0, VAR_1, VAR_1};
    unsigned VAR_9;
    HRESULT VAR_10;

    if(VAR_7->variable_list) {
        VAR_10 = FUNC_4(VAR_6, VAR_7->variable_list);
        if(FUNC_0(VAR_10))
            return VAR_10;
    }else if(VAR_7->begin_expr) {
        VAR_10 = FUNC_2(VAR_6, VAR_7->begin_expr, VAR_1);
        if(FUNC_0(VAR_10))
            return VAR_10;
    }

    VAR_8.break_label = FUNC_1(VAR_6);
    if(!VAR_8.break_label)
        return VAR_0;

    VAR_8.continue_label = FUNC_1(VAR_6);
    if(!VAR_8.continue_label)
        return VAR_0;

    VAR_9 = VAR_6->code_off;

    if(VAR_7->expr) {
        VAR_10 = FUNC_2(VAR_6, VAR_7->expr, VAR_5);
        if(FUNC_0(VAR_10))
            return VAR_10;

        VAR_10 = FUNC_6(VAR_6, VAR_3, VAR_8.break_label);
        if(FUNC_0(VAR_10))
            return VAR_10;
    }

    VAR_10 = FUNC_3(VAR_6, &VAR_8, VAR_7->statement);
    if(FUNC_0(VAR_10))
        return VAR_10;

    FUNC_5(VAR_6, VAR_8.continue_label);

    if(VAR_7->end_expr) {
        VAR_10 = FUNC_2(VAR_6, VAR_7->end_expr, VAR_1);
        if(FUNC_0(VAR_10))
            return VAR_10;
    }

    VAR_10 = FUNC_6(VAR_6, VAR_2, VAR_9);
    if(FUNC_0(VAR_10))
        return VAR_10;

    FUNC_5(VAR_6, VAR_8.break_label);
    return VAR_4;
}
