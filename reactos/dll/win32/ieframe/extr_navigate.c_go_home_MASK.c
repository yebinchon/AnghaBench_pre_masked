
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wszPageName ;
typedef char WCHAR ;
typedef int LPBYTE ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DocHost ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;
 scalar_t__ FUNC_2 (int ,char const*,int *,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_3 (int *,char const*,int *,int *,int *,int *) ;

HRESULT FUNC_4(DocHost *VAR_4)
{
    HKEY VAR_5;
    DWORD VAR_6, VAR_7, VAR_8;
    WCHAR VAR_9[VAR_2];
    static const WCHAR VAR_10[] = {'a','b','o','u','t',':','b','l','a','n','k',0};
    static const WCHAR VAR_11[] = {'S','t','a','r','t',' ','P','a','g','e',0};
    static const WCHAR VAR_12[] = {'S','o','f','t','w','a','r','e','\\',
                                      'M','i','c','r','o','s','o','f','t','\\',
                                      'I','n','t','e','r','n','e','t',' ','E','x','p','l','o','r','e','r','\\',
                                      'M','a','i','n',0};

    VAR_6 = FUNC_1(VAR_1, VAR_12, &VAR_5);
    if (VAR_6 != VAR_0)
        return FUNC_3(VAR_4, VAR_10, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

    VAR_8 = sizeof(VAR_9);
    VAR_6 = FUNC_2(VAR_5, VAR_11, ((void*)0), &VAR_7, (LPBYTE)VAR_9, &VAR_8);
    FUNC_0(VAR_5);
    if (VAR_6 != VAR_0 || VAR_7 != VAR_3)
        return FUNC_3(VAR_4, VAR_10, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

    return FUNC_3(VAR_4, VAR_9, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
}
