
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_3__ {int dwAxes; int dwButtons; } ;
typedef TYPE_1__ DIDEVCAPS ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

BOOL FUNC_1(const DIDEVCAPS *VAR_3, WORD VAR_4, WORD VAR_5)
{
    int VAR_6;

    if (VAR_4 == VAR_2)
    {
        for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++)
            if (VAR_5 == VAR_0[VAR_6]) return VAR_1;
    }

    return (VAR_3->dwAxes == 6 && VAR_3->dwButtons >= 14);
}
