
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_16__ {int cbSize; int dwMask; scalar_t__ yHeight; scalar_t__ bPitchAndFamily; scalar_t__ bUnderlineType; int dwEffects; scalar_t__ crTextColor; int szFaceName; } ;
struct TYPE_15__ {scalar_t__ nOffset; TYPE_1__* pRun; } ;
struct TYPE_14__ {scalar_t__ type; } ;
typedef int ME_TextEditor ;
typedef TYPE_1__ ME_DisplayItem ;
typedef TYPE_2__ ME_Cursor ;
typedef int DWORD ;
typedef TYPE_3__ CHARFORMAT2W ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_5 (int ,int ) ;

void FUNC_6(ME_TextEditor *VAR_14, const ME_Cursor *VAR_15,
                      const ME_Cursor *VAR_16, CHARFORMAT2W *VAR_17)
{
  ME_DisplayItem *VAR_18, *VAR_19;
  CHARFORMAT2W VAR_20;

  VAR_18 = VAR_15->pRun;

  if (VAR_15->pRun == VAR_16->pRun && VAR_15->nOffset == VAR_16->nOffset)
  {
    if (!VAR_15->nOffset)
    {
      ME_DisplayItem *VAR_21 = FUNC_0(VAR_18, VAR_13);
      if (VAR_21->type == VAR_12) {
        FUNC_2(VAR_14, VAR_21, VAR_17);
        return;
      }
    }
    FUNC_2(VAR_14, VAR_18, VAR_17);
    return;
  }

  VAR_19 = VAR_16->pRun;
  if (!VAR_16->nOffset)
    VAR_19 = FUNC_0(VAR_19, VAR_12);

  FUNC_2(VAR_14, VAR_18, VAR_17);

  if (VAR_18 == VAR_19) return;

  do {

    DWORD VAR_22 = VAR_7 | VAR_3 | VAR_2 | VAR_11;
    DWORD VAR_23 = VAR_1 | VAR_4 | VAR_10 | VAR_8 | VAR_6 | VAR_5 | VAR_9;

    VAR_18 = FUNC_1(VAR_18, VAR_12);

    FUNC_3(&VAR_20, sizeof(VAR_20));
    VAR_20.cbSize = sizeof(VAR_20);
    FUNC_2(VAR_14, VAR_18, &VAR_20);

    FUNC_4((VAR_20.dwMask & VAR_22) == VAR_22);


    if (VAR_17->yHeight != VAR_20.yHeight)
      VAR_17->dwMask &= ~VAR_7;
    if (VAR_17->dwMask & VAR_3)
    {
      if (!(VAR_20.dwMask & VAR_3))
        VAR_17->dwMask &= ~VAR_3;
      else if (FUNC_5(VAR_17->szFaceName, VAR_20.szFaceName) ||
          VAR_17->bPitchAndFamily != VAR_20.bPitchAndFamily)
        VAR_17->dwMask &= ~VAR_3;
    }
    if (VAR_17->yHeight != VAR_20.yHeight)
      VAR_17->dwMask &= ~VAR_7;
    if (VAR_17->bUnderlineType != VAR_20.bUnderlineType)
      VAR_17->dwMask &= ~VAR_11;
    if (VAR_17->dwMask & VAR_2)
    {
      if (!((VAR_17->dwEffects&VAR_0) & (VAR_20.dwEffects&VAR_0)))
      {
        if (VAR_17->crTextColor != VAR_20.crTextColor)
          VAR_17->dwMask &= ~VAR_2;
      }
    }

    VAR_17->dwMask &= ~((VAR_17->dwEffects ^ VAR_20.dwEffects) & VAR_23);
    VAR_17->dwEffects = VAR_20.dwEffects;

  } while(VAR_18 != VAR_19);
}
