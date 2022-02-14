
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int exprval_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int const*) ;
 int FUNC_10 (int ,int const**) ;
 int const* VAR_0 ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_1)
{
    const WCHAR *VAR_2;
    exprval_t VAR_3;
    jsval_t VAR_4;
    HRESULT VAR_5;

    FUNC_1("\n");

    if(!FUNC_7(VAR_1, &VAR_3))
        return FUNC_8(VAR_1, FUNC_6(FUNC_4()));

    VAR_5 = FUNC_2(VAR_1, &VAR_3, &VAR_4);
    FUNC_3(&VAR_3);
    if(FUNC_0(VAR_5))
        return FUNC_9(VAR_1, VAR_0);

    VAR_5 = FUNC_10(VAR_4, &VAR_2);
    FUNC_5(VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    return FUNC_9(VAR_1, VAR_2);
}
