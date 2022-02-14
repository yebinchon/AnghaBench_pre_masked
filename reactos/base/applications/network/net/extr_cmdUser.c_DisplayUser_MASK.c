
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int usri4_flags; scalar_t__ usri4_acct_expires; scalar_t__ usri4_password_age; scalar_t__ usrmod0_max_passwd_age; scalar_t__ usrmod0_min_passwd_age; scalar_t__ usri4_last_logon; int * grui0_name; int * lgrui0_name; int * usri4_logon_hours; int usri4_units_per_week; int * usri4_home_dir; int * usri4_profile; int * usri4_script_path; int * usri4_workstations; int usri4_country_code; int * usri4_usr_comment; int * usri4_comment; int * usri4_full_name; int * usri4_name; } ;
typedef TYPE_1__* PUSER_MODALS_INFO_0 ;
typedef TYPE_1__* PUSER_INFO_4 ;
typedef TYPE_1__* PLOCALGROUP_USERS_INFO_0 ;
typedef TYPE_1__* PGROUP_USERS_INFO_0 ;
typedef scalar_t__ NET_API_STATUS ;
typedef int LPWSTR ;
typedef int LPBYTE ;
typedef int INT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int *,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int *,int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (int *,int ,int,int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int ,int *,int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int *,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static
NET_API_STATUS
FUNC_16(LPWSTR VAR_9)
{
    PUSER_MODALS_INFO_0 VAR_10 = ((void*)0);
    PUSER_INFO_4 VAR_11 = ((void*)0);
    PLOCALGROUP_USERS_INFO_0 VAR_12 = ((void*)0);
    PGROUP_USERS_INFO_0 VAR_13 = ((void*)0);
    DWORD VAR_14, VAR_15;
    DWORD VAR_16, VAR_17;
    DWORD VAR_18;
    DWORD VAR_19;
    WCHAR VAR_20[40];
    INT VAR_21 = 36;
    NET_API_STATUS VAR_22;


    VAR_22 = FUNC_7(((void*)0),
                            VAR_9,
                            4,
                            (LPBYTE*)&VAR_11);
    if (VAR_22 != VAR_1)
        return VAR_22;

    VAR_22 = FUNC_9(((void*)0),
                              0,
                              (LPBYTE*)&VAR_10);
    if (VAR_22 != VAR_1)
        goto done;

    VAR_22 = FUNC_8(((void*)0),
                                   VAR_9,
                                   0,
                                   0,
                                   (LPBYTE*)&VAR_12,
                                   VAR_0,
                                   &VAR_14,
                                   &VAR_15);
    if (VAR_22 != VAR_1)
        goto done;

    VAR_22 = FUNC_6(((void*)0),
                              VAR_9,
                              0,
                              (LPBYTE*)&VAR_13,
                              VAR_0,
                              &VAR_16,
                              &VAR_17);
    if (VAR_22 != VAR_1)
        goto done;

    FUNC_13(4411, VAR_21);
    FUNC_1(VAR_2, L"%s\n", VAR_11->usri4_name);

    FUNC_13(4412, VAR_21);
    FUNC_1(VAR_2, L"%s\n", VAR_11->usri4_full_name);

    FUNC_13(4413, VAR_21);
    FUNC_1(VAR_2, L"%s\n", VAR_11->usri4_comment);

    FUNC_13(4414, VAR_21);
    FUNC_1(VAR_2, L"%s\n", VAR_11->usri4_usr_comment);

    FUNC_13(4416, VAR_21);
    FUNC_3(VAR_11->usri4_country_code,
                              FUNC_0(VAR_20), VAR_20);
    FUNC_1(VAR_2, L"%03ld (%s)\n", &VAR_11->usri4_country_code, VAR_20);

    FUNC_13(4419, VAR_21);
    if (VAR_11->usri4_flags & VAR_4)
        FUNC_12(4301);
    else if (VAR_11->usri4_flags & VAR_6)
        FUNC_12(4440);
    else
        FUNC_12(4300);
    FUNC_2(VAR_2, L"\n");

    FUNC_13(4420, VAR_21);
    if (VAR_11->usri4_acct_expires == VAR_3)
        FUNC_12(4305);
    else
        FUNC_10(VAR_11->usri4_acct_expires);
    FUNC_2(VAR_2, L"\n\n");

    FUNC_13(4421, VAR_21);
    VAR_18 = FUNC_4() - VAR_11->usri4_password_age;
    FUNC_10(VAR_18);
    FUNC_2(VAR_2, L"\n");

    FUNC_13(4422, VAR_21);
    if ((VAR_11->usri4_flags & VAR_5) || VAR_10->usrmod0_max_passwd_age == VAR_3)
        FUNC_12(4305);
    else
        FUNC_10(VAR_18 + VAR_10->usrmod0_max_passwd_age);
    FUNC_2(VAR_2, L"\n");

    FUNC_13(4423, VAR_21);
    FUNC_10(VAR_18 + VAR_10->usrmod0_min_passwd_age);
    FUNC_2(VAR_2, L"\n");

    FUNC_13(4437, VAR_21);
    FUNC_12((VAR_11->usri4_flags & VAR_8) ? 4301 : 4300);
    FUNC_2(VAR_2, L"\n");

    FUNC_13(4438, VAR_21);
    FUNC_12((VAR_11->usri4_flags & VAR_7) ? 4301 : 4300);
    FUNC_2(VAR_2, L"\n\n");

    FUNC_13(4424, VAR_21);
    if (VAR_11->usri4_workstations == ((void*)0) || FUNC_15(VAR_11->usri4_workstations) == 0)
        FUNC_12(4302);
    else
        FUNC_1(VAR_2, L"%s", VAR_11->usri4_workstations);
    FUNC_2(VAR_2, L"\n");

    FUNC_13(4429, VAR_21);
    FUNC_1(VAR_2, L"%s\n", VAR_11->usri4_script_path);

    FUNC_13(4439, VAR_21);
    FUNC_1(VAR_2, L"%s\n", VAR_11->usri4_profile);

    FUNC_13(4436, VAR_21);
    FUNC_1(VAR_2, L"%s\n", VAR_11->usri4_home_dir);

    FUNC_13(4430, VAR_21);
    if (VAR_11->usri4_last_logon == 0)
        FUNC_12(4305);
    else
        FUNC_10(VAR_11->usri4_last_logon);
    FUNC_2(VAR_2, L"\n\n");

    FUNC_13(4432, VAR_21);
    if (VAR_11->usri4_logon_hours == ((void*)0))
    {
        FUNC_12(4302);
        FUNC_2(VAR_2, L"\n");
    }
    else
    {
        FUNC_11(VAR_11->usri4_units_per_week,
                        VAR_11->usri4_logon_hours,
                        VAR_21);
    }

    FUNC_2(VAR_2, L"\n");
    FUNC_13(4427, VAR_21);
    if (VAR_15 != 0 && VAR_12 != ((void*)0))
    {
        for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++)
        {
            if (VAR_19 != 0)
                FUNC_14(L' ', VAR_21);
            FUNC_1(VAR_2, L"*%s\n", VAR_12[VAR_19].lgrui0_name);
        }
    }
    else
    {
        FUNC_2(VAR_2, L"\n");
    }

    FUNC_13(4431, VAR_21);
    if (VAR_17 != 0 && VAR_13 != ((void*)0))
    {
        for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++)
        {
            if (VAR_19 != 0)
                FUNC_14(L' ', VAR_21);
            FUNC_1(VAR_2, L"*%s\n", VAR_13[VAR_19].grui0_name);
        }
    }
    else
    {
        FUNC_2(VAR_2, L"\n");
    }

done:
    if (VAR_13 != ((void*)0))
        FUNC_5(VAR_13);

    if (VAR_12 != ((void*)0))
        FUNC_5(VAR_12);

    if (VAR_10 != ((void*)0))
        FUNC_5(VAR_10);

    if (VAR_11 != ((void*)0))
        FUNC_5(VAR_11);

    return VAR_1;
}
