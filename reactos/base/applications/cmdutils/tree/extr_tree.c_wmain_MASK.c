
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* PWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (int*,int,char*) ;
 int FUNC_7 (int *,int *,int ,int*,int *,int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int*) ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_9 (int*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int*,int*) ;
 int FUNC_13 (int*,char*) ;

int FUNC_14(int VAR_9, WCHAR* VAR_10[])
{
    DWORD VAR_11 = 0;
    WCHAR VAR_12 = 0;
    PWSTR VAR_13 = ((void*)0);
    DWORD VAR_14 = 0;

    PWSTR VAR_15 = ((void*)0);

    int VAR_16;


    FUNC_0();


    for (VAR_16 = 1; VAR_16 < VAR_9; ++VAR_16)
    {
        if (VAR_10[VAR_16][0] == L'-' || VAR_10[VAR_16][0] == L'/')
        {
            switch (FUNC_11(VAR_10[VAR_16][1]))
            {
                case L'?':

                    FUNC_4(VAR_5, VAR_3);
                    return 0;

                case L'f':
                    VAR_7 = VAR_6;
                    break;

                case L'a':
                    VAR_8 = VAR_6;
                    break;

                default:
                    break;
            }
        }
        else
        {



            BOOL VAR_17 = FUNC_8(VAR_10[VAR_16]);
            if (VAR_17 == VAR_0)
            {
                FUNC_4(VAR_5, VAR_2);
                return 1;
            }
        }
    }

    FUNC_4(VAR_5, VAR_1);

    FUNC_7(((void*)0), ((void*)0), 0, &VAR_11, ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_3(VAR_5, VAR_4, VAR_11 >> 16, VAR_11 & 0xffff);


    VAR_14 = FUNC_5(1, &VAR_12);

    VAR_13 = (PWSTR)FUNC_10(VAR_14 * sizeof(WCHAR));


    FUNC_5(VAR_14, VAR_13);


    VAR_15 = (PWSTR)FUNC_10(VAR_14 * sizeof(WCHAR));




    FUNC_12(VAR_15, VAR_13);
    FUNC_13(VAR_15, L":");

    FUNC_1(VAR_5, L"%s:.\n", VAR_15);

    FUNC_9(VAR_15);


    FUNC_6(VAR_13, 1, L"          ");

    FUNC_9(VAR_13);
    FUNC_2(VAR_5, L"\n");

    return 0;
}
