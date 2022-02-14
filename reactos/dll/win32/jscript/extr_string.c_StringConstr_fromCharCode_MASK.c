
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef unsigned int WCHAR ;
typedef int HRESULT ;
typedef unsigned int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (unsigned int,unsigned int**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,unsigned int*) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4,
        unsigned VAR_5, jsval_t *VAR_6, jsval_t *VAR_7)
{
    WCHAR *VAR_8;
    DWORD VAR_9, VAR_10;
    jsstr_t *VAR_11;
    HRESULT VAR_12;

    FUNC_1("\n");

    VAR_11 = FUNC_2(VAR_5, &VAR_8);
    if(!VAR_11)
        return VAR_0;

    for(VAR_9=0; VAR_9<VAR_5; VAR_9++) {
        VAR_12 = FUNC_5(VAR_2, VAR_6[VAR_9], &VAR_10);
        if(FUNC_0(VAR_12)) {
            FUNC_3(VAR_11);
            return VAR_12;
        }

        VAR_8[VAR_9] = VAR_10;
    }

    if(VAR_7)
        *VAR_7 = FUNC_4(VAR_11);
    else
        FUNC_3(VAR_11);
    return VAR_1;
}
