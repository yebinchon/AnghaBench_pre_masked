
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_5__* expression; } ;
typedef TYPE_1__ unary_expression_t ;
struct TYPE_8__ {int identifier; TYPE_5__* expression; } ;
typedef TYPE_2__ member_expression_t ;
typedef int jsstr_t ;
struct TYPE_9__ {int identifier; } ;
typedef TYPE_3__ identifier_expression_t ;
typedef int compiler_ctx_t ;
struct TYPE_10__ {TYPE_5__* expression2; TYPE_5__* expression1; } ;
typedef TYPE_4__ binary_expression_t ;
typedef float WCHAR ;
struct TYPE_11__ {int type; } ;
typedef int HRESULT ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_5__*,int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int ,int ,float const*) ;

__attribute__((used)) static HRESULT FUNC_8(compiler_ctx_t *VAR_8, unary_expression_t *VAR_9)
{
    HRESULT VAR_10;

    switch(VAR_9->expression->type) {
    case 130: {
        binary_expression_t *VAR_11 = (binary_expression_t*)VAR_9->expression;

        VAR_10 = FUNC_2(VAR_8, VAR_11->expression1, VAR_7);
        if(FUNC_0(VAR_10))
            return VAR_10;

        VAR_10 = FUNC_2(VAR_8, VAR_11->expression2, VAR_7);
        if(FUNC_0(VAR_10))
            return VAR_10;

        if(!FUNC_4(VAR_8, VAR_2))
            return VAR_0;
        break;
    }
    case 128: {
        member_expression_t *VAR_12 = (member_expression_t*)VAR_9->expression;
        jsstr_t *VAR_13;

        VAR_10 = FUNC_2(VAR_8, VAR_12->expression, VAR_7);
        if(FUNC_0(VAR_10))
            return VAR_10;


        VAR_13 = FUNC_3(VAR_8, VAR_12->identifier);
        if(!VAR_13)
            return VAR_0;

        VAR_10 = FUNC_6(VAR_8, VAR_4, VAR_13);
        if(FUNC_0(VAR_10))
            return VAR_10;

        if(!FUNC_4(VAR_8, VAR_2))
            return VAR_0;
        break;
    }
    case 129:
        return FUNC_5(VAR_8, VAR_3, ((identifier_expression_t*)VAR_9->expression)->identifier);
    default: {
        static const WCHAR VAR_14[] = {'F','I','X','M','E',0};

        FUNC_1("invalid delete, unimplemented exception message\n");

        VAR_10 = FUNC_2(VAR_8, VAR_9->expression, VAR_7);
        if(FUNC_0(VAR_10))
            return VAR_10;

        return FUNC_7(VAR_8, VAR_5, VAR_1, VAR_14);
    }
    }

    return VAR_6;
}
