
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_5 = FUNC_0("advapi32.dll");
    HMODULE VAR_6 = FUNC_0("kernel32.dll");

    VAR_0 = (void*)FUNC_1(VAR_5, "CreateWellKnownSid");
    VAR_2 = (void*)FUNC_1(VAR_5, "GetEventLogInformation");

    VAR_1 = (void*)FUNC_1(VAR_6, "GetComputerNameExA");
    VAR_3 = (void*)FUNC_1(VAR_6, "Wow64DisableWow64FsRedirection");
    VAR_4 = (void*)FUNC_1(VAR_6, "Wow64RevertWow64FsRedirection");
}
