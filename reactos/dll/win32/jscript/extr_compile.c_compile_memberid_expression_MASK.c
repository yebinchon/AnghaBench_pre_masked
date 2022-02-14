
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int identifier; int expression; } ;
typedef TYPE_1__ member_expression_t ;
typedef int jsstr_t ;
struct TYPE_7__ {int identifier; } ;
typedef TYPE_2__ identifier_expression_t ;
struct TYPE_8__ {int type; } ;
typedef TYPE_3__ expression_t ;
typedef int compiler_ctx_t ;
struct TYPE_9__ {int expression2; int expression1; } ;
typedef TYPE_4__ binary_expression_t ;
typedef int HRESULT ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,unsigned int) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_6(compiler_ctx_t *VAR_6, expression_t *VAR_7, unsigned VAR_8)
{
    HRESULT VAR_9 = VAR_4;

    switch(VAR_7->type) {
    case 129: {
        identifier_expression_t *VAR_10 = (identifier_expression_t*)VAR_7;

        VAR_9 = FUNC_3(VAR_6, VAR_10->identifier, VAR_8);
        break;
    }
    case 130: {
        binary_expression_t *VAR_11 = (binary_expression_t*)VAR_7;

        VAR_9 = FUNC_1(VAR_6, VAR_11->expression1, VAR_5);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_9 = FUNC_1(VAR_6, VAR_11->expression2, VAR_5);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_9 = FUNC_5(VAR_6, VAR_2, VAR_8);
        break;
    }
    case 128: {
        member_expression_t *VAR_12 = (member_expression_t*)VAR_7;
        jsstr_t *VAR_13;

        VAR_9 = FUNC_1(VAR_6, VAR_12->expression, VAR_5);
        if(FUNC_0(VAR_9))
            return VAR_9;


        VAR_13 = FUNC_2(VAR_6, VAR_12->identifier);
        if(!VAR_13)
            return VAR_1;

        VAR_9 = FUNC_4(VAR_6, VAR_3, VAR_13);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_9 = FUNC_5(VAR_6, VAR_2, VAR_8);
        break;
    }
    VAR_0;
    }

    return VAR_9;
}
