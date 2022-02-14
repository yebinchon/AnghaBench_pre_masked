
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static BOOL FUNC_2(void)
{
    VAR_2 = (void *)FUNC_1(FUNC_0("ntdll.dll"), "NtQuerySystemInformation");
    VAR_3 = (void *)FUNC_1(FUNC_0("ntdll.dll"), "NtQueryVirtualMemory");
    VAR_1 = (void *)FUNC_1(FUNC_0("kernel32.dll"), "IsWow64Process");
    VAR_4 = (void *)FUNC_1(FUNC_0("kernel32.dll"), "Wow64DisableWow64FsRedirection");
    VAR_5 = (void *)FUNC_1(FUNC_0("kernel32.dll"), "Wow64RevertWow64FsRedirection");
    return VAR_0;
}
