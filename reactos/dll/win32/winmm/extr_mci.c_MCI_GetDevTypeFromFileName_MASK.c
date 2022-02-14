
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,int ,void*,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,char) ;

__attribute__((used)) static DWORD FUNC_6(LPCWSTR VAR_4, LPWSTR VAR_5, UINT VAR_6)
{
    LPCWSTR VAR_7;
    HKEY VAR_8;
    static const WCHAR VAR_9[] = {'S','O','F','T','W','A','R','E','\\','M','i','c','r','o','s','o','f','t','\\',
                                 'W','i','n','d','o','w','s',' ','N','T','\\','C','u','r','r','e','n','t','V','e','r','s','i','o','n','\\',
                                 'M','C','I',' ','E','x','t','e','n','s','i','o','n','s',0};
    if ((VAR_7 = FUNC_5(VAR_4, '.'))) {
 if (FUNC_1( VAR_1, VAR_9,
      0, VAR_2, &VAR_8 ) == VAR_0) {
     DWORD VAR_10 = VAR_6;
     LONG VAR_11 = FUNC_2( VAR_8, VAR_7 + 1, 0, 0, (void*)VAR_5, &VAR_10 );
     FUNC_0( VAR_8 );
     if (VAR_11 == VAR_0) return 0;
        }
 FUNC_3("No ...\\MCI Extensions entry for %s found.\n", FUNC_4(VAR_7));
    }
    return VAR_3;
}
