
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int lfHeight; int lfItalic; int lfUnderline; int lfStrikeOut; int lfCharSet; int lfPitchAndFamily; int lfWeight; int lfFaceName; } ;
struct TYPE_7__ {int dwEffects; int dwMask; scalar_t__ bUnderlineType; int bCharSet; int bPitchAndFamily; int wWeight; int yHeight; int szFaceName; } ;
struct TYPE_8__ {TYPE_1__ fmt; } ;
typedef TYPE_2__ ME_Style ;
typedef int ME_Context ;
typedef TYPE_3__ LOGFONTW ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(ME_Context* VAR_13, LOGFONTW *VAR_14, const ME_Style *VAR_15)
{
  FUNC_1(VAR_14, sizeof(LOGFONTW));
  FUNC_2(VAR_14->lfFaceName, VAR_15->fmt.szFaceName);

  VAR_14->lfHeight = FUNC_0(VAR_13, -VAR_15->fmt.yHeight);

  VAR_14->lfWeight = VAR_12;
  if (VAR_15->fmt.dwEffects & VAR_15->fmt.dwMask & VAR_1)
    VAR_14->lfWeight = VAR_11;
  if (VAR_15->fmt.dwMask & VAR_9)
    VAR_14->lfWeight = VAR_15->fmt.wWeight;
  if (VAR_15->fmt.dwEffects & VAR_15->fmt.dwMask & VAR_4)
    VAR_14->lfItalic = 1;
  if ((VAR_15->fmt.dwEffects & VAR_15->fmt.dwMask & VAR_8) &&
      !(VAR_15->fmt.dwEffects & VAR_0) &&
      VAR_15->fmt.bUnderlineType == VAR_10)
    VAR_14->lfUnderline = 1;
  if (VAR_15->fmt.dwEffects & VAR_15->fmt.dwMask & VAR_5)
    VAR_14->lfStrikeOut = 1;
  if (VAR_15->fmt.dwEffects & VAR_15->fmt.dwMask & (VAR_6|VAR_7))
    VAR_14->lfHeight = (VAR_14->lfHeight*2)/3;

  if (VAR_15->fmt.dwMask & VAR_3)
    VAR_14->lfPitchAndFamily = VAR_15->fmt.bPitchAndFamily;
  if (VAR_15->fmt.dwMask & VAR_2)
    VAR_14->lfCharSet = VAR_15->fmt.bCharSet;
}
