
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_26__ {int fLogicalOrder; int fRTL; } ;
struct TYPE_25__ {int hDC; TYPE_2__* editor; } ;
struct TYPE_24__ {int len; int nFlags; int nWidth; int style; TYPE_8__ script_analysis; int advances; int vis_attrs; int clusters; int num_glyphs; TYPE_1__* para; } ;
struct TYPE_23__ {int * szData; } ;
struct TYPE_22__ {int cx; } ;
struct TYPE_21__ {scalar_t__ cPasswordMask; } ;
struct TYPE_20__ {int nFlags; } ;
typedef TYPE_3__ SIZE ;
typedef TYPE_4__ ME_String ;
typedef TYPE_5__ ME_Run ;
typedef TYPE_6__ ME_Context ;
typedef int HGDIOBJ ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int *,int,int,int*,int *,TYPE_3__*) ;
 int FUNC_1 (int ,int *,int,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,TYPE_3__*) ;
 TYPE_4__* FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ,int ) ;
 int FUNC_7 (int,int,int ,int ,int ,int ,TYPE_8__*,int*,int*) ;
 int FUNC_8 (char*,int,int,int,int,int ,int ) ;
 int * FUNC_9 (TYPE_5__*,int ) ;

int FUNC_10(ME_Context *VAR_4, int VAR_5, ME_Run *VAR_6, BOOL VAR_7, BOOL VAR_8)
{
  ME_String *VAR_9 = ((void*)0);
  WCHAR *VAR_10;
  int VAR_11 = 0;
  HGDIOBJ VAR_12;
  SIZE VAR_13, VAR_14, VAR_15;
  if (!VAR_6->len || VAR_5 <= 0)
    return 0;

  if (VAR_6->nFlags & (VAR_3 | VAR_1))
  {
    if (!VAR_7 || VAR_5 < VAR_6->nWidth / 2) return 0;
    return 1;
  }

  if (VAR_6->nFlags & VAR_2)
  {
    SIZE VAR_16;
    FUNC_3(VAR_4, VAR_6, &VAR_16);
    if (!VAR_7 || VAR_5 < VAR_16.cx / 2) return 0;
    return 1;
  }

  if (VAR_6->para->nFlags & VAR_0)
  {
      int VAR_17, VAR_18;
      if (VAR_8 && VAR_6->script_analysis.fRTL) VAR_5 = VAR_6->nWidth - VAR_5 - 1;

      FUNC_7( VAR_5, VAR_6->len, VAR_6->num_glyphs, VAR_6->clusters, VAR_6->vis_attrs, VAR_6->advances, &VAR_6->script_analysis,
                   &VAR_17, &VAR_18 );
      FUNC_8("x %d cp %d trailing %d (run width %d) rtl %d log order %d\n", VAR_5, VAR_17, VAR_18, VAR_6->nWidth,
            VAR_6->script_analysis.fRTL, VAR_6->script_analysis.fLogicalOrder);
      return VAR_7 ? VAR_17 + VAR_18 : VAR_17;
  }

  if (VAR_4->editor->cPasswordMask)
  {
    VAR_9 = FUNC_4( VAR_4->editor->cPasswordMask, VAR_6->len );
    VAR_10 = VAR_9->szData;
  }
  else
    VAR_10 = FUNC_9( VAR_6, 0 );

  VAR_12 = FUNC_5(VAR_4, VAR_6->style);
  FUNC_0(VAR_4->hDC, VAR_10, VAR_6->len,
                        VAR_5, &VAR_11, ((void*)0), &VAR_13);
  if (VAR_7 && VAR_11 != VAR_6->len)
  {
    FUNC_1(VAR_4->hDC, VAR_10, VAR_11, &VAR_14);
    FUNC_1(VAR_4->hDC, VAR_10, VAR_11 + 1, &VAR_15);
    if (VAR_5 >= (VAR_14+VAR_15)/2)
      VAR_11 = VAR_11 + 1;
  }

  FUNC_2( VAR_9 );

  FUNC_6(VAR_4, VAR_6->style, VAR_12);
  return VAR_11;
}
