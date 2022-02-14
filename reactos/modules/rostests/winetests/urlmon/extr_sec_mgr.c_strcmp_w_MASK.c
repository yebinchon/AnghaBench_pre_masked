
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int DWORD ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_2(const WCHAR *VAR_0, const WCHAR *VAR_1)
{
    DWORD VAR_2 = FUNC_0(VAR_0);
    DWORD VAR_3 = FUNC_0(VAR_1);

    if(VAR_2!=VAR_3) return 1;
    return FUNC_1(VAR_0, VAR_1, VAR_2*sizeof(WCHAR));
}
