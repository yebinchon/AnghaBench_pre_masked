
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v40 ;
typedef int buf ;
typedef char WCHAR ;
typedef int VARIANT_BOOL ;
typedef int ULONG ;
typedef int IUnknown ;
typedef int IOmNavigator ;
typedef int IHTMLWindow2 ;
typedef int IHTMLDocument2 ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *,int **) ;
 int FUNC_8 (int *,int **) ;
 int FUNC_9 (int *,int **) ;
 int FUNC_10 (int *,int*) ;
 int FUNC_11 (int *,int **) ;
 int FUNC_12 (int *,int **) ;
 int FUNC_13 (int *,int **) ;
 int FUNC_14 (int *,int **) ;
 int FUNC_15 (int *,int **) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (int ,char*,int*) ;
 int VAR_5 ;
 int FUNC_17 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int *,char const*,int) ;
 int FUNC_20 (int,char*,...) ;
 int FUNC_21 () ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int *,char*) ;
 int FUNC_24 (char*,char*,int) ;
 int FUNC_25 (int *,int *,int *,char*) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static void FUNC_30(IHTMLDocument2 *VAR_7)
{
    IHTMLWindow2 *VAR_8;
    IOmNavigator *VAR_9, *VAR_10;
    VARIANT_BOOL VAR_11;
    char VAR_12[512];
    DWORD VAR_13;
    ULONG VAR_14;
    BSTR VAR_15;
    HRESULT VAR_16;

    static const WCHAR VAR_17[] = {'4','.','0'};

    VAR_16 = FUNC_0(VAR_7, &VAR_8);
    FUNC_20(VAR_16 == VAR_5, "parentWidnow failed: %08x\n", VAR_16);

    VAR_16 = FUNC_2(VAR_8, &VAR_9);
    FUNC_20(VAR_16 == VAR_5, "get_navigator failed: %08x\n", VAR_16);
    FUNC_20(VAR_9 != ((void*)0), "navigator == NULL\n");
    FUNC_25((IUnknown*)VAR_9, &VAR_0, &VAR_2, "[object]");

    VAR_16 = FUNC_2(VAR_8, &VAR_10);
    FUNC_20(VAR_16 == VAR_5, "get_navigator failed: %08x\n", VAR_16);
    FUNC_20(VAR_9 != VAR_10, "navigator2 != navihgator\n");

    FUNC_1(VAR_8);
    FUNC_3(VAR_10);

    VAR_16 = FUNC_4(VAR_9, &VAR_15);
    FUNC_20(VAR_16 == VAR_5, "get_appCodeName failed: %08x\n", VAR_16);
    FUNC_20(!FUNC_23(VAR_15, "Mozilla"), "Unexpected appCodeName %s\n", FUNC_29(VAR_15));
    FUNC_17(VAR_15);

    VAR_15 = ((void*)0);
    VAR_16 = FUNC_6(VAR_9, &VAR_15);
    FUNC_20(VAR_16 == VAR_5, "get_appName failed: %08x\n", VAR_16);
    FUNC_20(!FUNC_23(VAR_15, "Microsoft Internet Explorer"), "Unexpected appCodeName %s\n", FUNC_29(VAR_15));
    FUNC_17(VAR_15);

    VAR_15 = ((void*)0);
    VAR_16 = FUNC_11(VAR_9, &VAR_15);
    FUNC_20(VAR_16 == VAR_5, "get_platform failed: %08x\n", VAR_16);
    FUNC_20(!FUNC_23(VAR_15, sizeof(void*) == 8 ? "Win64" : "Win32")
       || (sizeof(void*) == 8 && FUNC_18(!FUNC_23(VAR_15, "Win32") )), "unexpected platform %s\n", FUNC_29(VAR_15));
    FUNC_17(VAR_15);

    VAR_15 = ((void*)0);
    VAR_16 = FUNC_9(VAR_9, &VAR_15);
    FUNC_20(VAR_16 == VAR_5, "get_cpuClass failed: %08x\n", VAR_16);
    FUNC_20(!FUNC_23(VAR_15, sizeof(void*) == 8 ? "x64" : "x86"), "unexpected cpuClass %s\n", FUNC_29(VAR_15));
    FUNC_17(VAR_15);

    VAR_15 = ((void*)0);
    VAR_16 = FUNC_7(VAR_9, &VAR_15);
    FUNC_20(VAR_16 == VAR_5, "get_appVersion failed: %08x\n", VAR_16);
    FUNC_20(!FUNC_19(VAR_15, VAR_17, sizeof(VAR_17)), "appVersion is %s\n", FUNC_29(VAR_15));
    FUNC_17(VAR_15);

    VAR_15 = ((void*)0);
    VAR_16 = FUNC_12(VAR_9, &VAR_15);
    FUNC_20(VAR_16 == VAR_5, "get_systemLanguage failed: %08x\n", VAR_16);
    FUNC_26(VAR_15, VAR_3);
    FUNC_17(VAR_15);

    if (&FUNC_21)
    {
        VAR_15 = ((void*)0);
        VAR_16 = FUNC_8(VAR_9, &VAR_15);
        FUNC_20(VAR_16 == VAR_5, "get_browserLanguage failed: %08x\n", VAR_16);
        FUNC_26(VAR_15, FUNC_21());
        FUNC_17(VAR_15);
    }
    else
        FUNC_28("GetUserDefaultUILanguage not available\n");

    VAR_15 = ((void*)0);
    VAR_16 = FUNC_14(VAR_9, &VAR_15);
    FUNC_20(VAR_16 == VAR_5, "get_userLanguage failed: %08x\n", VAR_16);
    FUNC_26(VAR_15, VAR_4);
    FUNC_17(VAR_15);

    VAR_16 = FUNC_15(VAR_9, ((void*)0));
    FUNC_20(VAR_16 == VAR_1, "toString failed: %08x\n", VAR_16);

    VAR_15 = ((void*)0);
    VAR_16 = FUNC_15(VAR_9, &VAR_15);
    FUNC_20(VAR_16 == VAR_5, "toString failed: %08x\n", VAR_16);
    FUNC_20(!FUNC_23(VAR_15, "[object]"), "toString returned %s\n", FUNC_29(VAR_15));
    FUNC_17(VAR_15);

    VAR_11 = 100;
    VAR_16 = FUNC_10(VAR_9, &VAR_11);
    FUNC_20(VAR_16 == VAR_5, "get_onLine failed: %08x\n", VAR_16);
    FUNC_20(VAR_11 == VAR_6, "onLine = %x\n", VAR_11);

    VAR_13 = sizeof(VAR_12);
    VAR_16 = FUNC_16(0, VAR_12, &VAR_13);
    FUNC_20(VAR_16 == VAR_5, "ObtainUserAgentString failed: %08x\n", VAR_16);

    VAR_15 = ((void*)0);
    VAR_16 = FUNC_13(VAR_9, &VAR_15);
    FUNC_20(VAR_16 == VAR_5, "get_userAgent failed: %08x\n", VAR_16);
    FUNC_20(!FUNC_23(VAR_15, VAR_12), "userAgent returned %s, expected \"%s\"\n", FUNC_29(VAR_15), VAR_12);
    FUNC_17(VAR_15);

    if(!FUNC_24(VAR_12, "Mozilla/", 8)) {
        VAR_15 = ((void*)0);
        VAR_16 = FUNC_7(VAR_9, &VAR_15);
        FUNC_20(VAR_16 == VAR_5, "get_appVersion failed: %08x\n", VAR_16);
        FUNC_20(!FUNC_23(VAR_15, VAR_12+8), "appVersion returned %s, expected \"%s\"\n", FUNC_29(VAR_15), VAR_12+8);
        FUNC_17(VAR_15);
    }else {
        FUNC_22("nonstandard user agent\n");
    }

    VAR_15 = ((void*)0);
    VAR_16 = FUNC_5(VAR_9, &VAR_15);
    FUNC_20(VAR_16 == VAR_5, "get_appMonorVersion failed: %08x\n", VAR_16);
    FUNC_20(VAR_15 != ((void*)0), "appMinorVersion returned NULL\n");
    FUNC_17(VAR_15);

    FUNC_27(VAR_9);

    VAR_14 = FUNC_3(VAR_9);
    FUNC_20(!VAR_14, "navigator should be destroyed here\n");
}
