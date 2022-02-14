
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlreaderinput ;
typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int DWORD ;


 int FUNC_0 (int *,int const*,int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static inline WCHAR *FUNC_3(xmlreaderinput *VAR_0, const WCHAR *VAR_1)
{
    LPWSTR VAR_2 = ((void*)0);

    if(VAR_1) {
        DWORD VAR_3;

        VAR_3 = (FUNC_2(VAR_1)+1)*sizeof(WCHAR);
        VAR_2 = FUNC_1(VAR_0, VAR_3);
        if (VAR_2) FUNC_0(VAR_2, VAR_1, VAR_3);
    }

    return VAR_2;
}
