
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


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int *,int ,int ,int *,int *) ;
 int FUNC_6 (int *,int *,int **,unsigned int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned int,int *) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;

__attribute__((used)) static HRESULT FUNC_15(script_ctx_t *VAR_5, vdisp_t *VAR_6, WORD VAR_7, unsigned VAR_8, jsval_t *VAR_9,
        jsval_t *VAR_10)
{
    jsval_t VAR_11, VAR_12[3], VAR_13;
    jsdisp_t *VAR_14;
    unsigned VAR_15, VAR_16;
    HRESULT VAR_17;

    FUNC_3("\n");

    VAR_17 = FUNC_6(VAR_5, VAR_6, &VAR_14, &VAR_15);
    if(FUNC_1(VAR_17))
        return VAR_17;


    if(!VAR_8 || !FUNC_8(VAR_9[0]) || !FUNC_7(VAR_9[0])) {
        FUNC_2("Invalid arg %s\n", FUNC_4(VAR_8 ? VAR_9[0] : FUNC_14()));
        return VAR_2;
    }

    if(VAR_8 > 1 && !FUNC_9(VAR_9[1])) {
        FUNC_2("Unsupported context this %s\n", FUNC_4(VAR_9[1]));
        return VAR_3;
    }

    for(VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
        VAR_17 = FUNC_10(VAR_14, VAR_16, &VAR_11);
        if(VAR_17 == VAR_1)
            continue;
        if(FUNC_1(VAR_17))
            return VAR_17;

        VAR_12[0] = VAR_11;
        VAR_12[1] = FUNC_11(VAR_16);
        VAR_12[2] = FUNC_12(VAR_14);
        VAR_17 = FUNC_5(VAR_5, FUNC_7(VAR_9[0]), ((void*)0), VAR_0, FUNC_0(VAR_12), VAR_12, &VAR_13);
        FUNC_13(VAR_11);
        if(FUNC_1(VAR_17))
            return VAR_17;
        FUNC_13(VAR_13);
    }

    if(VAR_10) *VAR_10 = FUNC_14();
    return VAR_4;
}
