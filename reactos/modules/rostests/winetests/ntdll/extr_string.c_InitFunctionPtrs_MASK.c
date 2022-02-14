
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;

__attribute__((used)) static void FUNC_3(void)
{
    VAR_0 = FUNC_1("ntdll.dll");
    FUNC_2(VAR_0 != 0, "LoadLibrary failed\n");
    if (VAR_0) {
 VAR_4 = (void *)FUNC_0(VAR_0, "RtlUnicodeStringToAnsiString");
 VAR_2 = (void *)FUNC_0(VAR_0, "RtlFreeAnsiString");
 VAR_1 = (void *)FUNC_0(VAR_0, "RtlCreateUnicodeStringFromAsciiz");
 VAR_3 = (void *)FUNC_0(VAR_0, "RtlFreeUnicodeString");

 VAR_26 = (void *)FUNC_0(VAR_0, "atoi");
 VAR_27 = (void *)FUNC_0(VAR_0, "atol");
 VAR_6 = (void *)FUNC_0(VAR_0, "_atoi64");
 VAR_10 = (void *)FUNC_0(VAR_0, "_itoa");
 VAR_12 = (void *)FUNC_0(VAR_0, "_ltoa");
 VAR_17 = (void *)FUNC_0(VAR_0, "_ultoa");
 VAR_8 = (void *)FUNC_0(VAR_0, "_i64toa");
 VAR_15 = (void *)FUNC_0(VAR_0, "_ui64toa");

 VAR_23 = (void *)FUNC_0(VAR_0, "_wtoi");
 VAR_25 = (void *)FUNC_0(VAR_0, "_wtol");
 VAR_24 = (void *)FUNC_0(VAR_0, "_wtoi64");
 VAR_11 = (void *)FUNC_0(VAR_0, "_itow");
 VAR_13 = (void *)FUNC_0(VAR_0, "_ltow");
 VAR_18 = (void *)FUNC_0(VAR_0, "_ultow");
 VAR_9 = (void *)FUNC_0(VAR_0, "_i64tow");
 VAR_16 = (void *)FUNC_0(VAR_0, "_ui64tow");

        VAR_20 = (void *)FUNC_0(VAR_0, "_wcslwr");
        VAR_22 = (void *)FUNC_0(VAR_0, "_wcsupr");

 VAR_19= (void *)FUNC_0(VAR_0, "wcschr");
 VAR_21= (void *)FUNC_0(VAR_0, "wcsrchr");
 VAR_14= (void *)FUNC_0(VAR_0, "qsort");
 VAR_7= (void *)FUNC_0(VAR_0, "bsearch");

        VAR_5 = (void *)FUNC_0(VAR_0, "_snprintf");
    }
}
