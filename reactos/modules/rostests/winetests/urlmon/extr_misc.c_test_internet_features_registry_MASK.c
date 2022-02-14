
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,char const*,int *) ;
 scalar_t__ FUNC_7 (int ,char*,int ,int ,int *,int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_8 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,scalar_t__) ;
 int VAR_14 ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,char) ;
 char const* VAR_15 ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(void) {
    HRESULT VAR_16;
    DWORD VAR_17;
    char VAR_18[VAR_8];
    char *VAR_19;
    HKEY VAR_20;
    HKEY VAR_21;
    DWORD VAR_22;
    BOOL VAR_23;
    BOOL VAR_24 = VAR_13;

    static const char* VAR_25 = "FEATURE_BEHAVIORS";
    static const char* VAR_26 = "FEATURE_ZONE_ELEVATION";

    if(!VAR_14) {
        FUNC_14("Skipping internet feature registry tests, IE is too old...\n");
        return;
    }

    VAR_17 = FUNC_1(((void*)0), VAR_18, sizeof(VAR_18));
    FUNC_8(VAR_17, "GetModuleFileName failed: %d\n", FUNC_0());

    VAR_19 = FUNC_12(VAR_18, '\\')+1;


    VAR_17 = FUNC_6(VAR_6, VAR_15, &VAR_20);
    FUNC_8(VAR_17 == VAR_1, "RegCreateKey failed: %d\n", VAR_17);

    VAR_17 = FUNC_6(VAR_20, VAR_25, &VAR_21);
    if(VAR_17 == VAR_1) {

        VAR_24 = VAR_2;
    }else {
        VAR_17 = FUNC_3(VAR_20, VAR_25, &VAR_21);
        FUNC_8(VAR_17 == VAR_1, "RegCreateKey failed: %d\n", VAR_17);
    }

    VAR_22 = 0;
    VAR_17 = FUNC_7(VAR_21, VAR_19, 0, VAR_9, (BYTE*)&VAR_22, sizeof(DWORD));
    FUNC_8(VAR_17 == VAR_1, "RegSetValueEx failed: %d\n", VAR_17);

    VAR_16 = FUNC_9(VAR_3, VAR_5);
    FUNC_8(VAR_16 == VAR_11, "CoInternetIsFeatureEnabled returned %08x, expected S_FALSE\n", VAR_16);

    if(VAR_24) {
        FUNC_2(VAR_21);
        FUNC_4(VAR_20, VAR_25);
    } else {
        FUNC_5(VAR_21, VAR_19);
        FUNC_2(VAR_21);
    }


    VAR_16 = FUNC_9(VAR_3, VAR_5);
    FUNC_8(VAR_16 == VAR_11, "CoInternetIsFeatureEnabled returned %08x, expected S_FALSE\n", VAR_16);


    VAR_16 = FUNC_10(VAR_3, VAR_10, VAR_13);
    FUNC_8(VAR_16 == VAR_12, "CoInternetSetFeatureEnabled failed: %08x\n", VAR_16);

    FUNC_2(VAR_20);

    VAR_17 = FUNC_6(VAR_7, VAR_15, &VAR_20);
    FUNC_8(VAR_17 == VAR_1, "RegOpenKey failed: %d\n", VAR_17);

    VAR_17 = FUNC_6(VAR_20, VAR_26, &VAR_21);
    FUNC_8(VAR_17 == VAR_1, "RegOpenKey failed: %d\n", VAR_17);

    VAR_22 = 1;
    VAR_17 = FUNC_7(VAR_21, "*", 0, VAR_9, (BYTE*)&VAR_22, sizeof(DWORD));
    if (VAR_17 == VAR_0)
    {
        FUNC_11("Not allowed to modify zone elevation\n");
        VAR_23 = VAR_13;
    }
    else
    {
        VAR_23 = VAR_2;
        FUNC_8(VAR_17 == VAR_1, "RegSetValueEx failed: %d\n", VAR_17);

        VAR_16 = FUNC_9(VAR_4, VAR_5);
        FUNC_8(VAR_16 == VAR_12, "CoInternetIsFeatureEnabled returned %08x, expected S_OK\n", VAR_16);
    }
    FUNC_5(VAR_21, "*");
    FUNC_2(VAR_21);
    FUNC_2(VAR_20);


    if (!VAR_23)
    {
        VAR_16 = FUNC_9(VAR_4, VAR_5);
        FUNC_8(VAR_16 == VAR_12, "CoInternetIsFeatureEnabled returned %08x, expected S_OK\n", VAR_16);

        VAR_16 = FUNC_10(VAR_4, VAR_10, VAR_2);
        FUNC_8(VAR_16 == VAR_12, "CoInternetSetFeatureEnabled failed: %08x\n", VAR_16);
    }

    FUNC_13();
}
