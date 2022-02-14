
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2 (void)
{
    HMODULE VAR_0 = FUNC_0("ntdll.dll");

    if (!VAR_0) return 0;
    return (FUNC_1(VAR_0, "wine_server_call") != ((void*)0));
}
