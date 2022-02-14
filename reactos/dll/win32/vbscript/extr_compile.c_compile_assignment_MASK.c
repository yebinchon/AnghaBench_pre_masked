
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vbsop_t ;
struct TYPE_3__ {int identifier; int args; int * obj_expr; } ;
typedef TYPE_1__ member_expression_t ;
typedef int expression_t ;
typedef int compile_ctx_t ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,unsigned int*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_5(compile_ctx_t *VAR_6, member_expression_t *VAR_7, expression_t *VAR_8, BOOL VAR_9)
{
    unsigned VAR_10;
    vbsop_t VAR_11;
    HRESULT VAR_12;

    if(VAR_7->obj_expr) {
        VAR_12 = FUNC_2(VAR_6, VAR_7->obj_expr);
        if(FUNC_0(VAR_12))
            return VAR_12;

        VAR_11 = VAR_9 ? VAR_4 : VAR_2;
    }else {
        VAR_11 = VAR_9 ? VAR_3 : VAR_1;
    }

    VAR_12 = FUNC_2(VAR_6, VAR_8);
    if(FUNC_0(VAR_12))
        return VAR_12;

    VAR_12 = FUNC_1(VAR_6, VAR_7->args, &VAR_10);
    if(FUNC_0(VAR_12))
        return VAR_12;

    VAR_12 = FUNC_4(VAR_6, VAR_11, VAR_7->identifier, VAR_10);
    if(FUNC_0(VAR_12))
        return VAR_12;

    if(!FUNC_3(VAR_6, 0))
        return VAR_0;

    return VAR_5;
}
