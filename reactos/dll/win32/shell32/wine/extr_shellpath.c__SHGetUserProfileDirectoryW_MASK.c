
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef int LPDWORD ;
typedef int INT ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int ) ;

BOOL FUNC_6(HANDLE VAR_1, LPWSTR VAR_2, LPDWORD VAR_3)
{
    BOOL VAR_4;
    if (!VAR_1)
    {
        FUNC_4(FUNC_1(), VAR_0, &VAR_1);
        VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
        FUNC_0(VAR_1);
    }
    else if ((INT) VAR_1 == -1)
    {
        VAR_4 = FUNC_2(VAR_2, VAR_3);
    }
    else
    {
        VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
    }
    FUNC_5("_SHGetUserProfileDirectoryW returning %S\n", VAR_2);
    return VAR_4;
}
