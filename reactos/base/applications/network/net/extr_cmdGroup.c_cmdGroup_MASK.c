
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_6__ {int* grpi0_name; } ;
struct TYPE_5__ {int* grpi1_name; int* grpi1_comment; } ;
struct TYPE_4__ {int* grpi1002_comment; } ;
typedef int* PWSTR ;
typedef int PGROUP_USERS_INFO_0 ;
typedef scalar_t__ NET_API_STATUS ;
typedef int LPBYTE ;
typedef int INT ;
typedef TYPE_1__ GROUP_INFO_1002 ;
typedef TYPE_2__ GROUP_INFO_1 ;
typedef TYPE_3__ GROUP_INFO_0 ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int *,int,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int*,int*) ;
 scalar_t__ FUNC_6 (int *,int*) ;
 scalar_t__ FUNC_7 (int *,int*,int*) ;
 scalar_t__ FUNC_8 (int *,int*,int,int ,int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int** FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,int**) ;
 int FUNC_14 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_15 (int*,char*) ;
 scalar_t__ FUNC_16 (int*,char*,int) ;

INT
FUNC_17(
    INT VAR_8,
    WCHAR **VAR_9)
{
    INT VAR_10, VAR_11;
    INT VAR_12 = 0;
    ULONG VAR_13 = 0;
    BOOL VAR_14 = VAR_0;
    BOOL VAR_15 = VAR_0;



    PWSTR VAR_16 = ((void*)0);
    PWSTR VAR_17 = ((void*)0);
    PWSTR *VAR_18 = ((void*)0);
    GROUP_INFO_0 VAR_19;
    GROUP_INFO_1 VAR_20;
    GROUP_INFO_1002 VAR_21;
    NET_API_STATUS VAR_22;

    if (VAR_8 == 2)
    {
        VAR_22 = FUNC_3();
        FUNC_0(VAR_6, L"Status: %lu\n", VAR_22);
        return 0;
    }
    else if (VAR_8 == 3)
    {
        VAR_22 = FUNC_2(VAR_9[2]);
        FUNC_0(VAR_6, L"Status: %lu\n", VAR_22);
        return 0;
    }

    VAR_10 = 2;
    if (VAR_9[VAR_10][0] != L'/')
    {
        VAR_16 = VAR_9[VAR_10];
        VAR_10++;
    }

    for (VAR_11 = VAR_10; VAR_11 < VAR_8; VAR_11++)
    {
        if (VAR_9[VAR_11][0] == L'/')
            break;

        VAR_13++;
    }

    if (VAR_13 > 0)
    {
        VAR_18 = FUNC_12(FUNC_14(),
                                 VAR_1,
                                 VAR_13 * sizeof(PGROUP_USERS_INFO_0));
        if (VAR_18 == ((void*)0))
            return 0;
    }

    VAR_11 = 0;
    for (; VAR_10 < VAR_8; VAR_10++)
    {
        if (VAR_9[VAR_10][0] == L'/')
            break;

        VAR_18[VAR_11] = VAR_9[VAR_10];
        VAR_11++;
    }

    for (; VAR_10 < VAR_8; VAR_10++)
    {
        if (FUNC_15(VAR_9[VAR_10], L"/help") == 0)
        {
            FUNC_10(4381);
            FUNC_1(VAR_6, L"\n");
            FUNC_11(VAR_3);
            FUNC_11(VAR_2);
            return 0;
        }
        else if (FUNC_15(VAR_9[VAR_10], L"/add") == 0)
        {
            VAR_14 = VAR_7;
        }
        else if (FUNC_15(VAR_9[VAR_10], L"/delete") == 0)
        {
            VAR_15 = VAR_7;
        }
        else if (FUNC_16(VAR_9[VAR_10], L"/comment:", 9) == 0)
        {
            VAR_17 = &VAR_9[VAR_10][9];
        }
        else if (FUNC_15(VAR_9[VAR_10], L"/domain") == 0)
        {
            FUNC_1(VAR_5, L"The /DOMAIN option is not supported yet.\n");



        }
        else
        {
            FUNC_9(3506 );
            VAR_12 = 1;
            goto done;
        }
    }

    if (VAR_16 == ((void*)0))
    {
        VAR_12 = 1;
        goto done;
    }

    if (VAR_14 && VAR_15)
    {
        VAR_12 = 1;
        goto done;
    }

    if (VAR_18 == ((void*)0))
    {
        if (!VAR_14 && !VAR_15 && VAR_17 != ((void*)0))
        {

            VAR_21 = VAR_17;
            VAR_22 = FUNC_8(((void*)0),
                                     VAR_16,
                                     1002,
                                     (LPBYTE)&VAR_21,
                                     ((void*)0));
            FUNC_0(VAR_6, L"Status: %lu\n", VAR_22);
        }
        else if (VAR_14 && !VAR_15)
        {

            if (VAR_17 == ((void*)0))
            {
                VAR_19 = VAR_16;
            }
            else
            {
                VAR_20 = VAR_16;
                VAR_20 = VAR_17;
            }

            VAR_22 = FUNC_4(((void*)0),
                                 (VAR_17 == ((void*)0)) ? 0 : 1,
                                 (VAR_17 == ((void*)0)) ? (LPBYTE)&VAR_19 : (LPBYTE)&VAR_20,
                                 ((void*)0));
            FUNC_0(VAR_6, L"Status: %lu\n", VAR_22);
        }
        else if (!VAR_14 && VAR_15 && VAR_17 == ((void*)0))
        {

            VAR_22 = FUNC_6(((void*)0),
                                 VAR_16);
            FUNC_0(VAR_6, L"Status: %lu\n", VAR_22);
        }
        else
        {
            VAR_12 = 1;
        }
    }
    else
    {
        if (VAR_14 && !VAR_15 && VAR_17 == ((void*)0))
        {

            for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
            {
                VAR_22 = FUNC_5(((void*)0),
                                         VAR_16,
                                         VAR_18[VAR_10]);
                if (VAR_22 != VAR_4)
                    break;
            }
            FUNC_0(VAR_6, L"Status: %lu\n", VAR_22);
        }
        else if (!VAR_14 && VAR_15 && VAR_17 == ((void*)0))
        {

            for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
            {
                VAR_22 = FUNC_7(((void*)0),
                                         VAR_16,
                                         VAR_18[VAR_10]);
                if (VAR_22 != VAR_4)
                    break;
            }
            FUNC_0(VAR_6, L"Status: %lu\n", VAR_22);
        }
        else
        {
            VAR_12 = 1;
        }
    }

done:
    if (VAR_18 != ((void*)0))
        FUNC_13(FUNC_14(), 0, VAR_18);

    if (VAR_12 != 0)
    {
        FUNC_10(4381);
        FUNC_1(VAR_6, L"\n");
        FUNC_11(VAR_3);
    }

    return VAR_12;
}
