
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vbsop_t ;
typedef int compile_ctx_t ;
struct TYPE_3__ {int right; int left; } ;
typedef TYPE_1__ binary_expression_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_3(compile_ctx_t *VAR_2, binary_expression_t *VAR_3, vbsop_t VAR_4)
{
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_2, VAR_3->left);
    if(FUNC_0(VAR_5))
        return VAR_5;

    VAR_5 = FUNC_1(VAR_2, VAR_3->right);
    if(FUNC_0(VAR_5))
        return VAR_5;

    return FUNC_2(VAR_2, VAR_4) ? VAR_1 : VAR_0;
}
