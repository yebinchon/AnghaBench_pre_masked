
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
struct TYPE_24__ {scalar_t__ fRTL; } ;
struct TYPE_23__ {TYPE_2__* editor; } ;
struct TYPE_22__ {int nFlags; int nWidth; int style; int len; TYPE_8__ script_analysis; int advances; int vis_attrs; int clusters; int num_glyphs; TYPE_1__* para; } ;
struct TYPE_21__ {int * szData; } ;
struct TYPE_20__ {int cx; } ;
struct TYPE_19__ {scalar_t__ cPasswordMask; } ;
struct TYPE_18__ {int nFlags; } ;
typedef TYPE_3__ SIZE ;
typedef TYPE_4__ ME_String ;
typedef TYPE_5__ ME_Run ;
typedef TYPE_6__ ME_Context ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_6__*,int *,int,int ,TYPE_3__*) ;
 TYPE_4__* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int,int ,int ,int ,int ,int ,int ,TYPE_8__*,int*) ;
 int * FUNC_5 (TYPE_5__*,int ) ;

int FUNC_6(ME_Context *VAR_4, ME_Run *VAR_5, int VAR_6, BOOL VAR_7)
{
  SIZE VAR_8;
  ME_String *VAR_9 = ((void*)0);
  WCHAR *VAR_10;

  if (VAR_5->nFlags & VAR_3)
  {
    if (VAR_6)
      FUNC_1(VAR_4, VAR_5, &VAR_8);
    return VAR_6 != 0;
  } else if (VAR_5->nFlags & VAR_2) {
    VAR_6 = 0;
  }

  if (VAR_5->para->nFlags & VAR_1)
  {
      int VAR_11;
      FUNC_4( VAR_6, VAR_0, VAR_5->len, VAR_5->num_glyphs, VAR_5->clusters,
                   VAR_5->vis_attrs, VAR_5->advances, &VAR_5->script_analysis, &VAR_11 );
      if (VAR_7 && VAR_5->script_analysis.fRTL) VAR_11 = VAR_5->nWidth - VAR_11 - 1;
      return VAR_11;
  }
  if (VAR_4->editor->cPasswordMask)
  {
    VAR_9 = FUNC_3(VAR_4->editor->cPasswordMask, VAR_5->len);
    VAR_10 = VAR_9->szData;
  }
  else
      VAR_10 = FUNC_5( VAR_5, 0 );

  FUNC_2(VAR_4, VAR_10, VAR_6, VAR_5->style, &VAR_8);
  FUNC_0( VAR_9 );
  return VAR_8.cx;
}
