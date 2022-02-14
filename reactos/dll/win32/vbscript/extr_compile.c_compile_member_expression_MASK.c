
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int identifier; int * obj_expr; int args; } ;
typedef TYPE_1__ member_expression_t ;
typedef int expression_t ;
typedef int compile_ctx_t ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,unsigned int*) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_5(compile_ctx_t *VAR_5, member_expression_t *VAR_6, BOOL VAR_7)
{
    unsigned VAR_8 = 0;
    HRESULT VAR_9;

    if(VAR_7 && !VAR_6->args) {
        expression_t *VAR_10;

        VAR_10 = FUNC_3(VAR_5, VAR_6->identifier, VAR_4);
        if(VAR_10)
            return FUNC_2(VAR_5, VAR_10);
    }

    VAR_9 = FUNC_1(VAR_5, VAR_6->args, &VAR_8);
    if(FUNC_0(VAR_9))
        return VAR_9;

    if(VAR_6->obj_expr) {
        VAR_9 = FUNC_2(VAR_5, VAR_6->obj_expr);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_9 = FUNC_4(VAR_5, VAR_7 ? VAR_2 : VAR_3, VAR_6->identifier, VAR_8);
    }else {
        VAR_9 = FUNC_4(VAR_5, VAR_7 ? VAR_0 : VAR_1, VAR_6->identifier, VAR_8);
    }

    return VAR_9;
}
