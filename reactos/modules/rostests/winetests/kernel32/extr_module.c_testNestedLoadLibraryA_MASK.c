
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path2 ;
typedef int path1 ;
typedef int * HMODULE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (char*,int) ;
 int * FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static void FUNC_6(void)
{
    static const char VAR_1[] = "shell32.dll";
    char VAR_2[VAR_0], VAR_3[VAR_0];
    HMODULE VAR_4, VAR_5, VAR_6;
    FUNC_2(VAR_2, sizeof(VAR_2));
    FUNC_5(VAR_2, "\\system\\");
    FUNC_5(VAR_2, VAR_1);
    VAR_4 = FUNC_3(VAR_2);
    if (!VAR_4)
    {

        return;
    }

    FUNC_2(VAR_3, sizeof(VAR_3));
    FUNC_5(VAR_3, "\\system32\\");
    FUNC_5(VAR_3, VAR_1);
    VAR_5 = FUNC_3(VAR_3);
    FUNC_4(VAR_5 != ((void*)0), "LoadLibrary(%s) failed\n", VAR_3);





    VAR_6 = FUNC_3(VAR_2);
    FUNC_4(VAR_6 != ((void*)0), "LoadLibrary(%s) failed\n", VAR_2);


    FUNC_4(FUNC_0(VAR_6), "FreeLibrary() failed\n");
    FUNC_4(FUNC_0(VAR_5), "FreeLibrary() failed\n");
    FUNC_4(FUNC_0(VAR_4), "FreeLibrary() failed\n");
    FUNC_4(FUNC_1(VAR_1) == ((void*)0), "%s was not fully unloaded\n", VAR_1);


    VAR_4 = FUNC_3(VAR_2);
    FUNC_4(VAR_4 != ((void*)0), "LoadLibrary(%s) failed\n", VAR_2);
    if (VAR_4 != ((void*)0))
        FUNC_4(FUNC_0(VAR_4), "FreeLibrary() failed\n");
}
