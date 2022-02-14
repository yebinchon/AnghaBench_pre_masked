
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ exprval_t ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int *,TYPE_1__*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int const,TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int const*) ;
 int FUNC_11 (int ,int const**) ;

__attribute__((used)) static HRESULT FUNC_12(script_ctx_t *VAR_1)
{
    const BSTR VAR_2 = FUNC_4(VAR_1, 0);
    exprval_t VAR_3;
    const WCHAR *VAR_4;
    jsval_t VAR_5;
    HRESULT VAR_6;

    FUNC_1("%s\n", FUNC_2(VAR_2));

    VAR_6 = FUNC_5(VAR_1, VAR_2, &VAR_3);
    if(FUNC_0(VAR_6))
        return VAR_6;

    if(VAR_3.type == VAR_0)
        return FUNC_9(VAR_1, FUNC_8(FUNC_6()));

    VAR_6 = FUNC_3(VAR_1, &VAR_3, &VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    VAR_6 = FUNC_11(VAR_5, &VAR_4);
    FUNC_7(VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    return FUNC_10(VAR_1, VAR_4);
}
