
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_18__ {int dwMask; int dwEffects; } ;
struct TYPE_24__ {int script_cache; TYPE_1__ fmt; } ;
struct TYPE_23__ {int hDC; TYPE_2__* editor; } ;
struct TYPE_22__ {int len; int offsets; int advances; int num_glyphs; int glyphs; int script_analysis; TYPE_8__* style; TYPE_3__* para; } ;
struct TYPE_21__ {int * szData; } ;
struct TYPE_20__ {int nFlags; } ;
struct TYPE_19__ {scalar_t__ cPasswordMask; } ;
typedef int RECT ;
typedef TYPE_4__ ME_String ;
typedef TYPE_5__ ME_Run ;
typedef TYPE_6__ ME_Context ;
typedef int COLORREF ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int ,int *,int const*,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int *,int,int,int ,int *,int *,int *,int ,int ,int ,int ,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_6__*,TYPE_5__*,int,int,int ) ;
 int FUNC_7 (TYPE_6__*,TYPE_8__*,int) ;
 int * FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_6__*,TYPE_8__*,int) ;

__attribute__((used)) static void FUNC_10( ME_Context *VAR_4, ME_Run *VAR_5, int VAR_6, int VAR_7, BOOL VAR_8, RECT *VAR_9 )
{
    COLORREF VAR_10 = FUNC_9( VAR_4, VAR_5->style, VAR_8 );
    COLORREF VAR_11 = FUNC_7( VAR_4, VAR_5->style, VAR_8 );
    COLORREF VAR_12, VAR_13 = 0;
    const WCHAR *VAR_14 = FUNC_8( VAR_5, 0 );
    ME_String *VAR_15 = ((void*)0);
    const BOOL VAR_16 = ( VAR_8
        || ( ( VAR_5->style->fmt.dwMask & VAR_1 )
            && !(VAR_0 & VAR_5->style->fmt.dwEffects) )
        );

    if (VAR_4->editor->cPasswordMask)
    {
        VAR_15 = FUNC_2( VAR_4->editor->cPasswordMask, VAR_5->len );
        VAR_14 = VAR_15->szData;
    }

    VAR_12 = FUNC_5( VAR_4->hDC, VAR_10 );
    if (VAR_16) VAR_13 = FUNC_4( VAR_4->hDC, VAR_11 );

    if (VAR_5->para->nFlags & VAR_3)
        FUNC_3( VAR_4->hDC, &VAR_5->style->script_cache, VAR_6, VAR_7, VAR_16 ? VAR_2 : 0, VAR_9,
                       &VAR_5->script_analysis, ((void*)0), 0, VAR_5->glyphs, VAR_5->num_glyphs, VAR_5->advances,
                       ((void*)0), VAR_5->offsets );
    else
        FUNC_0( VAR_4->hDC, VAR_6, VAR_7, VAR_16 ? VAR_2 : 0, VAR_9, VAR_14, VAR_5->len, ((void*)0) );

    if (VAR_16) FUNC_4( VAR_4->hDC, VAR_13 );
    FUNC_5( VAR_4->hDC, VAR_12 );

    FUNC_6( VAR_4, VAR_5, VAR_6, VAR_7, VAR_10 );

    FUNC_1( VAR_15 );
    return;
}
