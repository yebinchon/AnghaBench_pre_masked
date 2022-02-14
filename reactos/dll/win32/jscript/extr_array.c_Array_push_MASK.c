
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int **,scalar_t__*) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_1, vdisp_t *VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5,
        jsval_t *VAR_6)
{
    jsdisp_t *VAR_7;
    DWORD VAR_8 = 0;
    unsigned VAR_9;
    HRESULT VAR_10;

    FUNC_1("\n");

    VAR_10 = FUNC_2(VAR_1, VAR_2, &VAR_7, &VAR_8);
    if(FUNC_0(VAR_10))
        return VAR_10;

    for(VAR_9=0; VAR_9 < VAR_4; VAR_9++) {
        VAR_10 = FUNC_3(VAR_7, VAR_8+VAR_9, VAR_5[VAR_9]);
        if(FUNC_0(VAR_10))
            return VAR_10;
    }

    VAR_10 = FUNC_5(VAR_7, VAR_8+VAR_4);
    if(FUNC_0(VAR_10))
        return VAR_10;

    if(VAR_6)
        *VAR_6 = FUNC_4(VAR_8+VAR_4);
    return VAR_0;
}
