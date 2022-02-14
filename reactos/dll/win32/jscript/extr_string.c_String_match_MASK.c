
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
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int ,int **) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int **) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int *,int *,int *) ;
 int FUNC_13 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_14(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    jsdisp_t *VAR_8 = ((void*)0);
    jsstr_t *VAR_9;
    HRESULT VAR_10;

    FUNC_2("\n");

    if(!VAR_5) {
        if(VAR_7)
            *VAR_7 = FUNC_11();
        return VAR_1;
    }

    if(FUNC_8(VAR_6[0])) {
        VAR_8 = FUNC_6(FUNC_4(VAR_6[0]));
        if(VAR_8 && !FUNC_7(VAR_8, VAR_0)) {
            FUNC_9(VAR_8);
            VAR_8 = ((void*)0);
        }
    }

    if(!VAR_8) {
        jsstr_t *VAR_11;

        VAR_10 = FUNC_13(VAR_2, VAR_6[0], &VAR_11);
        if(FUNC_0(VAR_10))
            return VAR_10;

        VAR_10 = FUNC_3(VAR_2, VAR_11, 0, &VAR_8);
        FUNC_10(VAR_11);
        if(FUNC_0(VAR_10))
            return VAR_10;
    }

    VAR_10 = FUNC_5(VAR_2, VAR_3, &VAR_9);
    if(FUNC_1(VAR_10))
        VAR_10 = FUNC_12(VAR_2, VAR_8, VAR_9, VAR_7);

    FUNC_9(VAR_8);
    FUNC_10(VAR_9);
    return VAR_10;
}
