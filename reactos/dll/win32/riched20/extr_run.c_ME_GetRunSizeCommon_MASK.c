
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;


typedef char WCHAR ;
struct TYPE_33__ {TYPE_2__* editor; } ;
struct TYPE_29__ {int dwMask; int wEffects; int dxOffset; int cTabCount; int* rgxTabs; } ;
struct TYPE_32__ {int nFlags; TYPE_5__ fmt; } ;
struct TYPE_27__ {int x; } ;
struct TYPE_31__ {int len; int nFlags; int nWidth; TYPE_3__ pt; TYPE_14__* style; } ;
struct TYPE_30__ {char const* szData; } ;
struct TYPE_28__ {int cx; int cy; } ;
struct TYPE_26__ {scalar_t__ bEmulateVersion10; scalar_t__ cPasswordMask; } ;
struct TYPE_25__ {int tmAscent; int tmDescent; } ;
struct TYPE_24__ {TYPE_1__ tm; } ;
typedef TYPE_4__ SIZE ;
typedef TYPE_5__ PARAFORMAT2 ;
typedef TYPE_6__ ME_String ;
typedef TYPE_7__ ME_Run ;
typedef TYPE_8__ ME_Paragraph ;
typedef TYPE_9__ ME_Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_9__*,TYPE_7__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_9__*,char const*,int,TYPE_14__*,TYPE_4__*) ;
 TYPE_6__* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (TYPE_9__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 char const* FUNC_5 (TYPE_7__*,int ) ;
 int VAR_6 ;
 int FUNC_6 (int,int) ;

SIZE FUNC_7(ME_Context *VAR_7, const ME_Paragraph *VAR_8, ME_Run *VAR_9, int VAR_10,
                         int VAR_11, int *VAR_12, int *VAR_13)
{
  static const WCHAR VAR_14[] = {' ',0};
  SIZE VAR_15;

  VAR_10 = FUNC_6( VAR_10, VAR_9->len );

  if (VAR_9->nFlags & VAR_1)
  {
      VAR_10 = FUNC_6( VAR_10, 1 );
      FUNC_2(VAR_7, VAR_14, VAR_10, VAR_9->style, &VAR_15);
  }
  else if (VAR_8->nFlags & VAR_0)
  {
      VAR_15.cx = VAR_9->nWidth;
  }
  else if (VAR_7->editor->cPasswordMask)
  {
    ME_String *VAR_16 = FUNC_3(VAR_7->editor->cPasswordMask,VAR_10);
    FUNC_2(VAR_7, VAR_16->szData, VAR_10,VAR_9->style, &VAR_15);
    FUNC_0(VAR_16);
  }
  else
  {
    FUNC_2(VAR_7, FUNC_5( VAR_9, 0 ), VAR_10, VAR_9->style, &VAR_15);
  }
  *VAR_12 = VAR_9->style->tm.tmAscent;
  *VAR_13 = VAR_9->style->tm.tmDescent;
  VAR_15.cy = *VAR_12 + *VAR_13;

  if (VAR_9->nFlags & VAR_3)
  {
    int VAR_17 = 0, VAR_18 = 0, VAR_19, VAR_20 = 0;
    const PARAFORMAT2 *VAR_21 = &VAR_8->fmt;

    if (VAR_7->editor->bEmulateVersion10 &&
        VAR_21->dwMask & VAR_5 && VAR_21->wEffects & VAR_4)

      VAR_20 = VAR_21->dxOffset * 2;
    do {
      if (VAR_18 < VAR_21->cTabCount)
      {


        if (VAR_18 == VAR_21->cTabCount -1)
          VAR_20 = VAR_20 >> 1;
        VAR_17 = VAR_20 + (VAR_21->rgxTabs[VAR_18]&0x00FFFFFF);
        VAR_18++;
      }
      else
      {
        VAR_17 += VAR_6 - (VAR_17 % VAR_6);
      }
      VAR_19 = FUNC_4(VAR_7, VAR_17);
      if (VAR_19 > VAR_11 + VAR_9->pt.x) {
        VAR_15.cx = VAR_19 - VAR_11 - VAR_9->pt.x;
        break;
      }
    } while(1);
    VAR_15.cy = *VAR_12 + *VAR_13;
    return VAR_15;
  }
  if (VAR_9->nFlags & VAR_2)
  {
    FUNC_1(VAR_7, VAR_9, &VAR_15);
    if (VAR_15.cy > *VAR_12)
      *VAR_12 = VAR_15.cy;

    return VAR_15;
  }
  return VAR_15;
}
