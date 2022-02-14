
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PRINTPROVIDOR ;
typedef int (* PInitializePrintProvidor ) (int ,int,int *) ;
typedef int LPPRINTPROVIDOR ;
typedef int HMODULE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ) ;

BOOL
FUNC_4(LPPRINTPROVIDOR VAR_2)
{
    HMODULE VAR_3;
    PInitializePrintProvidor VAR_4;


    VAR_3 = FUNC_1(L"localspl");
    if (!VAR_3)
    {
        FUNC_3("GetModuleHandleW failed with error %u!\n", FUNC_0());
        return VAR_0;
    }


    VAR_4 = (PInitializePrintProvidor)FUNC_2(VAR_3, "InitializePrintProvidor");
    if (!VAR_4)
    {
        FUNC_3("GetProcAddress failed with error %u!\n", FUNC_0());
        return VAR_0;
    }


    if (!VAR_4(VAR_2, sizeof(PRINTPROVIDOR), ((void*)0)))
    {
        FUNC_3("pfnInitializePrintProvidor failed with error %u!\n", FUNC_0());
        return VAR_0;
    }

    return VAR_1;
}
