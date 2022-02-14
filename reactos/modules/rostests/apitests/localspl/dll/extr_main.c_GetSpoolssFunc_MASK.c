
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PVOID ;
typedef int HMODULE ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char*,int ) ;

PVOID
FUNC_4(const char* VAR_1)
{
    HMODULE VAR_2;


    VAR_2 = FUNC_1(L"spoolss");
    if (!VAR_2)
    {
        FUNC_3("GetModuleHandleW failed with error %u!\n", FUNC_0());
        return VAR_0;
    }

    return FUNC_2(VAR_2, VAR_1);
}
