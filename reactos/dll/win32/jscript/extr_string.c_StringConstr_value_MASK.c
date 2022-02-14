
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



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,int **) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    HRESULT VAR_8;

    FUNC_3("\n");

    switch(VAR_4) {
    case 128: {
        jsstr_t *VAR_9;

        if(VAR_5) {
            VAR_8 = FUNC_9(VAR_2, VAR_6[0], &VAR_9);
            if(FUNC_0(VAR_8))
                return VAR_8;
        }else {
            VAR_9 = FUNC_5();
        }

        *VAR_7 = FUNC_8(VAR_9);
        break;
    }
    case 129: {
        jsstr_t *VAR_10;
        jsdisp_t *VAR_11;

        if(VAR_5) {
            VAR_8 = FUNC_9(VAR_2, VAR_6[0], &VAR_10);
            if(FUNC_0(VAR_8))
                return VAR_8;
        }else {
            VAR_10 = FUNC_5();
        }

        VAR_8 = FUNC_4(VAR_2, VAR_10, &VAR_11);
        if (FUNC_2(VAR_8)) *VAR_7 = FUNC_7(VAR_11);
        FUNC_6(VAR_10);
        return VAR_8;
    }

    default:
        FUNC_1("unimplemented flags: %x\n", VAR_4);
        return VAR_0;
    }

    return VAR_1;
}
