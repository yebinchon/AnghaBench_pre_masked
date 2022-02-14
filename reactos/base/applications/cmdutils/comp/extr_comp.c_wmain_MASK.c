
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef char* PBYTE ;
typedef int INT ;
typedef int FILE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,...) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int * FUNC_6 (int*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int*,int*,int ) ;

int FUNC_14(int VAR_21, WCHAR* VAR_22[])
{
    INT VAR_23;


    FILE *VAR_24 = ((void*)0);
    FILE *VAR_25 = ((void*)0);

    INT VAR_26, VAR_27;
    PBYTE VAR_28 = ((void*)0);
    PBYTE VAR_29 = ((void*)0);
    WCHAR VAR_30[VAR_20 + 1],
          VAR_31[VAR_20 + 1];
    BOOL VAR_32 = VAR_2,
         VAR_33 = VAR_2;
    UINT VAR_34;
    UINT VAR_35;
    INT VAR_36;
    INT VAR_37;
    INT VAR_38 = 0;
    INT VAR_39 = 1;
    INT VAR_40 = VAR_1;


    FUNC_0();


    for (VAR_23 = 1; VAR_23 < VAR_21; VAR_23++)
    {
        if (VAR_22[VAR_23][0] == L'/')
        {
            switch (FUNC_12(VAR_22[VAR_23][1]))
            {
                case L'a':
                    VAR_32 = VAR_19;
                    VAR_38++;
                    break;

                case L'l':
                    VAR_33 = VAR_19;
                    VAR_38++;
                    break;

                case L'?':
                    FUNC_3(VAR_18, VAR_8);
                    return VAR_1;

                default:
                    FUNC_2(VAR_17, VAR_10, VAR_22[VAR_23][1]);
                    FUNC_3(VAR_18, VAR_8);
                    return VAR_0;
            }
        }
    }

    if (VAR_21 - VAR_38 == 3)
    {
        FUNC_13(VAR_30, VAR_22[1 + VAR_38], VAR_20);
        FUNC_13(VAR_31, VAR_22[2 + VAR_38], VAR_20);
    }
    else
    {
        FUNC_3(VAR_17, VAR_4);
        return VAR_0;
    }

    VAR_28 = (PBYTE)FUNC_11(VAR_16);
    if (VAR_28 == ((void*)0))
    {
        FUNC_1(VAR_17, L"Can't get free memory for Buff1\n");
        VAR_40 = VAR_0;
        goto Cleanup;
    }

    VAR_29 = (PBYTE)FUNC_11(VAR_16);
    if (VAR_29 == ((void*)0))
    {
        FUNC_1(VAR_17, L"Can't get free memory for Buff2\n");
        VAR_40 = VAR_0;
        goto Cleanup;
    }

    if ((VAR_24 = FUNC_6(VAR_30, L"rb")) == ((void*)0))
    {
        FUNC_2(VAR_17, VAR_6, VAR_30);
        VAR_40 = VAR_0;
        goto Cleanup;
    }
    if ((VAR_25 = FUNC_6(VAR_31, L"rb")) == ((void*)0))
    {
        FUNC_2(VAR_17, VAR_6, VAR_31);
        VAR_40 = VAR_0;
        goto Cleanup;
    }

    FUNC_2(VAR_18, VAR_5, VAR_30, VAR_31);

    VAR_36 = FUNC_4(VAR_24);
    if (VAR_36 == -1)
    {
        FUNC_2(VAR_17, VAR_7, VAR_30);
        VAR_40 = VAR_0;
        goto Cleanup;
    }

    VAR_37 = FUNC_4(VAR_25);
    if (VAR_37 == -1)
    {
        FUNC_2(VAR_17, VAR_7, VAR_31);
        VAR_40 = VAR_0;
        goto Cleanup;
    }

    if (VAR_36 != VAR_37)
    {
        FUNC_3(VAR_18, VAR_15);
        VAR_40 = VAR_0;
        goto Cleanup;
    }

    VAR_34 = 1;
    VAR_35 = 0;
    while (1)
    {
        VAR_26 = FUNC_5(VAR_28, VAR_24);
        VAR_27 = FUNC_5(VAR_29, VAR_25);

        if (FUNC_9(VAR_24) || FUNC_9(VAR_25))
        {
            FUNC_3(VAR_17, VAR_14);
            VAR_40 = VAR_0;
            goto Cleanup;
        }

        if (!VAR_26 && !VAR_27)
            break;

        FUNC_7(VAR_26 == VAR_27);
        for (VAR_23 = 0; VAR_23 < VAR_26; VAR_23++)
        {
            if (VAR_28[VAR_23] != VAR_29[VAR_23])
            {
                VAR_39 = 0;


                if (VAR_33)
                    FUNC_2(VAR_18, VAR_12, VAR_34);
                else
                    FUNC_2(VAR_18, VAR_13, VAR_35);

                if (VAR_32)
                {
                    FUNC_2(VAR_18, VAR_3, 1, VAR_28[VAR_23]);
                    FUNC_2(VAR_18, VAR_3, 2, VAR_29[VAR_23]);
                }
                else
                {
                    FUNC_2(VAR_18, VAR_9, 1, VAR_28[VAR_23]);
                    FUNC_2(VAR_18, VAR_9, 2, VAR_29[VAR_23]);
                }
            }

            VAR_35++;

            if (VAR_28[VAR_23] == '\n')
                VAR_34++;
        }
    }

    if (VAR_39)
        FUNC_3(VAR_18, VAR_11);

Cleanup:
    if (VAR_25)
        FUNC_8(VAR_25);
    if (VAR_24)
        FUNC_8(VAR_24);

    if (VAR_29)
        FUNC_10(VAR_29);
    if (VAR_28)
        FUNC_10(VAR_28);

    return VAR_40;
}
