
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ctx; } ;
typedef TYPE_1__ stringify_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int WCHAR ;
typedef scalar_t__ HRESULT ;
typedef int DISPID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;







 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int const*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (double,int **) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 double FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int ) ;
 int * FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (double) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int *,int ,int ,int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (TYPE_1__*,int const*,int ) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ,int ,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_24 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_25 (TYPE_1__*,int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static HRESULT FUNC_26(stringify_ctx_t *VAR_9, jsval_t VAR_10)
{
    jsval_t VAR_11;
    HRESULT VAR_12;

    if(FUNC_14(VAR_10) && FUNC_8(VAR_10)) {
        jsdisp_t *VAR_13;
        DISPID VAR_14;

        VAR_13 = FUNC_10(FUNC_8(VAR_10));
        if(!VAR_13)
            return VAR_3;

        VAR_12 = FUNC_15(VAR_13, VAR_7, 0, &VAR_14);
        FUNC_16(VAR_13);
        if(VAR_12 == VAR_4)
            FUNC_1("Use toJSON.\n");
    }



    VAR_12 = FUNC_23(VAR_9->ctx, VAR_10, &VAR_11);
    if(FUNC_0(VAR_12))
        return VAR_12;

    switch(FUNC_22(VAR_11)) {
    case 133:
        if(!FUNC_2(VAR_9, VAR_6))
            VAR_12 = VAR_1;
        break;
    case 134:
        if(!FUNC_2(VAR_9, FUNC_6(VAR_11) ? VAR_8 : VAR_5))
            VAR_12 = VAR_1;
        break;
    case 130: {
        jsstr_t *VAR_15 = FUNC_9(VAR_11);
        const WCHAR *VAR_16 = FUNC_18(VAR_15);
        if(VAR_16)
            VAR_12 = FUNC_17(VAR_9, VAR_16, FUNC_19(VAR_15));
        else
            VAR_12 = VAR_1;
        break;
    }
    case 132: {
        double VAR_17 = FUNC_7(VAR_11);
        if(FUNC_13(VAR_17)) {
            const WCHAR *VAR_18;
            jsstr_t *VAR_19;


            VAR_12 = FUNC_5(VAR_17, &VAR_19);
            if(FUNC_0(VAR_12))
                break;

            VAR_18 = FUNC_18(VAR_19);
            FUNC_4(VAR_18 != ((void*)0));
            VAR_12 = VAR_18 && !FUNC_3(VAR_9, VAR_18, FUNC_19(VAR_19)) ? VAR_1 : VAR_4;
            FUNC_20(VAR_19);
        }else {
            if(!FUNC_2(VAR_9, VAR_6))
                VAR_12 = VAR_1;
        }
        break;
    }
    case 131: {
        jsdisp_t *VAR_20;

        VAR_20 = FUNC_10(FUNC_8(VAR_11));
        if(!VAR_20) {
            VAR_12 = VAR_3;
            break;
        }

        if(!FUNC_11(VAR_20))
            VAR_12 = FUNC_12(VAR_20, VAR_2) ? FUNC_24(VAR_9, VAR_20) : FUNC_25(VAR_9, VAR_20);
        else
            VAR_12 = VAR_3;

        FUNC_16(VAR_20);
        break;
    }
    case 129:
        VAR_12 = VAR_3;
        break;
    case 128:
        FUNC_1("VARIANT\n");
        VAR_12 = VAR_0;
        break;
    }

    FUNC_21(VAR_11);
    return VAR_12;
}
