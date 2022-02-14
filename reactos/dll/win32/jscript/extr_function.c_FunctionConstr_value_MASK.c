
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
typedef int IDispatch ;
typedef int HRESULT ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,unsigned int,int *,int **) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    HRESULT VAR_8;

    FUNC_2("\n");

    switch(VAR_4) {
    case 128:
    case 129: {
        IDispatch *VAR_9;

        VAR_8 = FUNC_3(VAR_2, VAR_5, VAR_6, &VAR_9);
        if(FUNC_0(VAR_8))
            return VAR_8;

        *VAR_7 = FUNC_4(VAR_9);
        break;
    }
    default:
        FUNC_1("unimplemented flags %x\n", VAR_4);
        return VAR_0;
    }

    return VAR_1;
}
