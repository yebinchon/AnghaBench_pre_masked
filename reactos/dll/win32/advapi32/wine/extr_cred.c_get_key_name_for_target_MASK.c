
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wszGenericPrefix ;
typedef int wszDomPasswdPrefix ;
typedef char WCHAR ;
typedef char* LPWSTR ;
typedef char const* LPCWSTR ;
typedef int INT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static LPWSTR FUNC_4(LPCWSTR VAR_1, DWORD VAR_2)
{
    static const WCHAR VAR_3[] = {'G','e','n','e','r','i','c',':',' ',0};
    static const WCHAR VAR_4[] = {'D','o','m','P','a','s','s','w','d',':',' ',0};
    INT VAR_5;
    LPCWSTR VAR_6 = ((void*)0);
    LPWSTR VAR_7, VAR_8;

    VAR_5 = FUNC_3(VAR_1);
    if (VAR_2 == VAR_0)
    {
        VAR_6 = VAR_3;
        VAR_5 += sizeof(VAR_3)/sizeof(VAR_3[0]);
    }
    else
    {
        VAR_6 = VAR_4;
        VAR_5 += sizeof(VAR_4)/sizeof(VAR_4[0]);
    }

    VAR_7 = FUNC_0(VAR_5 * sizeof(WCHAR));
    if (!VAR_7) return ((void*)0);

    FUNC_2(VAR_7, VAR_6);
    FUNC_1(VAR_7, VAR_1);

    for (VAR_8 = VAR_7; *VAR_8; VAR_8++)
        if (*VAR_8 == '\\') *VAR_8 = '_';

    return VAR_7;
}
