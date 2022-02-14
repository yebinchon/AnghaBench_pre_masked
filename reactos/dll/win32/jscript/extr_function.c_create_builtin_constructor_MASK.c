
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsdisp_t ;
typedef int builtin_invoke_t ;
typedef int builtin_info_t ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int const*,int const*,int ,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;

HRESULT FUNC_4(script_ctx_t *VAR_1, builtin_invoke_t VAR_2, const WCHAR *VAR_3,
        const builtin_info_t *VAR_4, DWORD VAR_5, jsdisp_t *VAR_6, jsdisp_t **VAR_7)
{
    jsdisp_t *VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_8);
    if(FUNC_0(VAR_9))
        return VAR_9;

    VAR_9 = FUNC_3(VAR_1, VAR_8, VAR_6);
    if(FUNC_0(VAR_9)) {
        FUNC_2(VAR_8);
        return VAR_9;
    }

    *VAR_7 = VAR_8;
    return VAR_0;
}
