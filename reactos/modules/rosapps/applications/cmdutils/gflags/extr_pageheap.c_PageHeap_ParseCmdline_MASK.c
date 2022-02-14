
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* LPWSTR ;
typedef int INT ;
typedef void* BOOL ;


 void* VAR_0 ;
 void* VAR_1 ;
 int* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (int*,char*) ;
 int FUNC_1 (char*,...) ;

BOOL FUNC_2(INT VAR_6, int VAR_7, LPWSTR VAR_8[])
{
    for (; VAR_6 < VAR_7; VAR_6++)
    {
        if (VAR_8[VAR_6][0] == L'/')
        {
            if (FUNC_0(VAR_8[VAR_6], L"/enable") == 0)
            {
                VAR_3 = VAR_4;
            }
            else if (FUNC_0(VAR_8[VAR_6], L"/disable") == 0)
            {
                VAR_5 = VAR_4;
            }
            else if (FUNC_0(VAR_8[VAR_6], L"/full") == 0)
            {
                VAR_1 = VAR_4;
            }
        }
        else if (VAR_2 == ((void*)0))
        {
            VAR_2 = VAR_8[VAR_6];
        }
        else
        {
            FUNC_1(L"Invalid option: %s\n", VAR_8[VAR_6]);
            return VAR_0;
        }
    }

    if (VAR_3 && VAR_5)
    {
        FUNC_1(L"ENABLE and DISABLED cannot be set together\n");
        return VAR_0;
    }

    if (VAR_2 == ((void*)0) && (VAR_3 || VAR_5 || VAR_1))
    {
        FUNC_1(L"Can't ENABLE or DISABLE with no image\n");
        return VAR_0;
    }

    if (!VAR_3 && !VAR_5 && VAR_1)
    {
        FUNC_1(L"Cannot deal with full traces with no other indication\n");
        return VAR_0;
    }

    return VAR_4;
}
