
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;
typedef int DWORD ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static inline LPWSTR FUNC_3(LPCWSTR VAR_0)
{
    LPWSTR VAR_1 = ((void*)0);

    if(VAR_0) {
        DWORD VAR_2;

        VAR_2 = (FUNC_1(VAR_0)+1)*sizeof(WCHAR);
        VAR_1 = FUNC_0(VAR_2);
        FUNC_2(VAR_1, VAR_0, VAR_2);
    }

    return VAR_1;
}
