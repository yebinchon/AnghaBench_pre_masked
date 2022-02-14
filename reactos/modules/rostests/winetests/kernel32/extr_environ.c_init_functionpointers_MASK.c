
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
    HMODULE VAR_4 = FUNC_0("kernel32.dll");
    HMODULE VAR_5 = FUNC_0("advapi32.dll");
    HMODULE VAR_6 = FUNC_2("userenv.dll");

    VAR_0 = (void *)FUNC_1(VAR_4, "GetComputerNameExA");
    VAR_1 = (void *)FUNC_1(VAR_4, "GetComputerNameExW");
    VAR_3 = (void *)FUNC_1(VAR_5, "OpenProcessToken");
    VAR_2 = (void *)FUNC_1(VAR_6,
                                                       "GetUserProfileDirectoryA");
}
