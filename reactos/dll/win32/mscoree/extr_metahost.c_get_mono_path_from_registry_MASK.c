
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version ;
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
 scalar_t__ FUNC_2 (int ,char const*,int ,int *,int ,int*) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static BOOL FUNC_6(LPWSTR VAR_4, int VAR_5)
{
    static const WCHAR VAR_6[] = {'S','o','f','t','w','a','r','e','\\','N','o','v','e','l','l','\\','M','o','n','o',0};
    static const WCHAR VAR_7[] = {'D','e','f','a','u','l','t','C','L','R',0};
    static const WCHAR VAR_8[] = {'S','d','k','I','n','s','t','a','l','l','R','o','o','t',0};
    static const WCHAR VAR_9[] = {'\\',0};

    WCHAR VAR_10[64], VAR_11[VAR_3];
    DWORD VAR_12;
    HKEY VAR_13;
    WCHAR VAR_14[VAR_3];

    if (FUNC_1(VAR_1, VAR_6, 0, VAR_2, &VAR_13))
        return VAR_0;

    VAR_12 = sizeof(VAR_10);
    if (FUNC_2(VAR_13, VAR_7, 0, ((void*)0), (LPBYTE)VAR_10, &VAR_12))
    {
        FUNC_0(VAR_13);
        return VAR_0;
    }
    FUNC_0(VAR_13);

    FUNC_5(VAR_11, VAR_6);
    FUNC_4(VAR_11, VAR_9);
    FUNC_4(VAR_11, VAR_10);

    if (FUNC_1(VAR_1, VAR_11, 0, VAR_2, &VAR_13))
        return VAR_0;

    VAR_12 = sizeof(WCHAR) * VAR_3;
    if (FUNC_2(VAR_13, VAR_8, 0, ((void*)0), (LPBYTE)VAR_4, &VAR_12))
    {
        FUNC_0(VAR_13);
        return VAR_0;
    }
    FUNC_0(VAR_13);

    return FUNC_3(VAR_4, VAR_14, VAR_5);
}
