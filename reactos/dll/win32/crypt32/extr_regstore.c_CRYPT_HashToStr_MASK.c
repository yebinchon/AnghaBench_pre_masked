
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int const* LPWSTR ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,char const*,int const) ;

__attribute__((used)) static void FUNC_2(const BYTE *VAR_0, LPWSTR VAR_1)
{
    static const WCHAR VAR_2[] = { '%','0','2','X',0 };
    DWORD VAR_3;

    FUNC_0(VAR_0);
    FUNC_0(VAR_1);

    for (VAR_3 = 0; VAR_3 < 20; VAR_3++)
        FUNC_1(VAR_1 + VAR_3 * 2, VAR_2, VAR_0[VAR_3]);
}
