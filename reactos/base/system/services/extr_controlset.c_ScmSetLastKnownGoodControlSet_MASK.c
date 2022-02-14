
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dwControlSet ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ,int ,int) ;

__attribute__((used)) static
DWORD
FUNC_4(
    DWORD VAR_4)
{
    HKEY VAR_5;
    DWORD VAR_6;

    VAR_6 = FUNC_2(VAR_1,
                            L"System\\Select",
                            0,
                            VAR_2,
                            &VAR_5);
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_6 = FUNC_3(VAR_5,
                             L"LastKnownGood",
                             0,
                             VAR_3,
                             (LPBYTE)&VAR_4,
                             sizeof(VAR_4));

    FUNC_1(VAR_5);
    FUNC_0(VAR_5);

    return VAR_6;
}
