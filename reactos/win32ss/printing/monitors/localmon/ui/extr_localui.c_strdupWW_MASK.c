
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LPWSTR ;
typedef int LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static LPWSTR FUNC_5(LPCWSTR VAR_0, LPCWSTR VAR_1)
{
    LPWSTR VAR_2;
    DWORD VAR_3;

    VAR_3 = FUNC_4(VAR_0) + (VAR_1 ? FUNC_4(VAR_1) : 0) + 1;
    VAR_2 = FUNC_1(FUNC_0(), 0, VAR_3 * sizeof(WCHAR));
    if (VAR_2) {
        FUNC_3(VAR_2, VAR_0);
        if (VAR_1) FUNC_2(VAR_2, VAR_1);
    }
    return VAR_2;
}
