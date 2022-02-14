
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int *,int *,int ,scalar_t__*) ;

__attribute__((used)) static BOOL FUNC_3(void)
{
    HKEY VAR_4;
    DWORD VAR_5;
    DWORD VAR_6;

    if (FUNC_1(VAR_2, "Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings",
                      0, VAR_3, &VAR_4) != VAR_0)
        return VAR_1;

    VAR_6 = sizeof(DWORD);
    if (FUNC_2(VAR_4, "ProxyEnable", ((void*)0), ((void*)0), (LPBYTE) &VAR_5, &VAR_6) != VAR_0)
        VAR_5 = 0;

    FUNC_0(VAR_4);

    return VAR_5 != 0;
}
