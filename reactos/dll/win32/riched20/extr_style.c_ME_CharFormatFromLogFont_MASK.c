
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dwEffects; int dwMask; scalar_t__ wWeight; int yHeight; int bCharSet; int bPitchAndFamily; int bUnderlineType; int szFaceName; } ;
struct TYPE_6__ {scalar_t__ lfWeight; int lfHeight; int lfCharSet; int lfPitchAndFamily; scalar_t__ lfStrikeOut; scalar_t__ lfUnderline; scalar_t__ lfItalic; int lfFaceName; } ;
typedef TYPE_1__ LOGFONTW ;
typedef int HDC ;
typedef TYPE_2__ CHARFORMAT2W ;


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
 int FUNC_0 (int ,int ) ;
 int VAR_11 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(HDC VAR_12, const LOGFONTW *VAR_13, CHARFORMAT2W *VAR_14)
{
  int VAR_15;

  FUNC_1(VAR_14);
  VAR_15 = FUNC_0(VAR_12, VAR_11);
  FUNC_2(VAR_14->szFaceName, VAR_13->lfFaceName);
  VAR_14->dwEffects = 0;
  VAR_14->dwMask = VAR_8|VAR_0|VAR_3|VAR_6|VAR_7|VAR_5|VAR_4|VAR_2|VAR_1;
  VAR_14->wWeight = VAR_13->lfWeight;
  VAR_14->yHeight = -VAR_13->lfHeight*1440/VAR_15;
  if (VAR_13->lfWeight > VAR_10) VAR_14->dwEffects |= VAR_0;
  if (VAR_13->lfItalic) VAR_14->dwEffects |= VAR_3;
  if (VAR_13->lfUnderline) VAR_14->dwEffects |= VAR_6;
  VAR_14->bUnderlineType = VAR_9;
  if (VAR_13->lfStrikeOut) VAR_14->dwEffects |= VAR_5;
  VAR_14->bPitchAndFamily = VAR_13->lfPitchAndFamily;
  VAR_14->bCharSet = VAR_13->lfCharSet;
}
