
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef int ULONG ;
struct TYPE_5__ {int usrmod0_force_logoff; int usrmod0_min_passwd_len; int usrmod0_max_passwd_age; int usrmod0_min_passwd_age; int usrmod0_password_hist_len; int usrmod3_lockout_threshold; int usrmod3_lockout_duration; int usrmod3_lockout_observation_window; scalar_t__ usrmod1_role; } ;
typedef TYPE_1__* PUSER_MODALS_INFO_3 ;
typedef TYPE_1__* PUSER_MODALS_INFO_1 ;
typedef TYPE_1__* PUSER_MODALS_INFO_0 ;
typedef scalar_t__ NT_PRODUCT_TYPE ;
typedef scalar_t__ NET_API_STATUS ;
typedef scalar_t__* LPWSTR ;
typedef int LPBYTE ;
typedef size_t INT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,size_t) ;
 int FUNC_9 (scalar_t__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_10 (scalar_t__*,char*) ;
 scalar_t__ FUNC_11 (scalar_t__*,char*,int) ;
 scalar_t__ FUNC_12 (scalar_t__*,char*) ;
 int FUNC_13 (scalar_t__*,scalar_t__**,int) ;

INT
FUNC_14(
    INT VAR_12,
    WCHAR **VAR_13)
{
    PUSER_MODALS_INFO_0 VAR_14 = ((void*)0);
    PUSER_MODALS_INFO_1 VAR_15 = ((void*)0);
    PUSER_MODALS_INFO_3 VAR_16 = ((void*)0);
    NT_PRODUCT_TYPE VAR_17;
    LPWSTR VAR_18;
    LPWSTR VAR_19;
    DWORD VAR_20;
    ULONG VAR_21;
    INT VAR_22;
    BOOL VAR_23 = VAR_0;



    INT VAR_24 = 58;
    NET_API_STATUS VAR_25;
    INT VAR_26 = 0;

    for (VAR_22 = 2; VAR_22 < VAR_12; VAR_22++)
    {
        if (FUNC_10(VAR_13[VAR_22], L"help") == 0)
        {

            FUNC_5(4381);
            FUNC_1(VAR_7, L"\n");
            FUNC_7(VAR_2);
            return 0;
        }

        if (FUNC_10(VAR_13[VAR_22], L"/help") == 0)
        {

            FUNC_5(4381);
            FUNC_1(VAR_7, L"\n");
            FUNC_7(VAR_2);
            FUNC_7(VAR_1);
            return 0;
        }

        if (FUNC_10(VAR_13[VAR_22], L"/domain") == 0)
        {
            FUNC_1(VAR_6, L"The /DOMAIN option is not supported yet.\n");



        }
    }

    VAR_25 = FUNC_3(((void*)0), 0, (LPBYTE*)&VAR_14);
    if (VAR_25 != VAR_3)
        goto done;

    for (VAR_22 = 2; VAR_22 < VAR_12; VAR_22++)
    {
        if (FUNC_11(VAR_13[VAR_22], L"/forcelogoff:", 13) == 0)
        {
            VAR_18 = &VAR_13[VAR_22][13];
            if (FUNC_12(VAR_18, L"no") == 0)
            {
                VAR_14->usrmod0_force_logoff = VAR_8;
                VAR_23 = VAR_9;
            }
            else
            {
                VAR_21 = FUNC_13(VAR_18, &VAR_19, 10);
                if (*VAR_19 != 0)
                {
                    FUNC_6(3952, L"/FORCELOGOFF");
                    VAR_26 = 1;
                    goto done;
                }

                VAR_14->usrmod0_force_logoff = VAR_21 * 60;
                VAR_23 = VAR_9;
            }
        }
        else if (FUNC_11(VAR_13[VAR_22], L"/minpwlen:", 10) == 0)
        {
            VAR_18 = &VAR_13[VAR_22][10];
            VAR_21 = FUNC_13(VAR_18, &VAR_19, 10);
            if (*VAR_19 != 0)
            {
                FUNC_6(3952, L"/MINPWLEN");
                VAR_26 = 1;
                goto done;
            }

            VAR_14->usrmod0_min_passwd_len = VAR_21;
            VAR_23 = VAR_9;
        }
        else if (FUNC_11(VAR_13[VAR_22], L"/maxpwage:", 10) == 0)
        {
            VAR_18 = &VAR_13[VAR_22][10];

            if (FUNC_12(VAR_18, L"unlimited"))
            {
                VAR_14->usrmod0_max_passwd_age = VAR_11;
                VAR_23 = VAR_9;
            }
            else
            {
                VAR_21 = FUNC_13(VAR_18, &VAR_19, 10);
                if (*VAR_19 != 0)
                {
                    FUNC_6(3952, L"/MAXPWLEN");
                    VAR_26 = 1;
                    goto done;
                }

                VAR_14->usrmod0_max_passwd_age = VAR_21 * 86400;
                VAR_23 = VAR_9;
            }
        }
        else if (FUNC_11(VAR_13[VAR_22], L"/minpwage:", 10) == 0)
        {
            VAR_18 = &VAR_13[VAR_22][10];
            VAR_21 = FUNC_13(VAR_18, &VAR_19, 10);
            if (*VAR_19 != 0)
            {
                FUNC_6(3952, L"/MINPWAGE");
                VAR_26 = 1;
                goto done;
            }

            VAR_14->usrmod0_min_passwd_age = VAR_21 * 86400;
            VAR_23 = VAR_9;
        }
        else if (FUNC_11(VAR_13[VAR_22], L"/uniquepw:", 10) == 0)
        {
            VAR_18 = &VAR_13[VAR_22][10];
            VAR_21 = FUNC_13(VAR_18, &VAR_19, 10);
            if (*VAR_19 != 0)
            {
                FUNC_6(3952, L"/UNIQUEPW");
                VAR_26 = 1;
                goto done;
            }

            VAR_14->usrmod0_password_hist_len = VAR_21;
            VAR_23 = VAR_9;
        }
    }

    if (VAR_23 == VAR_9)
    {
        VAR_25 = FUNC_4(((void*)0), 0, (LPBYTE)VAR_14, &VAR_20);
        if (VAR_25 != VAR_3)
            goto done;
    }
    else
    {
        VAR_25 = FUNC_3(((void*)0), 1, (LPBYTE*)&VAR_15);
        if (VAR_25 != VAR_3)
            goto done;

        VAR_25 = FUNC_3(((void*)0), 3, (LPBYTE*)&VAR_16);
        if (VAR_25 != VAR_3)
            goto done;

        FUNC_9(&VAR_17);

        FUNC_8(4570, VAR_24);
        if (VAR_14->usrmod0_force_logoff == VAR_8)
            FUNC_5(4305);
        else
            FUNC_0(VAR_7, L"%lu", VAR_14->usrmod0_force_logoff);
        FUNC_1(VAR_7, L"\n");

        FUNC_8(4572, VAR_24);
        FUNC_0(VAR_7, L"%lu\n", VAR_14->usrmod0_min_passwd_age / 86400);

        FUNC_8(4573, VAR_24);
        FUNC_0(VAR_7, L"%lu\n", VAR_14->usrmod0_max_passwd_age / 86400);

        FUNC_8(4574, VAR_24);
        FUNC_0(VAR_7, L"%lu\n", VAR_14->usrmod0_min_passwd_len);

        FUNC_8(4575, VAR_24);
        if (VAR_14->usrmod0_password_hist_len == 0)
            FUNC_5(4303);
        else
            FUNC_0(VAR_7, L"%lu", VAR_14->usrmod0_password_hist_len);
        FUNC_1(VAR_7, L"\n");

        FUNC_8(4578, VAR_24);
        if (VAR_16->usrmod3_lockout_threshold == 0)
            FUNC_5(4305);
        else
            FUNC_0(VAR_7, L"%lu", VAR_16->usrmod3_lockout_threshold);
        FUNC_1(VAR_7, L"\n");

        FUNC_8(4579, VAR_24);
        FUNC_0(VAR_7, L"%lu\n", VAR_16->usrmod3_lockout_duration / 60);

        FUNC_8(4580, VAR_24);
        FUNC_0(VAR_7, L"%lu\n", VAR_16->usrmod3_lockout_observation_window / 60);

        FUNC_8(4576, VAR_24);
        if (VAR_15->usrmod1_role == VAR_10)
        {
            if (VAR_17 == VAR_4)
            {
                FUNC_5(5070);
            }
            else if (VAR_17 == VAR_5)
            {
                FUNC_5(5073);
            }
            else
            {
                FUNC_5(5072);
            }
        }
        else
        {
            FUNC_5(5071);
        }
        FUNC_1(VAR_7, L"\n");
    }

done:
    if (VAR_16 != ((void*)0))
        FUNC_2(VAR_16);

    if (VAR_15 != ((void*)0))
        FUNC_2(VAR_15);

    if (VAR_14 != ((void*)0))
        FUNC_2(VAR_14);

    return VAR_26;
}
