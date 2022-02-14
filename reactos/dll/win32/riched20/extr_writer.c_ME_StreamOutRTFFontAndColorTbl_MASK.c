
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_37__ {unsigned int nFontTblLen; unsigned int nColorTblLen; int* colortbl; TYPE_10__* fonttbl; } ;
struct TYPE_30__ {TYPE_15__* style; } ;
struct TYPE_29__ {scalar_t__ wNumbering; } ;
struct TYPE_36__ {TYPE_2__ para_num; TYPE_1__ fmt; } ;
struct TYPE_34__ {TYPE_8__* para; TYPE_15__* style; } ;
struct TYPE_26__ {scalar_t__ width; int colorRef; } ;
struct TYPE_32__ {TYPE_12__ right; TYPE_12__ bottom; TYPE_12__ left; TYPE_12__ top; } ;
struct TYPE_33__ {TYPE_4__ border; } ;
struct TYPE_31__ {TYPE_11__* pCell; } ;
struct TYPE_35__ {TYPE_6__ run; TYPE_5__ cell; TYPE_3__ para; } ;
struct TYPE_27__ {int dwMask; int dwEffects; int crBackColor; int crTextColor; } ;
struct TYPE_28__ {TYPE_13__ fmt; } ;
struct TYPE_25__ {TYPE_7__ member; } ;
struct TYPE_24__ {scalar_t__ bCharSet; int szFaceName; } ;
typedef TYPE_8__ ME_Paragraph ;
typedef TYPE_9__ ME_OutStream ;
typedef TYPE_10__ ME_FontTableItem ;
typedef TYPE_11__ ME_DisplayItem ;
typedef TYPE_12__ ME_Border ;
typedef TYPE_13__ CHARFORMAT2W ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_11__* FUNC_0 (TYPE_11__*,int ) ;
 int FUNC_1 (TYPE_9__*,char*,...) ;
 int FUNC_2 (TYPE_9__*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_9__*,int ) ;
 int FUNC_4 (TYPE_9__*,TYPE_15__*) ;
 int VAR_7 ;

__attribute__((used)) static BOOL
FUNC_5(ME_OutStream *VAR_8, ME_DisplayItem *VAR_9,
                               ME_DisplayItem *VAR_10)
{
  ME_DisplayItem *VAR_11 = VAR_9;
  ME_FontTableItem *VAR_12 = VAR_8->fonttbl;
  unsigned int VAR_13;
  ME_DisplayItem *VAR_14 = ((void*)0);
  ME_Paragraph *VAR_15 = ((void*)0);

  do {
    CHARFORMAT2W *VAR_16 = &VAR_11->member.run.style->fmt;

    FUNC_4( VAR_8, VAR_11->member.run.style );

    if (VAR_16->dwMask & VAR_3 && !(VAR_16->dwEffects & VAR_1))
      FUNC_3( VAR_8, VAR_16->crTextColor );
    if (VAR_16->dwMask & VAR_2 && !(VAR_16->dwEffects & VAR_0))
      FUNC_3( VAR_8, VAR_16->crBackColor );

    if (VAR_11->member.run.para != VAR_15)
    {

      if (VAR_11->member.run.para->fmt.wNumbering)
        FUNC_4( VAR_8, VAR_11->member.run.para->para_num.style );

      if ((VAR_14 = VAR_11->member.para.pCell))
      {
        ME_Border* VAR_17[4] = { &VAR_14->member.cell.border.top,
                                  &VAR_14->member.cell.border.left,
                                  &VAR_14->member.cell.border.bottom,
                                  &VAR_14->member.cell.border.right };
        for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
          if (VAR_17[VAR_13]->width > 0)
            FUNC_3( VAR_8, VAR_17[VAR_13]->colorRef );
      }

      VAR_15 = VAR_11->member.run.para;
    }

    if (VAR_11 == VAR_10)
      break;
    VAR_11 = FUNC_0(VAR_11, VAR_7);
  } while (VAR_11);

  if (!FUNC_1(VAR_8, "{\\fonttbl"))
    return VAR_5;

  for (VAR_13 = 0; VAR_13 < VAR_8->nFontTblLen; VAR_13++) {
    if (VAR_12[VAR_13].bCharSet != VAR_4) {
      if (!FUNC_1(VAR_8, "{\\f%u\\fcharset%u ", VAR_13, VAR_12[VAR_13].bCharSet))
        return VAR_5;
    } else {
      if (!FUNC_1(VAR_8, "{\\f%u ", VAR_13))
        return VAR_5;
    }
    if (!FUNC_2(VAR_8, VAR_12[VAR_13].szFaceName, -1))
      return VAR_5;
    if (!FUNC_1(VAR_8, ";}"))
      return VAR_5;
  }
  if (!FUNC_1(VAR_8, "}\r\n"))
    return VAR_5;


  if (!FUNC_1(VAR_8, "{\\colortbl;")) return VAR_5;
  for (VAR_13 = 1; VAR_13 < VAR_8->nColorTblLen; VAR_13++)
  {
    if (!FUNC_1(VAR_8, "\\red%u\\green%u\\blue%u;", VAR_8->colortbl[VAR_13] & 0xFF,
                           (VAR_8->colortbl[VAR_13] >> 8) & 0xFF, (VAR_8->colortbl[VAR_13] >> 16) & 0xFF))
      return VAR_5;
  }
  if (!FUNC_1(VAR_8, "}\r\n")) return VAR_5;

  return VAR_6;
}
