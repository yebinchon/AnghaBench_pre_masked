
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
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_14 = FUNC_0("ole32");
    HMODULE VAR_15 = FUNC_0("advapi32");
    HMODULE VAR_16 = FUNC_0("kernel32");

    VAR_3 = (void*)FUNC_1(VAR_14, "CoGetObjectContext");
    VAR_6 = (void*)FUNC_1(VAR_14, "CoSwitchCallContext");
    VAR_4 = (void*)FUNC_1(VAR_14,"CoGetTreatAsClass");
    VAR_7 = (void*)FUNC_1(VAR_14,"CoTreatAsClass");
    VAR_2 = (void*)FUNC_1(VAR_14, "CoGetContextToken");
    VAR_1 = (void*)FUNC_1(VAR_14, "CoGetApartmentType");
    VAR_11 = (void*)FUNC_1(VAR_15, "RegDeleteKeyExA");
    VAR_12 = (void*)FUNC_1(VAR_15, "RegOverridePredefKey");
    VAR_5 = (void*)FUNC_1(VAR_14, "CoInitializeEx");

    VAR_0 = (void*)FUNC_1(VAR_16, "ActivateActCtx");
    VAR_8 = (void*)FUNC_1(VAR_16, "CreateActCtxW");
    VAR_9 = (void*)FUNC_1(VAR_16, "DeactivateActCtx");
    VAR_10 = (void*)FUNC_1(VAR_16, "IsWow64Process");
    VAR_13 = (void*)FUNC_1(VAR_16, "ReleaseActCtx");
}
