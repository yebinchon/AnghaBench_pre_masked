
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPWSTR ;
typedef char const* LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static LPWSTR FUNC_4(LPCWSTR VAR_0, LPCWSTR VAR_1,
                                      LPCWSTR VAR_2, LPCWSTR VAR_3)
{
    LPWSTR VAR_4;
    DWORD VAR_5;

    static const WCHAR VAR_6[] = {
            '[','%','s','<','=','>','%','s','<','=','>','%','s',']','%','s',0
    };

    if (!VAR_1)
        return FUNC_3(VAR_0);

    VAR_5 = FUNC_0(VAR_0) + FUNC_0(VAR_1) +
          FUNC_0(VAR_2) + FUNC_0(VAR_3) +
          FUNC_0(VAR_6) - 7;
    VAR_4 = FUNC_1(VAR_5 * sizeof(WCHAR));

    FUNC_2(VAR_4, VAR_6, VAR_1, VAR_2, VAR_3, VAR_0);
    return VAR_4;
}
