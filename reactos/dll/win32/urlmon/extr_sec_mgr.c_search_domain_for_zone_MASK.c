
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LPCWSTR ;
typedef int INT ;
typedef int HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int ,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *,scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,int *) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__*) ;
 int * FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_13(HKEY VAR_7, LPCWSTR VAR_8, DWORD VAR_9, LPCWSTR VAR_10,
                                      LPCWSTR VAR_11, DWORD VAR_12, DWORD *VAR_13)
{
    BOOL VAR_14 = VAR_3;
    HKEY VAR_15;
    DWORD VAR_16;
    LPCWSTR VAR_17;

    if(VAR_12 >= VAR_9 && FUNC_11(VAR_8, VAR_11, VAR_6, &VAR_17)) {
        VAR_16 = FUNC_3(VAR_7, VAR_8, &VAR_15);
        if(VAR_16 != VAR_0) {
            FUNC_0("Failed to open domain key %s: %d\n", FUNC_5(VAR_8), VAR_16);
            return VAR_2;
        }

        if(VAR_17 == VAR_11)
            VAR_14 = FUNC_7(VAR_15, VAR_10, VAR_13);
        else {
            INT VAR_18;
            DWORD VAR_19, VAR_20;
            BOOL VAR_21 = VAR_6;

            FUNC_6(VAR_8, VAR_9, &VAR_18);

            VAR_16 = FUNC_4(VAR_15, ((void*)0), ((void*)0), ((void*)0), &VAR_19, &VAR_20,
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
            if(VAR_16 != VAR_0) {
                FUNC_0("Unable to query info for key %s: %d\n", FUNC_5(VAR_8), VAR_16);
                FUNC_1(VAR_15);
                return VAR_2;
            }

            if(VAR_19) {
                WCHAR *VAR_22;
                WCHAR *VAR_23;
                DWORD VAR_24;

                VAR_22 = FUNC_8((VAR_20+1)*sizeof(WCHAR));
                if(!VAR_22) {
                    FUNC_1(VAR_15);
                    return VAR_1;
                }

                VAR_23 = FUNC_10(VAR_11, VAR_17-VAR_11-1);
                if(!VAR_23) {
                    FUNC_9(VAR_22);
                    FUNC_1(VAR_15);
                    return VAR_1;
                }

                for(VAR_24 = 0; VAR_24 < VAR_19; ++VAR_24) {
                    DWORD VAR_25 = VAR_20+1;
                    const WCHAR *VAR_26;

                    VAR_16 = FUNC_2(VAR_15, VAR_24, VAR_22, &VAR_25, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
                    if(VAR_16 != VAR_0) {
                        FUNC_9(VAR_23);
                        FUNC_9(VAR_22);
                        FUNC_1(VAR_15);
                        return VAR_2;
                    }

                    if(FUNC_11(VAR_22, VAR_23, VAR_3, &VAR_26)) {
                        HKEY VAR_27;

                        VAR_16 = FUNC_3(VAR_15, VAR_22, &VAR_27);
                        if(VAR_16 != VAR_0) {
                            FUNC_0("Unable to open subdomain key %s of %s: %d\n", FUNC_5(VAR_22),
                                FUNC_5(VAR_8), VAR_16);
                            FUNC_9(VAR_23);
                            FUNC_9(VAR_22);
                            FUNC_1(VAR_15);
                            return VAR_2;
                        }

                        VAR_14 = FUNC_7(VAR_27, VAR_10, VAR_13);
                        VAR_21 = VAR_3;
                        FUNC_1(VAR_27);
                        break;
                    }
                }
                FUNC_9(VAR_22);
                FUNC_9(VAR_23);
            }
            if(VAR_21 && !VAR_18 && !FUNC_12(VAR_11, VAR_17-VAR_11-1))
                VAR_14 = FUNC_7(VAR_15, VAR_10, VAR_13);
        }
        FUNC_1(VAR_15);
    }

    return VAR_14 ? VAR_5 : VAR_4;
}
