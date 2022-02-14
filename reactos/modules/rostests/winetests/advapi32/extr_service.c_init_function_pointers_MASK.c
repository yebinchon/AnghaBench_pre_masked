
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

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_10 = FUNC_0("advapi32.dll");

    VAR_0 = (void*)FUNC_1(VAR_10, "ChangeServiceConfig2A");
    VAR_1 = (void*)FUNC_1(VAR_10, "ChangeServiceConfig2W");
    VAR_2= (void*)FUNC_1(VAR_10, "EnumServicesStatusExA");
    VAR_3= (void*)FUNC_1(VAR_10, "EnumServicesStatusExW");
    VAR_4 = (void *)FUNC_1(VAR_10, "GetSecurityInfo");
    VAR_6= (void*)FUNC_1(VAR_10, "QueryServiceConfig2A");
    VAR_7= (void*)FUNC_1(VAR_10, "QueryServiceConfig2W");
    VAR_9= (void*)FUNC_1(VAR_10, "QueryServiceStatusEx");
    VAR_8 = (void*)FUNC_1(VAR_10, "QueryServiceObjectSecurity");
    VAR_5 = (void*)FUNC_1(VAR_10, "NotifyServiceStatusChangeW");
}
