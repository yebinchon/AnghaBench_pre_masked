
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int SID_NAME_USE ;
typedef int PTOKEN_GROUPS ;
typedef int PSID ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ,int ,char const*) ;
 int FUNC_3 (int *,int ,char*,int*,char*,int*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,...) ;
 char* VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;

BOOL
FUNC_8(PSID VAR_5, const HANDLE VAR_6, const WCHAR *VAR_7)
{
    const WCHAR *VAR_8[2];
    WCHAR VAR_9[VAR_1];
    WCHAR VAR_10[VAR_1];
    WCHAR VAR_11[VAR_1];
    DWORD VAR_12 = VAR_1;
    BOOL VAR_13 = VAR_0;
    SID_NAME_USE VAR_14;


    if (!FUNC_3(((void*)0), VAR_5, VAR_9, &VAR_12, VAR_10, &VAR_12, &VAR_14))
    {
        FUNC_4(VAR_3, FUNC_5("LookupAccountSid"));

        VAR_9[0] = '\0';
        VAR_10[0] = '\0';
    }

    if (FUNC_0(VAR_11, FUNC_6(VAR_11)))
    {
        VAR_8[0] = VAR_11;
    }
    else
    {
        FUNC_4(VAR_3, FUNC_5("Failed to get the name of Administrators group. Using the default."));

        VAR_8[0] = VAR_4;
    }
    VAR_8[1] = VAR_7;

    PTOKEN_GROUPS VAR_15 = FUNC_1(VAR_6);
    for (int VAR_16 = 0; VAR_16 < 2; ++VAR_16)
    {
        VAR_13 = FUNC_2(VAR_5, VAR_15, VAR_8[VAR_16]);
        if (VAR_13)
        {
            FUNC_4(VAR_2, FUNC_5("Authorizing user '%s@%s' by virtue of membership in group '%s'"),
                          VAR_9, VAR_10, VAR_8[VAR_16]);
            goto out;
        }
    }

out:
    FUNC_7(VAR_15);
    return VAR_13;
}
