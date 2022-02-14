
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static
WORD FUNC_3(LPTSTR VAR_0)
{
    WORD VAR_1= (WORD)-1;
    TCHAR VAR_2;

    VAR_2 = VAR_0[1];

    if (FUNC_1(VAR_2))
        VAR_1 = VAR_2-FUNC_0('0');
    else
    {
        VAR_2=FUNC_2(VAR_2);

        if ( VAR_2 >= FUNC_0('A') && VAR_2 <= FUNC_0('F') )
            VAR_1 = VAR_2-FUNC_0('A')+10;
        else
            return (WORD)-1;
    }

    VAR_2 = VAR_0[0];

    if (FUNC_1(VAR_2))
        VAR_1 |= (VAR_2-FUNC_0('0')) << 4;
    else
    {
        VAR_2=FUNC_2(VAR_2);

        if ( VAR_2 >= FUNC_0('A') && VAR_2 <= FUNC_0('F') )
            VAR_1 |= (VAR_2-FUNC_0('A')+10) <<4;
        else
            return (WORD)-1;
    }

    return VAR_1;
}
