
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int type ;
struct TYPE_3__ {int member_0; } ;
typedef scalar_t__ TOKEN_ELEVATION_TYPE ;
typedef TYPE_1__ SID_IDENTIFIER_AUTHORITY ;
typedef int * PSID ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int,int ,int ,int ,int ,int ,int ,int ,int ,int **) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,scalar_t__*,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int *,int *,int*) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static BOOL FUNC_8(void)
{
    SID_IDENTIFIER_AUTHORITY VAR_10 = {VAR_4};
    PSID VAR_11 = ((void*)0);
    BOOL VAR_12;
    HANDLE VAR_13;

    if (!&FUNC_5 || !&FUNC_6) return VAR_2;

    if (!FUNC_0(&VAR_10, 2, VAR_3,
                                  VAR_0, 0, 0, 0, 0, 0, 0, &VAR_11) ||
        !FUNC_5(((void*)0), VAR_11, &VAR_12))
    {
        FUNC_7("Could not check if the current user is an administrator\n");
        FUNC_2(VAR_11);
        return VAR_2;
    }
    FUNC_2(VAR_11);

    if (!VAR_12)
    {
        if (!FUNC_0(&VAR_10, 2,
                                      VAR_3,
                                      VAR_1,
                                      0, 0, 0, 0, 0, 0, &VAR_11) ||
            !FUNC_5(((void*)0), VAR_11, &VAR_12))
        {
            FUNC_7("Could not check if the current user is a power user\n");
            return VAR_2;
        }
        if (!VAR_12)
        {

            return VAR_6;
        }
    }

    if (FUNC_6(FUNC_3(), VAR_5, &VAR_13))
    {
        BOOL VAR_14;
        TOKEN_ELEVATION_TYPE VAR_15 = VAR_8;
        DWORD VAR_16;

        VAR_14 = FUNC_4(VAR_13, VAR_7, &VAR_15, sizeof(VAR_15), &VAR_16);
        FUNC_1(VAR_13);
        return (VAR_14 && VAR_15 == VAR_9);
    }
    return VAR_2;
}
