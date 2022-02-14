
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nColorTblLen; scalar_t__* colortbl; int nFontTblLen; } ;
typedef TYPE_1__ ME_OutStream ;
typedef scalar_t__ COLORREF ;
typedef int BOOL ;



__attribute__((used)) static BOOL FUNC_0( ME_OutStream *VAR_0, COLORREF VAR_1, unsigned int *VAR_2 )
{
    int VAR_3;

    *VAR_2 = 0;
    for (VAR_3 = 1; VAR_3 < VAR_0->nColorTblLen; VAR_3++)
    {
        if (VAR_0->colortbl[VAR_3] == VAR_1)
        {
            *VAR_2 = VAR_3;
            break;
        }
    }

    return VAR_3 < VAR_0->nFontTblLen;
}
