
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int **) ;
 int * FUNC_3 (unsigned int,int **) ;
 int FUNC_4 (int *,int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    jsstr_t *VAR_8;
    HRESULT VAR_9;

    FUNC_1("\n");

    VAR_9 = FUNC_2(VAR_2, VAR_3, &VAR_8);
    if(FUNC_0(VAR_9))
        return VAR_9;

    if(VAR_7) {
        unsigned VAR_10 = FUNC_5(VAR_8);
        jsstr_t *VAR_11;
        WCHAR *VAR_12;

        VAR_11 = FUNC_3(VAR_10, &VAR_12);
        if(!VAR_11) {
            FUNC_6(VAR_8);
            return VAR_0;
        }

        FUNC_4(VAR_8, VAR_12);
        for (; VAR_10--; VAR_12++) *VAR_12 = FUNC_8(*VAR_12);

        *VAR_7 = FUNC_7(VAR_11);
    }
    FUNC_6(VAR_8);
    return VAR_1;
}
