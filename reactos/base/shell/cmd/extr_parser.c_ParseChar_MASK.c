
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static TCHAR FUNC_2(void)
{
    TCHAR VAR_6;

    if (VAR_5)
        return (VAR_0 = 0);

restart:





    do
    {
        VAR_6 = *VAR_2++;
    }
    while (VAR_6 == FUNC_1('\r'));

    if (!VAR_6)
    {
        VAR_2--;
        if (VAR_4)
        {
            if (!FUNC_0(VAR_1, VAR_3))
            {

                VAR_5 = VAR_3;
            }
            else if (*(VAR_2 = VAR_1))
            {
                goto restart;
            }
        }
    }
    return (VAR_0 = VAR_6);
}
