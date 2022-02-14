
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static BOOL FUNC_3(void)
{
    HMODULE VAR_3 = FUNC_0("oleacc.dll");

    VAR_2 = (void*)FUNC_1(VAR_3, "GetProcessHandleFromHwnd");
    if(!VAR_2) {
        FUNC_2("GetProcessHandleFromHwnd not available\n");
        return VAR_0;
    }

    return VAR_1;
}
