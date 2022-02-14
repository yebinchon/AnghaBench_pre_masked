
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ LPWSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,char const*,int ,int *,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_3(LPWSTR VAR_5)
{
    const WCHAR VAR_6[] = {'S','O','F','T','W','A','R','E','\\','M','i','c','r','o','s','o','f','t','\\','.','N','E','T','F','r','a','m','e','w','o','r','k','\\',0};
    const WCHAR VAR_7[] = {'I','n','s','t','a','l','l','R','o','o','t',0};

    DWORD VAR_8;
    HKEY VAR_9;

    if (FUNC_1(VAR_1, VAR_6, 0, VAR_2, &VAR_9))
        return VAR_0;

    VAR_8 = VAR_3;
    if (FUNC_2(VAR_9, VAR_7, 0, ((void*)0), (LPBYTE)VAR_5, &VAR_8))
    {
        FUNC_0(VAR_9);
        return VAR_0;
    }
    FUNC_0(VAR_9);

    return VAR_4;
}
