
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,char*,int ,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static
BOOL
FUNC_8(BOOL VAR_7,
                LPWSTR VAR_8)
{
    WCHAR VAR_9[VAR_4];
    DWORD VAR_10;
    DWORD VAR_11;
    HKEY VAR_12;
    LONG VAR_13;

    FUNC_0("GetProgramsPath() called\n");

    VAR_13 = FUNC_4(VAR_2,
                          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\User Shell Folders",
                          0,
                          VAR_3,
                          &VAR_12);
    if (VAR_13 != VAR_0)
    {
        FUNC_1("RegOpenKeyExW() failed\n");
        FUNC_6((DWORD)VAR_13);
        return VAR_1;
    }

    VAR_10 = VAR_4 * sizeof(WCHAR);
    VAR_13 = FUNC_5(VAR_12,
                             VAR_7 ? L"Common Programs" : L"Programs",
                             0,
                             &VAR_11,
                             (LPBYTE)VAR_9,
                             &VAR_10);
    if (VAR_13 != VAR_0)
    {
        FUNC_1("RegQueryValueExW() failed\n");
        FUNC_3(VAR_12);
        FUNC_6((DWORD)VAR_13);
        return VAR_1;
    }

    FUNC_3(VAR_12);

    if (VAR_11 == VAR_5)
    {
        FUNC_2(VAR_9,
                                  VAR_8,
                                  VAR_4);
    }
    else
    {
        FUNC_7(VAR_8,
               VAR_9);
    }

    FUNC_0("GetProgramsPath() done\n");

    return VAR_6;
}
