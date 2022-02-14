
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef double UINT ;
typedef int HRESULT ;



 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

 double VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,double,int *,int **) ;
 scalar_t__ FUNC_3 (double) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,double*) ;
 int FUNC_9 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7, jsdisp_t *VAR_8) {
    jsdisp_t *VAR_9;
    UINT VAR_10 = 0;
    jsstr_t *VAR_11 = ((void*)0);
    HRESULT VAR_12;

    if(VAR_5) {
        double VAR_13;

        VAR_12 = FUNC_8(VAR_3, VAR_6[0], &VAR_13);
        if(FUNC_0(VAR_12))
            VAR_13 = VAR_1;
        if(FUNC_3(VAR_13))
            VAR_12 = FUNC_9(VAR_3, VAR_6[0], &VAR_11);
        if(FUNC_0(VAR_12))
            return VAR_12;
        VAR_10 = VAR_13;
    }

    if(!VAR_11) {
        if(VAR_5 > 1) {
            VAR_12 = FUNC_9(VAR_3, VAR_6[1], &VAR_11);
            if(FUNC_0(VAR_12))
                return VAR_12;
        }else {
            VAR_11 = FUNC_5();
        }
    }

    switch(VAR_4) {
    case 128:
    case 129:
        VAR_12 = FUNC_2(VAR_3, VAR_8, VAR_10, VAR_11, &VAR_9);
        FUNC_6(VAR_11);
        if(FUNC_0(VAR_12))
            return VAR_12;

        if(VAR_7)
            *VAR_7 = FUNC_7(VAR_9);
        else
            FUNC_4(VAR_9);
        return VAR_2;

    default:
        if(VAR_11)
            FUNC_6(VAR_11);
        FUNC_1("unimplemented flags %x\n", VAR_4);
        return VAR_0;
    }
}
