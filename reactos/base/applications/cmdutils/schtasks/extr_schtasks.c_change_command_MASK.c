
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IRegisteredTask ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int * FUNC_5 (int const*) ;
 int FUNC_6 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(int VAR_6, WCHAR *VAR_7[])
{
    BOOL VAR_8 = VAR_0, VAR_9 = VAR_0;
    const WCHAR *VAR_10 = ((void*)0);
    IRegisteredTask *VAR_11;
    HRESULT VAR_12;

    while (VAR_6) {
        if(!FUNC_6(VAR_7[0], VAR_4)) {
            if (VAR_6 < 2) {
                FUNC_1("Missing /tn value\n");
                return 1;
            }

            if (VAR_10) {
                FUNC_1("Duplicated /tn argument\n");
                return 1;
            }

            VAR_10 = VAR_7[1];
            VAR_6 -= 2;
            VAR_7 += 2;
        }else if (!FUNC_6(VAR_7[0], VAR_3)) {
            VAR_9 = VAR_1;
            VAR_8 = VAR_1;
            VAR_6--;
            VAR_7++;
        }else if (!FUNC_6(VAR_7[0], VAR_5)) {
            if (VAR_6 < 2) {
                FUNC_1("Missing /tr value\n");
                return 1;
            }

            FUNC_1("Unsupported /tr option %s\n", FUNC_4(VAR_7[1]));
            VAR_8 = VAR_1;
            VAR_6 -= 2;
            VAR_7 += 2;
        }else {
            FUNC_1("Unsupported arguments %s\n", FUNC_4(VAR_7[0]));
            return 1;
        }
    }

    if (!VAR_10) {
        FUNC_1("Missing /tn option\n");
        return 1;
    }

    if (!VAR_8) {
        FUNC_1("Missing change options\n");
        return 1;
    }

    VAR_11 = FUNC_5(VAR_10);
    if (!VAR_11)
        return 1;

    if (VAR_9) {
        VAR_12 = FUNC_3(VAR_11, VAR_2);
        if (FUNC_0(VAR_12)) {
            FUNC_2(VAR_11);
            FUNC_1("put_Enabled failed: %08x\n", VAR_12);
            return 1;
        }
    }

    FUNC_2(VAR_11);
    return 0;
}
