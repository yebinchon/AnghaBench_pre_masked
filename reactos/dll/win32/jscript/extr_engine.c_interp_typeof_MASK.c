
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int ,int const**) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_0)
{
    const WCHAR *VAR_1;
    jsval_t VAR_2;
    HRESULT VAR_3;

    FUNC_1("\n");

    VAR_2 = FUNC_3(VAR_0);
    VAR_3 = FUNC_5(VAR_2, &VAR_1);
    FUNC_2(VAR_2);
    if(FUNC_0(VAR_3))
        return VAR_3;

    return FUNC_4(VAR_0, VAR_1);
}
