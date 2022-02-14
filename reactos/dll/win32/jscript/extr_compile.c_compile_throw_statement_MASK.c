
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expr; } ;
typedef TYPE_1__ expression_statement_t ;
typedef int compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_3(compiler_ctx_t *VAR_4, expression_statement_t *VAR_5)
{
    HRESULT VAR_6;

    VAR_6 = FUNC_1(VAR_4, VAR_5->expr, VAR_3);
    if(FUNC_0(VAR_6))
        return VAR_6;

    return FUNC_2(VAR_4, VAR_1) ? VAR_2 : VAR_0;
}
