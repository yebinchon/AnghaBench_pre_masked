
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int compiler_ctx_t ;
struct TYPE_3__ {int expression2; int expression1; } ;
typedef TYPE_1__ binary_expression_t ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_2(compiler_ctx_t *VAR_1, binary_expression_t *VAR_2, BOOL VAR_3)
{
    HRESULT VAR_4;

    VAR_4 = FUNC_1(VAR_1, VAR_2->expression1, VAR_0);
    if(FUNC_0(VAR_4))
        return VAR_4;

    return FUNC_1(VAR_1, VAR_2->expression2, VAR_3);
}
