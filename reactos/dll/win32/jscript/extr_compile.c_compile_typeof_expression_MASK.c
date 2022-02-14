
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* expression; } ;
typedef TYPE_1__ unary_expression_t ;
typedef int jsop_t ;
struct TYPE_7__ {int identifier; } ;
typedef TYPE_2__ identifier_expression_t ;
typedef int compiler_ctx_t ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 int FUNC_2 (int *,TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_6(compiler_ctx_t *VAR_7, unary_expression_t *VAR_8)
{
    jsop_t VAR_9;
    HRESULT VAR_10;

    if(FUNC_3(VAR_8->expression->type)) {
        if(VAR_8->expression->type == VAR_0)
            return FUNC_5(VAR_7, VAR_4, ((identifier_expression_t*)VAR_8->expression)->identifier);

        VAR_9 = VAR_3;
        VAR_10 = FUNC_2(VAR_7, VAR_8->expression, 0);
    }else {
        VAR_9 = VAR_2;
        VAR_10 = FUNC_1(VAR_7, VAR_8->expression, VAR_6);
    }
    if(FUNC_0(VAR_10))
        return VAR_10;

    return FUNC_4(VAR_7, VAR_9) ? VAR_5 : VAR_1;
}
