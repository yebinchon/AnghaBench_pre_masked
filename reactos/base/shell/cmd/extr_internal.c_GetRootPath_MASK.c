
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef int INT ;


 int FUNC_0 (int,scalar_t__*) ;
 scalar_t__ FUNC_1 (char) ;
 int * FUNC_2 (int,scalar_t__*,int) ;

INT FUNC_3(TCHAR *VAR_0,TCHAR *VAR_1,INT VAR_2)
{
    if (VAR_0[0] && VAR_0[1] == FUNC_1(':'))
    {
        INT VAR_3=0;

        if ((VAR_0[0] >= FUNC_1('0')) && (VAR_0[0] <= FUNC_1('9')))
        {
            VAR_3 = (VAR_0[0] - FUNC_1('0')) +28;
        }

        if ((VAR_0[0] >= FUNC_1('a')) && (VAR_0[0] <= FUNC_1('z')))
        {
            VAR_3 = (VAR_0[0] - FUNC_1('a')) +1;
            VAR_0[0] = VAR_3 + FUNC_1('A') - 1;
        }

        if ((VAR_0[0] >= FUNC_1('A')) && (VAR_0[0] <= FUNC_1('Z')))
        {
            VAR_3 = (VAR_0[0] - FUNC_1('A')) +1;
        }

        return FUNC_2(VAR_3,VAR_1,VAR_2) == ((void*)0);
    }


    return !FUNC_0(VAR_2,VAR_1);
}
