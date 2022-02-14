
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wk_sid ;
typedef char const* WELL_KNOWN_SID_TYPE ;
struct TYPE_3__ {int member_0; } ;
typedef char const* SID_NAME_USE ;
typedef TYPE_1__ SID_IDENTIFIER_AUTHORITY ;
typedef char* PSID ;
typedef char* LPSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int,int ,int,int,int,int,int,int ,int ,char**) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 char* FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int *,char const*,char*,scalar_t__*,char*,scalar_t__*,char const**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char**,char**) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (char const*,char*,char*,scalar_t__*) ;
 int FUNC_13 (char*,char const*) ;

__attribute__((used)) static void FUNC_14(const char* VAR_5, WELL_KNOWN_SID_TYPE VAR_6)
{
    SID_IDENTIFIER_AUTHORITY VAR_7 = { VAR_2 };
    PSID VAR_8 = ((void*)0);
    char VAR_9[VAR_1];
    DWORD VAR_10;

    DWORD VAR_11, VAR_12;
    SID_NAME_USE VAR_13;
    LPSTR VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    PSID VAR_19;
    BOOL VAR_20 ,VAR_21;

    VAR_11 = 0;
    VAR_12 = 0;
    VAR_20 = FUNC_7(((void*)0), VAR_5, ((void*)0), &VAR_11, ((void*)0), &VAR_12, &VAR_13);
    FUNC_11(!VAR_20, " %s Should have failed to lookup account name\n", VAR_5);
    VAR_19 = FUNC_5(FUNC_4(),0,VAR_11);
    VAR_14 = FUNC_5(FUNC_4(),0,VAR_12);
    VAR_20 = FUNC_7(((void*)0), VAR_5, VAR_19, &VAR_11, VAR_14, &VAR_12, &VAR_13);

    if (!VAR_6)
    {
        FUNC_11(!VAR_20, " %s Should have failed to lookup account name\n",VAR_5);
        goto cleanup;
    }

    FUNC_0(&VAR_7, 6, VAR_3, 12, 23, 34, 45, 56, 0, 0, &VAR_8);
    VAR_10 = sizeof(VAR_9);
    if (!FUNC_12(VAR_6, VAR_8, VAR_9, &VAR_10))
    {
        FUNC_13("SID %i is not available on the system\n",VAR_6);
        goto cleanup;
    }

    VAR_21 = FUNC_9(VAR_9, &VAR_18, &VAR_17);
    if (!VAR_21 && FUNC_3() == VAR_0)
    {
        FUNC_13("CreateWellKnownSid() succeeded but the account '%s' is not present (W2K)\n", VAR_5);
        goto cleanup;
    }

    FUNC_9(VAR_19, &VAR_15, &VAR_16);

    FUNC_11(VAR_20, "Failed to lookup account name %s\n",VAR_5);
    FUNC_11(VAR_11 != 0, "sid_size was zero\n");

    FUNC_11(FUNC_1(VAR_19,VAR_9),"%s Sid %s fails to match well known sid %s!\n",
       VAR_5, FUNC_8(VAR_19), FUNC_8(VAR_9));

    FUNC_11(!FUNC_10(VAR_15, VAR_18), "Expected %s , got %s\n", VAR_15, VAR_18);
    FUNC_11(!FUNC_10(VAR_14, VAR_17), "Expected %s, got %s\n", VAR_17, VAR_14);
    FUNC_11(VAR_13 == VAR_4 , "Expected Use (5), got %d\n", VAR_13);

cleanup:
    FUNC_2(VAR_8);
    FUNC_6(FUNC_4(),0,VAR_19);
    FUNC_6(FUNC_4(),0,VAR_14);
}
