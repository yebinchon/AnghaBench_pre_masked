
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* expression; } ;
typedef TYPE_1__ unary_expression_t ;
typedef int jsop_t ;
typedef int compiler_ctx_t ;
struct TYPE_6__ {int type; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_6(compiler_ctx_t *VAR_4, unary_expression_t *VAR_5, jsop_t VAR_6, int VAR_7)
{
    HRESULT VAR_8;

    if(!FUNC_3(VAR_5->expression->type)) {
        VAR_8 = FUNC_1(VAR_4, VAR_5->expression, VAR_2);
        if(FUNC_0(VAR_8))
            return VAR_8;

        return FUNC_5(VAR_4, VAR_1, VAR_0);
    }

    VAR_8 = FUNC_2(VAR_4, VAR_5->expression, VAR_3);
    if(FUNC_0(VAR_8))
        return VAR_8;

    return FUNC_4(VAR_4, VAR_6, VAR_7);
}
