
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
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_8 = FUNC_0("oleaut32.dll");
    HMODULE VAR_9 = FUNC_0("kernel32.dll");
    HMODULE VAR_10 = FUNC_0("advapi32.dll");

    VAR_5 = (void *)FUNC_1(VAR_8, "RegisterTypeLibForUser");
    VAR_7 = (void *)FUNC_1(VAR_8, "UnRegisterTypeLibForUser");
    VAR_0 = (void *)FUNC_1(VAR_9, "ActivateActCtx");
    VAR_1 = (void *)FUNC_1(VAR_9, "CreateActCtxW");
    VAR_2 = (void *)FUNC_1(VAR_9, "DeactivateActCtx");
    VAR_6 = (void *)FUNC_1(VAR_9, "ReleaseActCtx");
    VAR_3 = (void *)FUNC_1(VAR_9, "IsWow64Process");
    VAR_4 = (void*)FUNC_1(VAR_10, "RegDeleteKeyExW");
}
