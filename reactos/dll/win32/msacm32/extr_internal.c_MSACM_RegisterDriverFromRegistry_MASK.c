
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef char WCHAR ;
typedef int * PWINE_ACMDRIVERID ;
typedef int LPCWSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char const*,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *,int ,scalar_t__*) ;
 int FUNC_5 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_6 (int ,char const*,int ) ;
 int FUNC_7 (int ) ;

PWINE_ACMDRIVERID FUNC_8(LPCWSTR VAR_3)
{
    static const WCHAR VAR_4[] = {'M','S','A','C','M','.'};
    static const WCHAR VAR_5[] = {'S','o','f','t','w','a','r','e','\\',
       'M','i','c','r','o','s','o','f','t','\\',
       'W','i','n','d','o','w','s',' ','N','T','\\',
       'C','u','r','r','e','n','t','V','e','r','s','i','o','n','\\',
       'D','r','i','v','e','r','s','3','2','\0'};
    WCHAR VAR_6[2048];
    DWORD VAR_7, VAR_8;
    HKEY VAR_9;
    PWINE_ACMDRIVERID VAR_10 = ((void*)0);




    if (0 == FUNC_6(VAR_3, VAR_4, FUNC_0(VAR_4))) {
        VAR_8 = FUNC_3(VAR_1, VAR_5, 0, VAR_2, &VAR_9);
        if (VAR_8 != VAR_0) {
            FUNC_5("unable to open registry key - 0x%08x\n", VAR_8);
        } else {
            VAR_7 = sizeof(VAR_6);
            VAR_8 = FUNC_4(VAR_9, VAR_3, ((void*)0), ((void*)0), (LPBYTE)VAR_6, &VAR_7);
            if (VAR_8 != VAR_0) {
                FUNC_5("unable to query requested subkey %s - 0x%08x\n", FUNC_7(VAR_3), VAR_8);
            } else {
                FUNC_1(VAR_3, VAR_6, 0);
            }
            FUNC_2( VAR_9 );
        }
    }
    return VAR_10;
}
