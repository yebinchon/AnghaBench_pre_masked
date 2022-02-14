
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(WCHAR *VAR_0, DWORD *VAR_1)
{
    if (VAR_0[0] == '\'' && (*VAR_1 > 1) && VAR_0[*VAR_1-2]=='\'')
    {
        *VAR_1 -= 2;
        VAR_0[*VAR_1] = 0x00;
        FUNC_0(VAR_0, VAR_0 + 1, *VAR_1 * sizeof(WCHAR));
    }
}
