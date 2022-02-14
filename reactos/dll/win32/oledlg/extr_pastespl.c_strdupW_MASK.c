
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int DWORD ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static inline WCHAR *FUNC_4(const WCHAR *VAR_0)
{
    DWORD VAR_1;
    WCHAR *VAR_2;
    if(!VAR_0) return ((void*)0);
    VAR_1 = FUNC_2(VAR_0) + 1;
    VAR_2 = FUNC_1(FUNC_0(), 0, VAR_1 * sizeof(WCHAR));
    FUNC_3(VAR_2, VAR_0, VAR_1 * sizeof(WCHAR));
    return VAR_2;
}
