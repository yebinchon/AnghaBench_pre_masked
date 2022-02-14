
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int identifier; int expression; } ;
typedef TYPE_1__ member_expression_t ;
typedef int compiler_ctx_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_3(compiler_ctx_t *VAR_2, member_expression_t *VAR_3)
{
    HRESULT VAR_4;

    VAR_4 = FUNC_1(VAR_2, VAR_3->expression, VAR_1);
    if(FUNC_0(VAR_4))
        return VAR_4;

    return FUNC_2(VAR_2, VAR_0, VAR_3->identifier);
}
