
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SHIMGVW_SETTINGS ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,int ,int*) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;

__attribute__((used)) static BOOL
FUNC_4()
{
    HKEY VAR_6;
    DWORD VAR_7;

    if (FUNC_1(VAR_2, FUNC_3("Software\\ReactOS\\shimgvw"), 0, VAR_3, &VAR_6) == VAR_0)
    {
        VAR_7 = sizeof(SHIMGVW_SETTINGS);
        if (FUNC_2(VAR_6, FUNC_3("Settings"), ((void*)0), ((void*)0), (LPBYTE)&VAR_5, &VAR_7) == VAR_0)
        {
            FUNC_0(VAR_6);
            return VAR_4;
        }

        FUNC_0(VAR_6);
    }

    return VAR_1;
}
