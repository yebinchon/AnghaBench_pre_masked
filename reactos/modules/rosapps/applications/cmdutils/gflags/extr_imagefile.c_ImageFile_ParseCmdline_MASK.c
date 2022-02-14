
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPWSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char*,...) ;

BOOL FUNC_3(INT VAR_7, int VAR_8, LPWSTR VAR_9[])
{
    for (; VAR_7 < VAR_8; VAR_7++)
    {
        if (VAR_2 == ((void*)0))
        {
            VAR_2 = VAR_9[VAR_7];
        }
        else if (VAR_9[VAR_7][0] == '+')
        {
            if (VAR_5)
            {
                FUNC_2(L"Unexpected argument - '%s'\n", VAR_9[VAR_7]);
                return VAR_1;
            }
            VAR_3 |= FUNC_0(VAR_9[VAR_7] + 1, VAR_0);
        }
        else if (VAR_9[VAR_7][0] == '-')
        {
            if (VAR_5)
            {
                FUNC_2(L"Unexpected argument - '%s'\n", VAR_9[VAR_7]);
                return VAR_1;
            }
            VAR_4 |= FUNC_0(VAR_9[VAR_7] + 1, VAR_0);
        }
        else
        {
            VAR_5 = VAR_6;
            VAR_3 = FUNC_1(VAR_9[VAR_7], ((void*)0), 16);
            if (VAR_3 == ~0)
                VAR_3 = 0;
        }
    }

    if (VAR_2 == ((void*)0))
    {
        FUNC_2(L"No Image specified\n");
        return VAR_1;
    }

    return VAR_6;
}
