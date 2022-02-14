
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_2__ {int* usri1_name; int* usri1_password; int usri1_flags; int * usri1_script_path; int * usri1_comment; int * usri1_home_dir; int usri1_priv; scalar_t__ usri1_password_age; } ;
typedef TYPE_1__ USER_INFO_1 ;
typedef int* PWSTR ;
typedef scalar_t__ NET_API_STATUS ;
typedef int LPBYTE ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int *,int,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (int*,char*) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*,char*) ;
 int FUNC_9 (int*,int*) ;
 int FUNC_10 (int*,int*,int) ;

INT
FUNC_11(
    INT VAR_13,
    WCHAR **VAR_14)
{
    WCHAR VAR_15[VAR_3 + 2];
    WCHAR VAR_16[VAR_2 + 1];
    USER_INFO_1 VAR_17;
    INT VAR_18, VAR_19 = 0;
    BOOL VAR_20 = VAR_1;
    BOOL VAR_21 = VAR_1;
    PWSTR VAR_22 = ((void*)0);
    NET_API_STATUS VAR_23 = VAR_6;
    VAR_18 = 2;
    if (VAR_13 > 2 && VAR_14[VAR_18][0] == L'\\' && VAR_14[VAR_18][1] == L'\\')
    {
        VAR_22 = VAR_14[VAR_18];
        VAR_18++;
    }

    for (; VAR_18 < VAR_13; VAR_18++)
    {
        if (FUNC_6(VAR_14[VAR_18], L"help") == 0)
        {

            FUNC_4(4381);
            FUNC_0(VAR_7, L"\n");
            FUNC_5(VAR_5);
            return 0;
        }

        if (FUNC_6(VAR_14[VAR_18], L"/help") == 0)
        {

            FUNC_4(4381);
            FUNC_0(VAR_7, L"\n");
            FUNC_5(VAR_5);
            FUNC_5(VAR_4);
            return 0;
        }

        if (FUNC_6(VAR_14[VAR_18], L"/add") == 0)
        {
            VAR_20 = VAR_8;
            continue;
        }
        else if (FUNC_6(VAR_14[VAR_18], L"/del") == 0)
        {
            VAR_21 = VAR_8;
            continue;
        }
        else
        {
            FUNC_3(3506 );
            return 1;
        }
    }

    if (VAR_22 == ((void*)0) ||
        (VAR_20 == VAR_1 && VAR_21 == VAR_1) ||
        (VAR_20 == VAR_8 && VAR_21 == VAR_8))
    {
        FUNC_4(4381);
        FUNC_0(VAR_7, L"\n");
        FUNC_5(VAR_5);
        return 1;
    }





    FUNC_9(VAR_15, &VAR_22[2]);
    FUNC_8(VAR_15, L"$");

    if (VAR_20)
    {





        FUNC_10(VAR_16, &VAR_22[2], VAR_2);
        VAR_16[VAR_2] = VAR_11;
        FUNC_7(VAR_16);


        VAR_17.usri1_name = VAR_15;
        VAR_17.usri1_password = VAR_16;
        VAR_17.usri1_password_age = 0;
        VAR_17.usri1_priv = VAR_12;
        VAR_17.usri1_home_dir = ((void*)0);
        VAR_17.usri1_comment = ((void*)0);
        VAR_17.usri1_flags = VAR_9 | VAR_10;
        VAR_17.usri1_script_path = ((void*)0);


        VAR_23 = FUNC_1(((void*)0),
                            1,
                            (LPBYTE)&VAR_17,
                            ((void*)0));
    }
    else if (VAR_21)
    {

        VAR_23 = FUNC_2(((void*)0),
                            VAR_15);
    }

    if (VAR_23 == VAR_6)
    {
        FUNC_3(VAR_0);
    }
    else
    {
        FUNC_3(VAR_23);
        VAR_19 = 1;
    }

    return VAR_19;
}
