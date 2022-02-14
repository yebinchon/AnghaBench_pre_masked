
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int PBYTE ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *,int ,scalar_t__*) ;
 int VAR_4 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static HRESULT FUNC_5(LPCWSTR VAR_5, DWORD *VAR_6)
{
    DWORD VAR_7, VAR_8;
    HKEY VAR_9;

    static const WCHAR VAR_10[] =
        {'S','o','f','t','w','a','r','e','\\',
         'M','i','c','r','o','s','o','f','t','\\',
         'W','i','n','d','o','w','s','\\',
         'C','u','r','r','e','n','t','V','e','r','s','i','o','n','\\',
         'I','n','t','e','r','n','e','t',' ','S','e','t','t','i','n','g','s','\\',
         'Z','o','n','e','M','a','p','\\',
         'P','r','o','t','o','c','o','l','D','e','f','a','u','l','t','s',0};

    VAR_7 = FUNC_2(VAR_2, VAR_10, &VAR_9);
    if(VAR_7 != VAR_0) {
        FUNC_0("Could not open key %s\n", FUNC_4(VAR_10));
        return VAR_1;
    }

    VAR_8 = sizeof(DWORD);
    VAR_7 = FUNC_3(VAR_9, VAR_5, ((void*)0), ((void*)0), (PBYTE)VAR_6, &VAR_8);
    FUNC_1(VAR_9);
    if(VAR_7 == VAR_0)
        return VAR_4;

    VAR_7 = FUNC_2(VAR_3, VAR_10, &VAR_9);
    if(VAR_7 != VAR_0) {
        FUNC_0("Could not open key %s\n", FUNC_4(VAR_10));
        return VAR_1;
    }

    VAR_8 = sizeof(DWORD);
    VAR_7 = FUNC_3(VAR_9, VAR_5, ((void*)0), ((void*)0), (PBYTE)VAR_6, &VAR_8);
    FUNC_1(VAR_9);
    if(VAR_7 == VAR_0)
        return VAR_4;

    *VAR_6 = 3;
    return VAR_4;
}
