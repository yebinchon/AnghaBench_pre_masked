
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
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    jsdisp_t *VAR_9;
    HRESULT VAR_10;

    FUNC_2("\n");

    switch(VAR_5) {
    case 128: {
        if (VAR_6 > 1)
            return FUNC_5(VAR_3, VAR_1, ((void*)0));

        VAR_10 = FUNC_3(VAR_3, (VAR_6 == 1) ? &VAR_7[0] : 0, &VAR_9);
        if(FUNC_0(VAR_10))
            return VAR_10;

        *VAR_8 = FUNC_4(VAR_9);
        break;
    }
    default:
        FUNC_1("unimplemented flags: %x\n", VAR_5);
        return VAR_0;
    }

    return VAR_2;
}
