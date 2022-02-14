
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

__attribute__((used)) static void FUNC_3(void)
{
    VAR_0 = FUNC_1("ntdll.dll");
    FUNC_2(VAR_0 != 0, "LoadLibrary failed\n");
    if (VAR_0) {
 VAR_1 = (void *)FUNC_0(VAR_0, "RtlExtendedMagicDivide");
 VAR_2 = (void *)FUNC_0(VAR_0, "RtlFreeAnsiString");
 VAR_3 = (void *)FUNC_0(VAR_0, "RtlInt64ToUnicodeString");
 VAR_4 = (void *)FUNC_0(VAR_0, "RtlLargeIntegerToChar");
 VAR_5 = (void *)FUNC_0(VAR_0, "RtlUnicodeStringToAnsiString");
        VAR_6 = (void *)FUNC_0(VAR_0, "_alldvrm");
        VAR_7 = (void *)FUNC_0(VAR_0, "_aulldvrm");
    }
}
