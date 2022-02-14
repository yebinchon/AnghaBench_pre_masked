
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef scalar_t__ hint_t ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef int DISPID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ,int ,int *,int *) ;
 int FUNC_10 (int *,char const*,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int ,int *) ;

HRESULT FUNC_15(script_ctx_t *VAR_8, jsval_t VAR_9, jsval_t *VAR_10, hint_t VAR_11)
{
    if(FUNC_8(VAR_9)) {
        jsdisp_t *VAR_12;
        jsval_t VAR_13;
        DISPID VAR_14;
        HRESULT VAR_15;

        static const WCHAR VAR_16[] = {'t','o','S','t','r','i','n','g',0};
        static const WCHAR VAR_17[] = {'v','a','l','u','e','O','f',0};

        if(!FUNC_5(VAR_9)) {
            *VAR_10 = FUNC_13();
            return VAR_7;
        }

        VAR_12 = FUNC_6(FUNC_5(VAR_9));
        if(!VAR_12)
            return FUNC_4(VAR_8, FUNC_5(VAR_9), VAR_1, VAR_10);

        if(VAR_11 == VAR_6)
            VAR_11 = FUNC_7(VAR_12, VAR_4) ? VAR_3 : VAR_2;



        VAR_15 = FUNC_10(VAR_12, VAR_11 == VAR_3 ? VAR_16 : VAR_17, 0, &VAR_14);
        if(FUNC_2(VAR_15)) {
            VAR_15 = FUNC_9(VAR_12, VAR_14, VAR_0, 0, ((void*)0), &VAR_13);
            if(FUNC_0(VAR_15)) {
                FUNC_3("call error - forwarding exception\n");
                FUNC_11(VAR_12);
                return VAR_15;
            }else if(!FUNC_8(VAR_13)) {
                FUNC_11(VAR_12);
                *VAR_10 = VAR_13;
                return VAR_7;
            }else {
                FUNC_1(FUNC_5(VAR_13));
            }
        }

        VAR_15 = FUNC_10(VAR_12, VAR_11 == VAR_3 ? VAR_17 : VAR_16, 0, &VAR_14);
        if(FUNC_2(VAR_15)) {
            VAR_15 = FUNC_9(VAR_12, VAR_14, VAR_0, 0, ((void*)0), &VAR_13);
            if(FUNC_0(VAR_15)) {
                FUNC_3("call error - forwarding exception\n");
                FUNC_11(VAR_12);
                return VAR_15;
            }else if(!FUNC_8(VAR_13)) {
                FUNC_11(VAR_12);
                *VAR_10 = VAR_13;
                return VAR_7;
            }else {
                FUNC_1(FUNC_5(VAR_13));
            }
        }

        FUNC_11(VAR_12);

        FUNC_3("failed\n");
        return FUNC_14(VAR_8, VAR_5, ((void*)0));
    }

    return FUNC_12(VAR_9, VAR_10);

}
