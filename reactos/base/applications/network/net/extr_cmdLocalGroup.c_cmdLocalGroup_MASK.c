
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_10__ {int* lgrpi0_name; } ;
struct TYPE_9__ {int* lgrpi1_name; int* lgrpi1_comment; } ;
struct TYPE_8__ {int* lgrpi1002_comment; } ;
struct TYPE_7__ {int* lgrmi3_domainandname; } ;
typedef int* NET_API_STATUS ;
typedef int* LPWSTR ;
typedef TYPE_1__* LPLOCALGROUP_MEMBERS_INFO_3 ;
typedef int LPBYTE ;
typedef TYPE_2__ LOCALGROUP_INFO_1002 ;
typedef TYPE_3__ LOCALGROUP_INFO_1 ;
typedef TYPE_4__ LOCALGROUP_INFO_0 ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int* FUNC_2 (int*) ;
 int* FUNC_3 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_4 (int *,int,int ,int *) ;
 int* FUNC_5 (int *,int*,int,int ,int) ;
 int* FUNC_6 (int *,int*) ;
 int* FUNC_7 (int *,int*,int,int ,int) ;
 int* FUNC_8 (int *,int*,int,int ,int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 TYPE_1__* FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,TYPE_1__*) ;
 int FUNC_14 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_15 (int*,char*) ;
 scalar_t__ FUNC_16 (int*,char*,int) ;

INT
FUNC_17(
    INT VAR_7,
    WCHAR **VAR_8)
{
    INT VAR_9, VAR_10;
    INT VAR_11 = 0;
    ULONG VAR_12 = 0;
    BOOL VAR_13 = VAR_0;
    BOOL VAR_14 = VAR_0;



    LPWSTR VAR_15 = ((void*)0);
    LPWSTR VAR_16 = ((void*)0);
    LPLOCALGROUP_MEMBERS_INFO_3 VAR_17 = ((void*)0);
    LOCALGROUP_INFO_0 VAR_18;
    LOCALGROUP_INFO_1 VAR_19;
    LOCALGROUP_INFO_1002 VAR_20;
    NET_API_STATUS VAR_21;

    if (VAR_7 == 2)
    {
        VAR_21 = FUNC_3();
        FUNC_0(VAR_5, L"Status: %lu\n", VAR_21);
        return 0;
    }
    else if (VAR_7 == 3)
    {
        VAR_21 = FUNC_2(VAR_8[2]);
        FUNC_0(VAR_5, L"Status: %lu\n", VAR_21);
        return 0;
    }

    VAR_9 = 2;
    if (VAR_8[VAR_9][0] != L'/')
    {
        VAR_15 = VAR_8[VAR_9];
        VAR_9++;
    }

    for (VAR_10 = VAR_9; VAR_10 < VAR_7; VAR_10++)
    {
        if (VAR_8[VAR_10][0] == L'/')
            break;

        VAR_12++;
    }

    FUNC_0(VAR_5, L"Member count: %lu\n", VAR_12);

    if (VAR_12 > 0)
    {
        VAR_17 = FUNC_12(FUNC_14(),
                                    VAR_1,
                                    VAR_12 * sizeof(LPLOCALGROUP_MEMBERS_INFO_3));
        if (VAR_17 == ((void*)0))
            return 0;
    }

    VAR_10 = 0;
    for (; VAR_9 < VAR_7; VAR_9++)
    {
        if (VAR_8[VAR_9][0] == L'/')
            break;

        VAR_17[VAR_10].lgrmi3_domainandname = VAR_8[VAR_9];
        VAR_10++;
    }

    for (; VAR_9 < VAR_7; VAR_9++)
    {
        if (FUNC_15(VAR_8[VAR_9], L"/help") == 0)
        {
            FUNC_10(4381);
            FUNC_1(VAR_5, L"\n");
            FUNC_11(VAR_3);
            FUNC_11(VAR_2);
            return 0;
        }
        else if (FUNC_15(VAR_8[VAR_9], L"/add") == 0)
        {
            VAR_13 = VAR_6;
        }
        else if (FUNC_15(VAR_8[VAR_9], L"/delete") == 0)
        {
            VAR_14 = VAR_6;
        }
        else if (FUNC_16(VAR_8[VAR_9], L"/comment:", 9) == 0)
        {
            VAR_16 = &VAR_8[VAR_9][9];
        }
        else if (FUNC_15(VAR_8[VAR_9], L"/domain") == 0)
        {
            FUNC_1(VAR_4, L"The /DOMAIN option is not supported yet.\n");



        }
        else
        {
            FUNC_9(3506 );
            VAR_11 = 1;
            goto done;
        }
    }

    if (VAR_15 == ((void*)0))
    {
        VAR_11 = 1;
        goto done;
    }

    if (VAR_13 && VAR_14)
    {
        VAR_11 = 1;
        goto done;
    }
    if (VAR_17 == ((void*)0))
    {
        if (!VAR_13 && !VAR_14 && VAR_16 != ((void*)0))
        {

            VAR_20 = VAR_16;
            VAR_21 = FUNC_8(((void*)0),
                                          VAR_15,
                                          1002,
                                          (LPBYTE)&VAR_20,
                                          ((void*)0));
            FUNC_0(VAR_5, L"Status: %lu\n", VAR_21);
        }
        else if (VAR_13 && !VAR_14)
        {

            if (VAR_16 == ((void*)0))
            {
                VAR_18 = VAR_15;
            }
            else
            {
                VAR_19 = VAR_15;
                VAR_19 = VAR_16;
            }

            VAR_21 = FUNC_4(((void*)0),
                                      (VAR_16 == ((void*)0)) ? 0 : 1,
                                      (VAR_16 == ((void*)0)) ? (LPBYTE)&VAR_18 : (LPBYTE)&VAR_19,
                                      ((void*)0));
            FUNC_0(VAR_5, L"Status: %lu\n", VAR_21);
        }
        else if (!VAR_13 && VAR_14 && VAR_16 == ((void*)0))
        {

            VAR_21 = FUNC_6(((void*)0),
                                      VAR_15);
            FUNC_0(VAR_5, L"Status: %lu\n", VAR_21);
        }
        else
        {
            VAR_11 = 1;
        }
    }
    else
    {
        if (VAR_13 && !VAR_14 && VAR_16 == ((void*)0))
        {

            VAR_21 = FUNC_5(((void*)0),
                                             VAR_15,
                                             3,
                                             (LPBYTE)VAR_17,
                                             VAR_12);
            FUNC_0(VAR_5, L"Status: %lu\n", VAR_21);
        }
        else if (!VAR_13 && VAR_14 && VAR_16 == ((void*)0))
        {

            VAR_21 = FUNC_7(((void*)0),
                                             VAR_15,
                                             3,
                                             (LPBYTE)VAR_17,
                                             VAR_12);
            FUNC_0(VAR_5, L"Status: %lu\n", VAR_21);
        }
        else
        {
            VAR_11 = 1;
        }
    }

done:
    if (VAR_17 != ((void*)0))
        FUNC_13(FUNC_14(), 0, VAR_17);

    if (VAR_11 != 0)
    {
        FUNC_10(4381);
        FUNC_1(VAR_5, L"\n");
        FUNC_11(VAR_3);
    }

    return VAR_11;
}
