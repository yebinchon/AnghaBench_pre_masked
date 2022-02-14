
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int ,int const*,int ,int *) ;
 int const* VAR_0 ;
 int FUNC_3 (int *,int *,int **,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int *,int ,int **,int const**) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_1, vdisp_t *VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5,
        jsval_t *VAR_6)
{
    jsdisp_t *VAR_7;
    DWORD VAR_8;
    HRESULT VAR_9;

    FUNC_1("\n");

    VAR_9 = FUNC_3(VAR_1, VAR_2, &VAR_7, &VAR_8);
    if(FUNC_0(VAR_9))
        return VAR_9;

    if(VAR_4) {
        const WCHAR *VAR_10;
        jsstr_t *VAR_11;

        VAR_9 = FUNC_7(VAR_1, VAR_5[0], &VAR_11, &VAR_10);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_9 = FUNC_2(VAR_1, VAR_7, VAR_8, VAR_10, FUNC_4(VAR_11), VAR_6);

        FUNC_5(VAR_11);
    }else {
        VAR_9 = FUNC_2(VAR_1, VAR_7, VAR_8, VAR_0, FUNC_6(VAR_0), VAR_6);
    }

    return VAR_9;
}
