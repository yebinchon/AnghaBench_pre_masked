
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
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,double,int **) ;
 int FUNC_4 (double) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    double VAR_8;
    HRESULT VAR_9;

    FUNC_2("\n");

    switch(VAR_4) {
    case 128:
        if(!VAR_5) {
            if(VAR_7)
                *VAR_7 = FUNC_4(0);
            return VAR_1;
        }

        VAR_9 = FUNC_6(VAR_2, VAR_6[0], &VAR_8);
        if(FUNC_0(VAR_9))
            return VAR_9;

        if(VAR_7)
            *VAR_7 = FUNC_4(VAR_8);
        break;

    case 129: {
        jsdisp_t *VAR_10;

        if(VAR_5) {
            VAR_9 = FUNC_6(VAR_2, VAR_6[0], &VAR_8);
            if(FUNC_0(VAR_9))
                return VAR_9;
        }else {
            VAR_8 = 0;
        }

        VAR_9 = FUNC_3(VAR_2, VAR_8, &VAR_10);
        if(FUNC_0(VAR_9))
            return VAR_9;

        *VAR_7 = FUNC_5(VAR_10);
        break;
    }
    default:
        FUNC_1("unimplemented flags %x\n", VAR_4);
        return VAR_0;
    }

    return VAR_1;
}
