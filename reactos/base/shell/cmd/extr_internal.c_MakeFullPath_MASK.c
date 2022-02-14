
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef size_t INT_PTR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__* FUNC_3 (scalar_t__*,scalar_t__) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,size_t) ;

BOOL
FUNC_6(TCHAR * VAR_5)
{
    TCHAR VAR_6[VAR_3];
    TCHAR *VAR_7 = VAR_5;
    INT_PTR VAR_8;

    if (FUNC_0(VAR_5, ((void*)0)))
        return VAR_4;
    else if (FUNC_1() != VAR_1)
        return VAR_2;


    if (VAR_7[0] && VAR_7[1] == FUNC_2(':'))
        VAR_7 += 2;
    while (*VAR_7 == FUNC_2('\\'))
        VAR_7++;
    do
    {
        VAR_7 = FUNC_3(VAR_7, FUNC_2('\\'));
        VAR_8 = VAR_7 ? VAR_7++ - VAR_5 : FUNC_4(VAR_5);
        FUNC_5(VAR_6, VAR_5, VAR_8);
        VAR_6[VAR_8] = FUNC_2('\0');
        if ( !FUNC_0(VAR_6, ((void*)0)) &&
            (FUNC_1() != VAR_0))
        {
            return VAR_2;
        }
    } while (VAR_7 != ((void*)0));

    return VAR_4;
}
