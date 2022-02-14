
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;







 double VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 double FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,double*) ;
 int FUNC_11 (int *,int ,int *,int ) ;

HRESULT FUNC_12(script_ctx_t *VAR_5, jsval_t VAR_6, double *VAR_7)
{
    switch(FUNC_9(VAR_6)) {
    case 129:
        *VAR_7 = VAR_3;
        return VAR_4;
    case 133:
        *VAR_7 = 0;
        return VAR_4;
    case 132:
        *VAR_7 = FUNC_5(VAR_6);
        return VAR_4;
    case 130:
        return FUNC_10(FUNC_6(VAR_6), VAR_7);
    case 131: {
        jsval_t VAR_8;
        HRESULT VAR_9;

        VAR_9 = FUNC_11(VAR_5, VAR_6, &VAR_8, VAR_2);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_9 = FUNC_12(VAR_5, VAR_8, VAR_7);
        FUNC_8(VAR_8);
        return VAR_9;
    }
    case 134:
        *VAR_7 = FUNC_4(VAR_6) ? 1 : 0;
        return VAR_4;
    case 128:
        FUNC_1("unimplemented for variant %s\n", FUNC_3(FUNC_7(VAR_6)));
        return VAR_1;
    };

    FUNC_2(0);
    return VAR_0;
}
