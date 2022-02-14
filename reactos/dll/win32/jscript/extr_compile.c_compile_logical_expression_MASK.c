
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int jsop_t ;
struct TYPE_8__ {int code_off; } ;
typedef TYPE_1__ compiler_ctx_t ;
struct TYPE_9__ {int expression2; int expression1; } ;
typedef TYPE_2__ binary_expression_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 unsigned int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,unsigned int,int ) ;

__attribute__((used)) static HRESULT FUNC_4(compiler_ctx_t *VAR_3, binary_expression_t *VAR_4, jsop_t VAR_5)
{
    unsigned VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(VAR_3, VAR_4->expression1, VAR_2);
    if(FUNC_0(VAR_7))
        return VAR_7;

    VAR_6 = FUNC_2(VAR_3, VAR_5);
    if(!VAR_6)
        return VAR_0;

    VAR_7 = FUNC_1(VAR_3, VAR_4->expression2, VAR_2);
    if(FUNC_0(VAR_7))
        return VAR_7;

    FUNC_3(VAR_3, VAR_6, VAR_3->code_off);
    return VAR_1;
}
