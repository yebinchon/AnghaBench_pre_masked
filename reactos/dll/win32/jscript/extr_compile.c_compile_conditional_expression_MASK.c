
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int false_expression; int true_expression; int expression; } ;
typedef TYPE_1__ conditional_expression_t ;
struct TYPE_10__ {int code_off; } ;
typedef TYPE_2__ compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 unsigned int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_2__*,unsigned int,int ) ;

__attribute__((used)) static HRESULT FUNC_5(compiler_ctx_t *VAR_6, conditional_expression_t *VAR_7)
{
    unsigned VAR_8, VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_1(VAR_6, VAR_7->expression, VAR_5);
    if(FUNC_0(VAR_10))
        return VAR_10;

    VAR_8 = FUNC_2(VAR_6, VAR_1);
    if(!VAR_8)
        return VAR_0;

    VAR_10 = FUNC_1(VAR_6, VAR_7->true_expression, VAR_5);
    if(FUNC_0(VAR_10))
        return VAR_10;

    VAR_9 = FUNC_2(VAR_6, VAR_2);
    if(!VAR_9)
        return VAR_0;

    FUNC_4(VAR_6, VAR_8, VAR_6->code_off);
    VAR_10 = FUNC_3(VAR_6, VAR_3, 1);
    if(FUNC_0(VAR_10))
        return VAR_10;

    VAR_10 = FUNC_1(VAR_6, VAR_7->false_expression, VAR_5);
    if(FUNC_0(VAR_10))
        return VAR_10;

    FUNC_4(VAR_6, VAR_9, VAR_6->code_off);
    return VAR_4;
}
