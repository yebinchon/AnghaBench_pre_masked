
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int (* PINSTALL_REACTOS ) (int ,int **) ;
typedef int INT ;
typedef int * HMODULE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int * FUNC_4 (char*) ;

__attribute__((used)) static
INT
FUNC_5(INT VAR_0, WCHAR* VAR_1[])
{
    INT VAR_2;
    HMODULE VAR_3;
    PINSTALL_REACTOS VAR_4;

    VAR_3 = FUNC_4(L"syssetup.dll");
    if (VAR_3 == ((void*)0))
    {
        FUNC_0("Failed to load 'syssetup.dll'!\n");
        return FUNC_2();
    }
    FUNC_0("Loaded 'syssetup.dll'!\n");


    VAR_4 = (PINSTALL_REACTOS)FUNC_3(VAR_3, "InstallWindowsNt");
    if (VAR_4 == ((void*)0))
    {
        VAR_2 = FUNC_2();
        FUNC_0("Failed to get address for 'InstallWindowsNt()'!\n");
    }
    else
    {
        VAR_2 = VAR_4(VAR_0, VAR_1);
    }

    FUNC_1(VAR_3);
    return VAR_2;
}
