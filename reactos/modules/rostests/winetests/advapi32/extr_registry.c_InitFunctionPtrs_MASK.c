
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;

__attribute__((used)) static void FUNC_3(void)
{
    HMODULE VAR_10 = FUNC_1("ntdll.dll");
    HMODULE VAR_11 = FUNC_1("kernel32.dll");
    HMODULE VAR_12 = FUNC_1("advapi32.dll");


    FUNC_0(VAR_4);
    FUNC_0(VAR_0);
    FUNC_0(VAR_3);
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_5);

    VAR_6 = (void *)FUNC_2( VAR_11, "IsWow64Process" );
    VAR_8 = (void *)FUNC_2( VAR_10, "RtlFormatCurrentUserKeyPath" );
    VAR_9 = (void *)FUNC_2(VAR_10, "RtlFreeUnicodeString");
    VAR_7 = (void *)FUNC_2( VAR_10, "NtDeleteKey" );
}
