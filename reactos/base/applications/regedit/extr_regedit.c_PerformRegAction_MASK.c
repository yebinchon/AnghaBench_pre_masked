
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int REGEDIT_ACTION ;
typedef int * LPWSTR ;
typedef int FILE ;
typedef int BOOL ;





 int FUNC_0 (int*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int *,...) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_3 (int*,char*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*,int*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,char*) ;
 char* FUNC_9 () ;
 int FUNC_10 (int **,int*) ;
 int VAR_12 ;
 int FUNC_11 (int *) ;
 int VAR_13 ;
 int * VAR_14 ;
 char* VAR_15 ;

BOOL FUNC_12(REGEDIT_ACTION VAR_16, LPWSTR VAR_17, BOOL VAR_18)
{
    switch (VAR_16)
    {
        case 132:
        {
            WCHAR VAR_19[512];
            WCHAR VAR_20[VAR_4];
            FILE *VAR_21;

            FUNC_10(&VAR_17, VAR_20);
            if (!VAR_20[0])
            {
                FUNC_1(((void*)0), VAR_8 | VAR_6, ((void*)0), L"No file name is specified.");
                FUNC_1(((void*)0), VAR_8 | VAR_6, VAR_14, VAR_15);
                FUNC_5(4);
            }

            while (VAR_20[0])
            {

                if (!VAR_18)
                {
                    int VAR_22;

                    FUNC_2(VAR_12, VAR_2, VAR_19, FUNC_0(VAR_19));

                    VAR_22 = FUNC_1(((void*)0), VAR_9 | VAR_7, VAR_14, VAR_19, VAR_20);

                    switch (VAR_22)
                    {
                        case 128:
                            goto cont;
                        case 129:




                            return VAR_11;
                        default:
                            break;
                    }
                }


                VAR_21 = FUNC_3(VAR_20, L"r");


                if (VAR_21 == ((void*)0) || !FUNC_11(VAR_21))
                {

                    if (!VAR_18)
                    {
                        FUNC_2(VAR_12, VAR_0, VAR_19, FUNC_0(VAR_19));
                        FUNC_1(((void*)0), VAR_8 | VAR_5, VAR_14, VAR_19, VAR_20);
                    }
                }
                else
                {

                    if (!VAR_18)
                    {
                        FUNC_2(VAR_12, VAR_1, VAR_19, FUNC_0(VAR_19));
                        FUNC_1(((void*)0), VAR_8 | VAR_6, VAR_14, VAR_19, VAR_20);
                    }
                }


                if (VAR_21) FUNC_7(VAR_21);

cont:
                FUNC_10(&VAR_17, VAR_20);
            }
            break;
        }

        case 131:
        {
            WCHAR VAR_23[VAR_3];
            FUNC_10(&VAR_17, VAR_23);
            if (!VAR_23[0])
            {
                FUNC_1(((void*)0), VAR_8 | VAR_6, ((void*)0), L"No registry key is specified for removal.");
                FUNC_1(((void*)0), VAR_8 | VAR_6, VAR_14, VAR_15);
                FUNC_5(6);
            }
            FUNC_4(VAR_23);
            break;
        }

        case 130:
        {
            WCHAR VAR_24[VAR_4];

            VAR_24[0] = L'\0';
            FUNC_10(&VAR_17, VAR_24);
            if (!VAR_24[0])
            {
                FUNC_1(((void*)0), VAR_8 | VAR_6, ((void*)0), L"No file name is specified.");
                FUNC_1(((void*)0), VAR_8 | VAR_6, VAR_14, VAR_15);
                FUNC_5(7);
            }

            if (VAR_17[0])
            {
                WCHAR VAR_25[VAR_3];
                FUNC_10(&VAR_17, VAR_25);
                FUNC_6(VAR_24, VAR_25, VAR_10);
            }
            else
            {
                FUNC_6(VAR_24, ((void*)0), VAR_10);
            }
            break;
        }

        default:
            FUNC_8(VAR_13, L"%s: Unhandled action!\n", FUNC_9());
            FUNC_5(8);
            break;
    }

    return VAR_11;
}
