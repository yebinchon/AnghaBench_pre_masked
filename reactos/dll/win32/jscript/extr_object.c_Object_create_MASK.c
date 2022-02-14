
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


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int *,int *,int **) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int * FUNC_14 (scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_15(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4,
                             unsigned VAR_5, jsval_t *VAR_6, jsval_t *VAR_7)
{
    jsdisp_t *VAR_8 = ((void*)0), *VAR_9;
    HRESULT VAR_10;

    if(!VAR_5 || (!FUNC_8(VAR_6[0]) && !FUNC_7(VAR_6[0]))) {
        FUNC_1("Invalid arg\n");
        return VAR_0;
    }

    FUNC_3("(%s)\n", FUNC_5(VAR_6[0]));

    if(VAR_5 && FUNC_8(VAR_6[0])) {
        if(FUNC_6(VAR_6[0]))
            VAR_8 = FUNC_14(FUNC_6(VAR_6[0]));
        if(!VAR_8) {
            FUNC_1("Non-JS prototype\n");
            return VAR_1;
        }
    }else if(!FUNC_7(VAR_6[0])) {
        FUNC_1("Invalid arg %s\n", FUNC_5(VAR_5 ? VAR_6[0] : FUNC_13()));
        return VAR_0;
    }

    VAR_10 = FUNC_4(VAR_2, ((void*)0), VAR_8, &VAR_9);
    if(FUNC_0(VAR_10))
        return VAR_10;

    if(VAR_5 >= 2 && !FUNC_9(VAR_6[1]))
        VAR_10 = FUNC_10(VAR_2, VAR_9, VAR_6[1]);

    if(FUNC_2(VAR_10) && VAR_7)
        *VAR_7 = FUNC_12(VAR_9);
    else
        FUNC_11(VAR_9);
    return VAR_10;
}
