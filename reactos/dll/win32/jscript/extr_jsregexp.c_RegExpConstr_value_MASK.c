
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
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int *,int **) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_12(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6, unsigned VAR_7, jsval_t *VAR_8,
        jsval_t *VAR_9)
{
    FUNC_2("\n");

    switch(VAR_6) {
    case 128:
        if(VAR_7) {
            if(FUNC_7(VAR_8[0])) {
                jsdisp_t *VAR_10 = FUNC_5(FUNC_4(VAR_8[0]));
                if(VAR_10) {
                    if(FUNC_6(VAR_10, VAR_1)) {
                        if(VAR_7 > 1 && !FUNC_8(VAR_8[1])) {
                            FUNC_9(VAR_10);
                            return FUNC_11(VAR_4, VAR_2, ((void*)0));
                        }

                        if(VAR_9)
                            *VAR_9 = FUNC_10(VAR_10);
                        else
                            FUNC_9(VAR_10);
                        return VAR_3;
                    }
                    FUNC_9(VAR_10);
                }
            }
        }

    case 129: {
        jsdisp_t *VAR_11;
        HRESULT VAR_12;

        if(!VAR_7) {
            FUNC_1("no args\n");
            return VAR_0;
        }

        VAR_12 = FUNC_3(VAR_4, VAR_8[0], VAR_7 > 1 ? VAR_8+1 : ((void*)0), &VAR_11);
        if(FUNC_0(VAR_12))
            return VAR_12;

        if(VAR_9)
            *VAR_9 = FUNC_10(VAR_11);
        else
            FUNC_9(VAR_11);
        return VAR_3;
    }
    default:
        FUNC_1("unimplemented flags: %x\n", VAR_6);
        return VAR_0;
    }

    return VAR_3;
}
