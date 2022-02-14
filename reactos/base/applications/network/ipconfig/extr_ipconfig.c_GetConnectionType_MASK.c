
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int * PBYTE ;
typedef int * LPTSTR ;
typedef int * HKEY ;
typedef int DWORD ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ,int **) ;
 scalar_t__ FUNC_5 (int *,int *,int *,int*,int *,int*) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *,int *,int *) ;

LPTSTR FUNC_9(LPTSTR VAR_4)
{
    HKEY VAR_5 = ((void*)0);
    LPTSTR VAR_6 = ((void*)0);
    LPTSTR VAR_7 = ((void*)0);
    TCHAR VAR_8[256];
    LPTSTR VAR_9 = FUNC_6("SYSTEM\\CurrentControlSet\\Control\\Network\\{4D36E972-E325-11CE-BFC1-08002BE10318}\\");
    LPTSTR VAR_10 = FUNC_6("\\Connection");
    DWORD VAR_11;
    DWORD VAR_12;
    DWORD VAR_13;


    VAR_11 = FUNC_7(VAR_9) + FUNC_7(VAR_4) + FUNC_7(VAR_10) + 1;
    if (VAR_11 >= 255)
        return ((void*)0);

    FUNC_8(VAR_8, FUNC_6("%s%s%s"), VAR_9, VAR_4, VAR_10);

    if (FUNC_4(VAR_1,
                     VAR_8,
                     0,
                     VAR_2,
                     &VAR_5) == VAR_0)
    {
        if (FUNC_5(VAR_5,
                            FUNC_6("Name"),
                            ((void*)0),
                            &VAR_12,
                            ((void*)0),
                            &VAR_13) == VAR_0)
        {
            VAR_7 = (LPTSTR)FUNC_1(VAR_3,
                                           0,
                                           VAR_13);

            if (VAR_7 == ((void*)0))
                return ((void*)0);

            VAR_6 = (LPTSTR)FUNC_1(VAR_3,
                                        0,
                                        VAR_13);

            if (VAR_6 == ((void*)0))
            {
                FUNC_2(VAR_3, 0, VAR_7);
                return ((void*)0);
            }

            if (FUNC_5(VAR_5,
                                FUNC_6("Name"),
                                ((void*)0),
                                &VAR_12,
                                (PBYTE)VAR_7,
                                &VAR_13) != VAR_0)
            {
                FUNC_2(VAR_3,
                         0,
                         VAR_6);

                VAR_6 = ((void*)0);
            }

            if (VAR_6)
                FUNC_0(VAR_7, VAR_6);
            FUNC_2(VAR_3, 0, VAR_7);
        }
    }

    if (VAR_5 != ((void*)0))
        FUNC_3(VAR_5);

    return VAR_6;
}
