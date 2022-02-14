
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tGETHOOKAPIS ;
typedef int PCWSTR ;
typedef int HMODULE ;


 scalar_t__ FUNC_0 (int ,int *,int **) ;
 int FUNC_1 (char*) ;

tGETHOOKAPIS FUNC_2(PCWSTR VAR_0)
{
    HMODULE VAR_1;
    tGETHOOKAPIS VAR_2;

    if (FUNC_0(VAR_0, &VAR_1, &VAR_2))
    {
        if (!VAR_2)
            FUNC_1("No GetHookAPIs found\n");
        return VAR_2;
    }
    return ((void*)0);
}
