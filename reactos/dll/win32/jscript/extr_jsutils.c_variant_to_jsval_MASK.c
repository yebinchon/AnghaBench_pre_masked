
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsval_t ;
typedef int jsstr_t ;
typedef int VARIANT ;
typedef int IDispatch ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,void**) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (int ,int ) ;
 int * FUNC_21 () ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 () ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 () ;
 int FUNC_28 (int *,int *) ;

HRESULT FUNC_29(VARIANT *VAR_5, jsval_t *VAR_6)
{
    if(FUNC_19(VAR_5) == (VAR_4|VAR_3))
        VAR_5 = FUNC_18(VAR_5);

    switch(FUNC_19(VAR_5)) {
    case 140:
        *VAR_6 = FUNC_27();
        return VAR_2;
    case 135:
        *VAR_6 = FUNC_24();
        return VAR_2;
    case 143:
        *VAR_6 = FUNC_22(FUNC_4(VAR_5));
        return VAR_2;
    case 137:
        *VAR_6 = FUNC_25(FUNC_9(VAR_5));
        return VAR_2;
    case 133:
        *VAR_6 = FUNC_25(FUNC_12(VAR_5));
        return VAR_2;
    case 142: {
        jsstr_t *VAR_7;

        if(FUNC_5(VAR_5)) {
            VAR_7 = FUNC_20(FUNC_5(VAR_5), FUNC_3(FUNC_5(VAR_5)));
            if(!VAR_7)
                return VAR_0;
        }else {
            VAR_7 = FUNC_21();
        }

        *VAR_6 = FUNC_26(VAR_7);
        return VAR_2;
    }
    case 141: {
        if(FUNC_6(VAR_5))
            FUNC_0(FUNC_6(VAR_5));
        *VAR_6 = FUNC_23(FUNC_6(VAR_5));
        return VAR_2;
    }
    case 139:
        *VAR_6 = FUNC_25(FUNC_7(VAR_5));
        return VAR_2;
    case 132:
        *VAR_6 = FUNC_25(FUNC_13(VAR_5));
        return VAR_2;
    case 138:
        *VAR_6 = FUNC_25(FUNC_8(VAR_5));
        return VAR_2;
    case 131:
        *VAR_6 = FUNC_25(FUNC_14(VAR_5));
        return VAR_2;
    case 136:
        *VAR_6 = FUNC_25(FUNC_10(VAR_5));
        return VAR_2;
    case 130:
        *VAR_6 = FUNC_25(FUNC_15(VAR_5));
        return VAR_2;
    case 129:




        *VAR_6 = FUNC_25(FUNC_16(VAR_5));
        return VAR_2;
    case 134:
        *VAR_6 = FUNC_25(FUNC_11(VAR_5));
        return VAR_2;
    case 128:
        if(FUNC_17(VAR_5)) {
            IDispatch *VAR_8;
            HRESULT VAR_9;

            VAR_9 = FUNC_1(FUNC_17(VAR_5), &VAR_1, (void**)&VAR_8);
            if(FUNC_2(VAR_9)) {
                *VAR_6 = FUNC_23(VAR_8);
                return VAR_2;
            }
        }else {
            *VAR_6 = FUNC_23(((void*)0));
            return VAR_2;
        }

    default:
        return FUNC_28(VAR_6, VAR_5);
    }
}
