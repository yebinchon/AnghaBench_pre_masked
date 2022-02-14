
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* shiftlevel; scalar_t__* params; } ;
typedef int TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 TYPE_1__* VAR_0 ;

LPTSTR FUNC_3(TCHAR VAR_1, BOOL *VAR_2)
{
    LPTSTR VAR_3;
    INT VAR_4 = VAR_1 - FUNC_1('0');

    FUNC_0 ("FindArg: (%d)\n", VAR_4);

    if (VAR_4 < 0 || VAR_4 > 9)
        return ((void*)0);

    VAR_4 = VAR_0->shiftlevel[VAR_4];
    *VAR_2 = (VAR_4 == 0);
    VAR_3 = VAR_0->params;



    while (*VAR_3 && VAR_4--)
        VAR_3 += FUNC_2 (VAR_3) + 1;

    return VAR_3;
}
