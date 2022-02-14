
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jsop_t ;
typedef int compiler_ctx_t ;
struct TYPE_3__ {int expression2; int expression1; } ;
typedef TYPE_1__ binary_expression_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_3(compiler_ctx_t *VAR_3, binary_expression_t *VAR_4, jsop_t VAR_5)
{
    HRESULT VAR_6;

    VAR_6 = FUNC_1(VAR_3, VAR_4->expression1, VAR_2);
    if(FUNC_0(VAR_6))
        return VAR_6;

    VAR_6 = FUNC_1(VAR_3, VAR_4->expression2, VAR_2);
    if(FUNC_0(VAR_6))
        return VAR_6;

    return FUNC_2(VAR_3, VAR_5) ? VAR_1 : VAR_0;
}
