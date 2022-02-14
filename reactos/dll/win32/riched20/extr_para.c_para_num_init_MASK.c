
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int cf ;
typedef int bullet_font ;
typedef char WCHAR ;
struct TYPE_25__ {int cbSize; int dwMask; int bCharSet; int szFaceName; } ;
struct TYPE_24__ {int hDC; int editor; } ;
struct TYPE_21__ {int * style; scalar_t__ width; TYPE_10__* text; } ;
struct TYPE_20__ {scalar_t__ wNumbering; } ;
struct TYPE_23__ {TYPE_3__ para_num; TYPE_2__ fmt; TYPE_1__* eop_run; } ;
struct TYPE_22__ {scalar_t__ cx; } ;
struct TYPE_19__ {int * style; } ;
struct TYPE_18__ {char const* szData; int nLen; } ;
typedef TYPE_4__ SIZE ;
typedef int ME_Style ;
typedef TYPE_5__ ME_Paragraph ;
typedef TYPE_6__ ME_Context ;
typedef int HFONT ;
typedef TYPE_7__ CHARFORMAT2W ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int,TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *,TYPE_7__*) ;
 TYPE_10__* FUNC_3 (char const*,int) ;
 int FUNC_4 (TYPE_6__*,int *) ;
 int FUNC_5 (TYPE_6__*,int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (TYPE_5__*) ;
 TYPE_10__* FUNC_8 (TYPE_5__*,int ) ;

void FUNC_9( ME_Context *VAR_4, ME_Paragraph *VAR_5 )
{
    ME_Style *VAR_6;
    CHARFORMAT2W VAR_7;
    static const WCHAR VAR_8[] = {'S','y','m','b','o','l',0};
    static const WCHAR VAR_9[] = {0xb7, 0};
    static const WCHAR VAR_10[] = {' ', 0};
    HFONT VAR_11;
    SIZE VAR_12;

    if (VAR_5->para_num.style && VAR_5->para_num.text) return;

    if (!VAR_5->para_num.style)
    {
        VAR_6 = VAR_5->eop_run->style;

        if (VAR_5->fmt.wNumbering == VAR_2)
        {
            VAR_7.cbSize = sizeof(VAR_7);
            VAR_7.dwMask = VAR_1 | VAR_0;
            FUNC_6( VAR_7.szFaceName, VAR_8, sizeof(VAR_8) );
            VAR_7.bCharSet = VAR_3;
            VAR_6 = FUNC_2( VAR_4->editor, VAR_6, &VAR_7 );
        }
        else
        {
            FUNC_1( VAR_6 );
        }

        VAR_5->para_num.style = VAR_6;
    }

    if (!VAR_5->para_num.text)
    {
        if (VAR_5->fmt.wNumbering != VAR_2)
            VAR_5->para_num.text = FUNC_8( VAR_5, FUNC_7( VAR_5 ) );
        else
            VAR_5->para_num.text = FUNC_3( VAR_9, 1 );
    }

    VAR_11 = FUNC_4( VAR_4, VAR_5->para_num.style );
    FUNC_0( VAR_4->hDC, VAR_5->para_num.text->szData, VAR_5->para_num.text->nLen, &VAR_12 );
    VAR_5->para_num.width = VAR_12.cx;
    FUNC_0( VAR_4->hDC, VAR_10, 1, &VAR_12 );
    VAR_5->para_num.width += VAR_12.cx;
    FUNC_5( VAR_4, VAR_5->para_num.style, VAR_11 );
}
