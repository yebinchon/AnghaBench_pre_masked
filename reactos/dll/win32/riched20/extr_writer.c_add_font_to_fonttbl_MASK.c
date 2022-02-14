
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_10__ {int dwMask; scalar_t__ bCharSet; int * szFaceName; } ;
struct TYPE_9__ {scalar_t__ bCharSet; int * szFaceName; } ;
struct TYPE_8__ {int nFontTblLen; TYPE_3__* fonttbl; } ;
struct TYPE_7__ {TYPE_4__ fmt; } ;
typedef TYPE_1__ ME_Style ;
typedef TYPE_2__ ME_OutStream ;
typedef TYPE_3__ ME_FontTableItem ;
typedef TYPE_4__ CHARFORMAT2W ;
typedef scalar_t__ BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1( ME_OutStream *VAR_4, ME_Style *VAR_5 )
{
    ME_FontTableItem *VAR_6 = VAR_4->fonttbl;
    CHARFORMAT2W *VAR_7 = &VAR_5->fmt;
    WCHAR *VAR_8 = VAR_7->szFaceName;
    BYTE VAR_9 = (VAR_7->dwMask & VAR_0) ? VAR_7->bCharSet : VAR_2;
    int VAR_10;

    if (VAR_7->dwMask & VAR_1)
    {
        for (VAR_10 = 0; VAR_10 < VAR_4->nFontTblLen; VAR_10++)
            if (VAR_6[VAR_10].bCharSet == VAR_9
                && (VAR_6[VAR_10].szFaceName == VAR_8 || !FUNC_0(VAR_6[VAR_10].szFaceName, VAR_8)))
                break;

        if (VAR_10 == VAR_4->nFontTblLen && VAR_10 < VAR_3)
        {
            VAR_6[VAR_10].bCharSet = VAR_9;
            VAR_6[VAR_10].szFaceName = VAR_8;
            VAR_4->nFontTblLen++;
        }
    }
}
