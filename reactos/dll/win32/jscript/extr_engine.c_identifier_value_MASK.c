
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
struct TYPE_5__ {int hres; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ exprval_t ;
typedef int HRESULT ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;
 int FUNC_2 (int *,int ,TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_5(script_ctx_t *VAR_1, BSTR VAR_2)
{
    exprval_t VAR_3;
    jsval_t VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_3);
    if(FUNC_0(VAR_5))
        return VAR_5;

    if(VAR_3.type == VAR_0)
        return FUNC_4(VAR_1, VAR_3.u.hres, VAR_2);

    VAR_5 = FUNC_1(VAR_1, &VAR_3, &VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    return FUNC_3(VAR_1, VAR_4);
}
