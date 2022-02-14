
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int dwMask; scalar_t__ bCharSet; int * szFaceName; } ;
struct TYPE_7__ {int nFontTblLen; TYPE_1__* fonttbl; } ;
struct TYPE_6__ {scalar_t__ bCharSet; int * szFaceName; } ;
typedef TYPE_2__ ME_OutStream ;
typedef TYPE_3__ CHARFORMAT2W ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_1( ME_OutStream *VAR_2, CHARFORMAT2W *VAR_3, unsigned int *VAR_4 )
{
    WCHAR *VAR_5;
    int VAR_6;

    *VAR_4 = 0;
    if (VAR_3->dwMask & VAR_1)
        VAR_5 = VAR_3->szFaceName;
    else
        VAR_5 = VAR_2->fonttbl[0].szFaceName;
    for (VAR_6 = 0; VAR_6 < VAR_2->nFontTblLen; VAR_6++)
    {
        if (VAR_5 == VAR_2->fonttbl[VAR_6].szFaceName
            || !FUNC_0(VAR_5, VAR_2->fonttbl[VAR_6].szFaceName))
            if (!(VAR_3->dwMask & VAR_0)
                || VAR_3->bCharSet == VAR_2->fonttbl[VAR_6].bCharSet)
            {
                *VAR_4 = VAR_6;
                break;
            }
    }

    return VAR_6 < VAR_2->nFontTblLen;
}
