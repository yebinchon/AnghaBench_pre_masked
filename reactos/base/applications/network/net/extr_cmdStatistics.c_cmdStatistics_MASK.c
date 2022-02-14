
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef size_t INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,char*) ;
 size_t FUNC_1 () ;
 size_t FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (int *,char*) ;

INT
FUNC_7(
    INT VAR_6,
    WCHAR **VAR_7)
{
    INT VAR_8, VAR_9 = 0;
    BOOL VAR_10 = VAR_1;
    BOOL VAR_11 = VAR_1;

    for (VAR_8 = 2; VAR_8 < VAR_6; VAR_8++)
    {
        if (FUNC_6(VAR_7[VAR_8], L"server") == 0)
        {
            if (VAR_11 == VAR_1)
                VAR_10 = VAR_5;
            continue;
        }

        if (FUNC_6(VAR_7[VAR_8], L"workstation") == 0)
        {
            if (VAR_10 == VAR_1)
                VAR_11 = VAR_5;
            continue;
        }

        if (FUNC_6(VAR_7[VAR_8], L"help") == 0)
        {

            FUNC_4(4381);
            FUNC_0(VAR_4, L"\n");
            FUNC_5(VAR_3);
            return 0;
        }

        if (FUNC_6(VAR_7[VAR_8], L"/help") == 0)
        {

            FUNC_4(4381);
            FUNC_0(VAR_4, L"\n");
            FUNC_5(VAR_3);
            FUNC_5(VAR_2);
            return 0;
        }
    }

    if (VAR_10)
    {
        VAR_9 = FUNC_1();
    }
    else if (VAR_11)
    {
        VAR_9 = FUNC_2();
    }
    else
    {
        FUNC_4(4379);
        FUNC_0(VAR_4, L"\n");
        FUNC_0(VAR_4, L"   Server\n");
        FUNC_0(VAR_4, L"   Workstation\n");
        FUNC_0(VAR_4, L"\n");
    }

    if (VAR_9 == 0)
        FUNC_3(VAR_0);

    return VAR_9;
}
