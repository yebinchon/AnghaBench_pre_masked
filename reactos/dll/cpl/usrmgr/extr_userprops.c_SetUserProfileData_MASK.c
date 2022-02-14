
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int szUserName; } ;
struct TYPE_5__ {void* usri3_home_dir_drive; int * usri3_home_dir; int * usri3_script_path; int * usri3_profile; } ;
typedef int TCHAR ;
typedef TYPE_1__* PUSER_INFO_3 ;
typedef TYPE_2__* PPROFILE_USER_DATA ;
typedef scalar_t__ NET_API_STATUS ;
typedef void* LPTSTR ;
typedef int LPBYTE ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,void*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ,int,int *) ;
 scalar_t__ FUNC_10 (int *,int ,int,int ,int *) ;
 int FUNC_11 (int ,int ,int,int ) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static BOOL
FUNC_13(HWND VAR_12,
                   PPROFILE_USER_DATA VAR_13)
{
    PUSER_INFO_3 VAR_14 = ((void*)0);
    LPTSTR VAR_15 = ((void*)0);
    LPTSTR VAR_16 = ((void*)0);
    LPTSTR VAR_17 = ((void*)0);
    LPTSTR VAR_18 = ((void*)0);
    NET_API_STATUS VAR_19;
    DWORD VAR_20;
    INT VAR_21;
    INT VAR_22;

    FUNC_9(((void*)0), VAR_13->szUserName, 3, (LPBYTE*)&VAR_14);


    VAR_21 = FUNC_4(FUNC_1(VAR_12, VAR_8));
    if (VAR_21 == 0)
    {
        VAR_14->usri3_profile = ((void*)0);
    }
    else
    {
        VAR_15 = FUNC_5(FUNC_3(), 0, (VAR_21 + 1) * sizeof(TCHAR));
        FUNC_2(VAR_12, VAR_8, VAR_15, VAR_21 + 1);
        VAR_14->usri3_profile = VAR_15;
    }


    VAR_21 = FUNC_4(FUNC_1(VAR_12, VAR_10));
    if (VAR_21 == 0)
    {
        VAR_14->usri3_script_path = ((void*)0);
    }
    else
    {
        VAR_16 = FUNC_5(FUNC_3(), 0, (VAR_21 + 1) * sizeof(TCHAR));
        FUNC_2(VAR_12, VAR_10, VAR_16, VAR_21 + 1);
        VAR_14->usri3_script_path = VAR_16;
    }

    if (FUNC_7(VAR_12, VAR_6) == VAR_0)
    {

        VAR_21 = FUNC_4(FUNC_1(VAR_12, VAR_7));
        if (VAR_21 == 0)
        {
            VAR_14->usri3_home_dir = ((void*)0);
        }
        else
        {
            VAR_17 = FUNC_5(FUNC_3(), 0, (VAR_21 + 1) * sizeof(TCHAR));
            FUNC_2(VAR_12, VAR_7, VAR_17, VAR_21 + 1);
            VAR_14->usri3_home_dir = VAR_17;
        }
    }
    else
    {

        VAR_21 = FUNC_4(FUNC_1(VAR_12, VAR_9));
        if (VAR_21 == 0)
        {
            VAR_14->usri3_home_dir = ((void*)0);
        }
        else
        {
            VAR_17 = FUNC_5(FUNC_3(), 0, (VAR_21 + 1) * sizeof(TCHAR));
            FUNC_2(VAR_12, VAR_9, VAR_17, VAR_21 + 1);
            VAR_14->usri3_home_dir = VAR_17;
        }

        VAR_22 = FUNC_11(FUNC_1(VAR_12, VAR_5), VAR_2, 0, 0);
        if (VAR_22 != VAR_1)
        {
            VAR_21 = FUNC_11(FUNC_1(VAR_12, VAR_5), VAR_4, VAR_22, 0);
            VAR_18 = FUNC_5(FUNC_3(), 0, (VAR_21 + 1) * sizeof(TCHAR));
            FUNC_11(FUNC_1(VAR_12, VAR_5), VAR_3, VAR_22, (LPARAM)VAR_18);
            VAR_14->usri3_home_dir_drive = VAR_18;
        }
    }

    VAR_19 = FUNC_10(((void*)0), VAR_13->szUserName, 3, (LPBYTE)VAR_14, &VAR_20);
    if (VAR_19 != VAR_11)
    {
        FUNC_0(FUNC_12("Status: %lu  Index: %lu"), VAR_19, VAR_20);
    }

    if (VAR_15)
        FUNC_6(FUNC_3(), 0, VAR_15);

    if (VAR_16)
        FUNC_6(FUNC_3(), 0, VAR_16);

    if (VAR_17)
        FUNC_6(FUNC_3(), 0, VAR_17);

    if (VAR_18)
        FUNC_6(FUNC_3(), 0, VAR_18);

    FUNC_8(VAR_14);

    return (VAR_19 == VAR_11);
}
