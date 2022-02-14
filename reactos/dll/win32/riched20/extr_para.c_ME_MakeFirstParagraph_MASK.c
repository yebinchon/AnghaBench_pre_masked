
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_28__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_15__ ;
typedef struct TYPE_38__ TYPE_14__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef int cf ;
typedef char WCHAR ;
struct TYPE_48__ {int nCharOfs; TYPE_12__* prev_para; } ;
struct TYPE_49__ {TYPE_8__ para; } ;
struct TYPE_45__ {TYPE_12__* next_para; } ;
struct TYPE_46__ {TYPE_5__ para; } ;
struct TYPE_47__ {TYPE_6__ member; } ;
struct TYPE_43__ {TYPE_28__* next_para; TYPE_7__* prev_para; TYPE_2__* eop_run; int text; } ;
struct TYPE_42__ {int len; TYPE_3__* para; scalar_t__ nCharOfs; } ;
struct TYPE_44__ {TYPE_3__ para; TYPE_2__ run; } ;
struct TYPE_41__ {TYPE_9__ member; } ;
struct TYPE_40__ {int cy; } ;
struct TYPE_39__ {int cbSize; int dwMask; int dwEffects; int yHeight; scalar_t__ wWeight; int lcid; int bCharSet; int bPitchAndFamily; int bUnderlineType; int szFaceName; } ;
struct TYPE_38__ {int lfHeight; scalar_t__ lfWeight; int lfCharSet; int lfPitchAndFamily; scalar_t__ lfStrikeOut; scalar_t__ lfUnderline; scalar_t__ lfItalic; int lfFaceName; } ;
struct TYPE_37__ {TYPE_1__ dpi; } ;
struct TYPE_36__ {TYPE_4__ member; } ;
struct TYPE_35__ {TYPE_28__* pLast; TYPE_7__* pFirst; int * pDefaultStyle; } ;
struct TYPE_34__ {scalar_t__ bEmulateVersion10; int texthost; TYPE_11__* pBuffer; } ;
typedef TYPE_10__ ME_TextEditor ;
typedef TYPE_11__ ME_TextBuffer ;
typedef int ME_Style ;
typedef TYPE_12__ ME_DisplayItem ;
typedef TYPE_13__ ME_Context ;
typedef TYPE_14__ LOGFONTW ;
typedef int HFONT ;
typedef int CHARFORMATW ;
typedef TYPE_15__ CHARFORMAT2W ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_0 (int ,int,TYPE_14__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int const**) ;
 int FUNC_4 (int ) ;
 int VAR_38 ;
 int FUNC_5 (TYPE_13__*) ;
 int FUNC_6 (TYPE_13__*,TYPE_10__*,int ) ;
 int FUNC_7 (TYPE_28__*,TYPE_12__*) ;
 TYPE_12__* FUNC_8 (int *,int ) ;
 int FUNC_9 (char const*,int) ;
 int * FUNC_10 (TYPE_15__*) ;
 int FUNC_11 (TYPE_10__*,TYPE_15__*) ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 int FUNC_12 (TYPE_15__*,int) ;
 int FUNC_13 (TYPE_10__*,TYPE_12__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_15__*,TYPE_15__*) ;
 int FUNC_16 (int ,int ) ;
 TYPE_12__* FUNC_17 (TYPE_10__*) ;

void FUNC_18(ME_TextEditor *VAR_41)
{
  static const WCHAR VAR_42[] = {'\r','\n',0};
  ME_Context VAR_43;
  CHARFORMAT2W VAR_44;
  const CHARFORMATW *VAR_45;
  LOGFONTW VAR_46;
  HFONT VAR_47;
  ME_TextBuffer *VAR_48 = VAR_41->pBuffer;
  ME_DisplayItem *VAR_49 = FUNC_17(VAR_41);
  ME_DisplayItem *VAR_50;
  ME_Style *VAR_51;
  int VAR_52;

  FUNC_6(&VAR_43, VAR_41, FUNC_4(VAR_41->texthost));

  VAR_47 = FUNC_1(VAR_39);
  FUNC_14(VAR_47);
  FUNC_0(VAR_47, sizeof(LOGFONTW), &VAR_46);
  FUNC_12(&VAR_44, sizeof(VAR_44));
  VAR_44.cbSize = sizeof(VAR_44);
  VAR_44.dwMask = VAR_7|VAR_8|VAR_10|VAR_11|VAR_14|VAR_18|VAR_19|VAR_21;
  VAR_44.dwMask |= VAR_24|VAR_27|VAR_29|VAR_31|VAR_34|VAR_35;
  VAR_44.dwMask |= VAR_6|VAR_9|VAR_12|VAR_13|VAR_15;
  VAR_44.dwMask |= VAR_16|VAR_17|VAR_20|VAR_22|VAR_23;
  VAR_44.dwMask |= VAR_25|VAR_26|VAR_28|VAR_30;
  VAR_44.dwMask |= VAR_32|VAR_33;

  VAR_44.dwEffects = VAR_1 | VAR_0;
  FUNC_16(VAR_44.szFaceName, VAR_46.lfFaceName);

  VAR_44.yHeight = (VAR_46.lfHeight * 72 * 1440) / (VAR_43.dpi.cy * VAR_43.dpi.cy);
  if (VAR_46.lfWeight > VAR_37) VAR_44.dwEffects |= VAR_2;
  VAR_44.wWeight = VAR_46.lfWeight;
  if (VAR_46.lfItalic) VAR_44.dwEffects |= VAR_3;
  if (VAR_46.lfUnderline) VAR_44.dwEffects |= VAR_5;
  VAR_44.bUnderlineType = VAR_36;
  if (VAR_46.lfStrikeOut) VAR_44.dwEffects |= VAR_4;
  VAR_44.bPitchAndFamily = VAR_46.lfPitchAndFamily;
  VAR_44.bCharSet = VAR_46.lfCharSet;
  VAR_44.lcid = FUNC_2();

  VAR_51 = FUNC_10(&VAR_44);
  VAR_48->pDefaultStyle = VAR_51;

  if (FUNC_3(VAR_41->texthost, &VAR_45) == VAR_40)
  {
    FUNC_12(&VAR_44, sizeof(VAR_44));
    VAR_44.cbSize = sizeof(VAR_44);
    FUNC_15(&VAR_44, (CHARFORMAT2W *)VAR_45);
    FUNC_11(VAR_41, &VAR_44);
  }

  VAR_52 = VAR_41->bEmulateVersion10 ? 2 : 1;
  VAR_49->member.para.text = FUNC_9( VAR_42, VAR_52 );

  VAR_50 = FUNC_8(VAR_51, VAR_38);
  VAR_50->member.run.nCharOfs = 0;
  VAR_50->member.run.len = VAR_52;
  VAR_50->member.run.para = &VAR_49->member.para;

  VAR_49->member.para.eop_run = &VAR_50->member.run;

  FUNC_7(VAR_48->pLast, VAR_49);
  FUNC_7(VAR_48->pLast, VAR_50);
  VAR_49->member.para.prev_para = VAR_48->pFirst;
  VAR_49->member.para.next_para = VAR_48->pLast;
  VAR_48->pFirst->member.para.next_para = VAR_49;
  VAR_48->pLast->member.para.prev_para = VAR_49;

  VAR_48->pLast->member.para.nCharOfs = VAR_41->bEmulateVersion10 ? 2 : 1;

  FUNC_13(VAR_41, VAR_49);
  FUNC_5(&VAR_43);
}
