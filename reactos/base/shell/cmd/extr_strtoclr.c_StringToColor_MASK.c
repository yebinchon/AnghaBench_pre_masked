
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef scalar_t__* LPWORD ;
typedef int LPTSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

BOOL FUNC_3(LPWORD VAR_2, LPTSTR*VAR_3)
{
    WORD VAR_4;

    VAR_4 = FUNC_2 (VAR_3);
    if (VAR_4 == (WORD)-1)
    {
        VAR_4=FUNC_1 (*VAR_3);
        FUNC_0 (VAR_3);
        if (VAR_4 == (WORD)-1)
            return VAR_0;
    }

    *VAR_2 = VAR_4;

    return VAR_1;
}
