
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int,...) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int,int*) ;
 int FUNC_8 () ;
 int FUNC_9 (int*,int*,int ,int *,int *,int *,int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int*) ;
 int* FUNC_12 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_13 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (int*,int*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int*,...) ;
 scalar_t__ FUNC_17 (int*,char*) ;
 int FUNC_18 (int*,int*) ;
 scalar_t__ FUNC_19 (int*) ;

int FUNC_20(int VAR_14, WCHAR *VAR_15[])
{
    WCHAR VAR_16[] = L" :\\";
    WCHAR VAR_17[80];
    WCHAR VAR_18[80];
    WCHAR VAR_19[80];
    DWORD VAR_20;
    INT VAR_21, VAR_22;


    FUNC_3();


    VAR_18[0] = VAR_13;


    if (VAR_14 > 1 && FUNC_17(VAR_15[1], L"/?") == 0)
    {
        FUNC_6(VAR_12, VAR_6);
        return 0;
    }

    if (VAR_14 > 1)
    {
        VAR_21 = 0;
        for (VAR_22 = 1; VAR_22 < VAR_14; VAR_22++)
        {
            if (VAR_22 > 1)
                VAR_21++;
            VAR_21 += FUNC_19(VAR_15[VAR_22]);
        }

        if (VAR_21 > VAR_2 + VAR_1)
        {
            FUNC_6(VAR_12, VAR_5);
            return 1;
        }

        for (VAR_22 = 1; VAR_22 < VAR_14; VAR_22++)
        {
            if (VAR_22 > 1)
                FUNC_16(VAR_17, L" ");
            FUNC_16(VAR_17, VAR_15[VAR_22]);
        }
    }

    if (FUNC_19(VAR_17) > 0)
    {
        if (VAR_17[1] == L':')
        {
            VAR_16[0] = FUNC_15(VAR_17[0]);
            FUNC_18(VAR_18, &VAR_17[2]);
        }
        else
        {
            FUNC_18(VAR_18, VAR_17);
        }
    }

    if (FUNC_19(VAR_18) > VAR_2)
    {
        FUNC_6(VAR_12, VAR_5);
        return 1;
    }

    if (VAR_16[0] == L' ')
    {

        WCHAR VAR_23[VAR_3];
        FUNC_7(VAR_3, VAR_23);
        VAR_16[0] = VAR_23[0];
    }


    if (!FUNC_11(VAR_16))
    {
        FUNC_6(VAR_11, VAR_4);
        return 1;
    }

    if (FUNC_19(VAR_18) == 0)
    {
        FUNC_9(VAR_16, VAR_19, FUNC_0(VAR_19), &VAR_20,
                              ((void*)0), ((void*)0), ((void*)0), 0);


        if (VAR_19[0] != VAR_13)
        {
            FUNC_5(VAR_12, VAR_7, FUNC_15(VAR_16[0]), VAR_19);
        }
        else
        {
            FUNC_5(VAR_12, VAR_8, FUNC_15(VAR_16[0]));
        }


        FUNC_5(VAR_12, VAR_9, FUNC_10(VAR_20), FUNC_12(VAR_20));

        FUNC_6(VAR_12, VAR_10);

        FUNC_2(VAR_18, FUNC_0(VAR_18));
        FUNC_4(VAR_12, L"\n");

        if (FUNC_19(VAR_18) == 0)
        {
            if (FUNC_13() == VAR_0)
                return 0;
        }
    }

    if (!FUNC_14(VAR_16, VAR_18))
    {
        FUNC_1(VAR_12, FUNC_8());
        return 1;
    }

    return 0;
}
