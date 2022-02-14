
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static
TCHAR *
FUNC_1(TCHAR * VAR_0, DWORD * VAR_1)
{
    DWORD VAR_2 = *VAR_1;




    if (VAR_2 > 1)
    {
        if (VAR_0[0] == FUNC_0('!'))
        {
            ++VAR_0;
            --VAR_2;
        }
    }


    if (VAR_2 > 4)
    {
        if (VAR_0[0] == FUNC_0('\\') && VAR_0[1] == FUNC_0('?') &&
            VAR_0[2] == FUNC_0('?') && VAR_0[3] == FUNC_0('\\'))
        {
            VAR_0 += 4;
            VAR_2 -= 4;
        }
    }


    *VAR_1 = VAR_2;
    return VAR_0;
}
