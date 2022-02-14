
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nColorTblLen; scalar_t__* colortbl; } ;
typedef TYPE_1__ ME_OutStream ;
typedef scalar_t__ COLORREF ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( ME_OutStream *VAR_1, COLORREF VAR_2 )
{
    int VAR_3;

    for (VAR_3 = 1; VAR_3 < VAR_1->nColorTblLen; VAR_3++)
        if (VAR_1->colortbl[VAR_3] == VAR_2)
            break;

    if (VAR_3 == VAR_1->nColorTblLen && VAR_3 < VAR_0)
    {
        VAR_1->colortbl[VAR_3] = VAR_2;
        VAR_1->nColorTblLen++;
    }
}
