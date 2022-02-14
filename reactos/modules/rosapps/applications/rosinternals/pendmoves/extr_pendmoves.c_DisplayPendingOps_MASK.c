
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef int DWORD ;


 scalar_t__* FUNC_0 (scalar_t__*,int*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_3 (char*) ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static
DWORD
FUNC_6(TCHAR * VAR_2, DWORD VAR_3)
{
    DWORD VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    TCHAR * VAR_10, * VAR_11, * VAR_12;




    VAR_4 = VAR_3 / sizeof(TCHAR);

    VAR_5 = 0;
    VAR_7 = 0;
    VAR_12 = VAR_2;

    while (VAR_5 < VAR_4)
    {

        for (VAR_6 = VAR_5; VAR_6 < VAR_4 && VAR_2[VAR_6] != 0; ++VAR_6);

        VAR_8 = FUNC_5(VAR_12);
        VAR_10 = FUNC_0(VAR_12, &VAR_8);

        if (VAR_8 == 0)
        {
            break;
        }


        VAR_5 = VAR_6;
        ++VAR_5;

        VAR_12 = VAR_2 + VAR_5;


        for (VAR_6 = VAR_5; VAR_6 < VAR_4 && VAR_2[VAR_6] != 0; ++VAR_6);

        VAR_9 = FUNC_5(VAR_12);
        VAR_11 = FUNC_0(VAR_12, &VAR_9);

        VAR_5 = VAR_6;
        ++VAR_5;
        VAR_12 = VAR_2 + VAR_5;


        FUNC_4(VAR_1, FUNC_3("Source: %s\n"), VAR_10);

        if (FUNC_1(VAR_10) == VAR_0)
        {
            FUNC_4(VAR_1, FUNC_3("\t *** Source file lookup error: %d\n"), FUNC_2());
        }

        FUNC_4(VAR_1, FUNC_3("Target: %s\n\n"), (FUNC_5(VAR_11) != 0 ? VAR_11: FUNC_3("DELETE")));


        VAR_12 = VAR_2 + VAR_5;
        ++VAR_7;
    }

    return VAR_7;
}
