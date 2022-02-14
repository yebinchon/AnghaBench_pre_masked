
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_12__ ;


struct TYPE_32__ {scalar_t__* DW2; TYPE_12__* widths; int DW; } ;
struct TYPE_31__ {scalar_t__ cid; scalar_t__ width; } ;
struct TYPE_30__ {int suppliment; int ordering; int registry; } ;
struct TYPE_29__ {int attr; } ;
struct TYPE_28__ {int mmgr; int attr; } ;
struct TYPE_27__ {TYPE_4__* encoder; TYPE_1__* fontdef; } ;
struct TYPE_26__ {char* base_font; int stemv; int italic_angle; int font_bbox; int flags; int missing_width; int cap_height; int descent; int ascent; int attr; } ;
struct TYPE_25__ {scalar_t__ count; } ;
typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_UINT16 ;
typedef scalar_t__ HPDF_UINT ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_1__* HPDF_FontDef ;
typedef TYPE_2__* HPDF_FontAttr ;
typedef TYPE_3__* HPDF_Font ;
typedef TYPE_4__* HPDF_Encoder ;
typedef TYPE_3__* HPDF_Dict ;
typedef TYPE_6__* HPDF_CMapEncoderAttr ;
typedef TYPE_7__ HPDF_CID_Width ;
typedef TYPE_8__* HPDF_CIDFontDefAttr ;
typedef TYPE_3__* HPDF_Array ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__) ;
 TYPE_3__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,char*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char*,char*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,char*,int ) ;
 TYPE_3__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_12__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (char*) ;
 TYPE_3__* FUNC_10 (int ,int ,int *) ;
 scalar_t__ FUNC_11 (int ,TYPE_3__*) ;

__attribute__((used)) static HPDF_Font
FUNC_12 (HPDF_Font VAR_1, HPDF_Xref VAR_2)
{
    HPDF_STATUS VAR_3 = VAR_0;
    HPDF_FontAttr VAR_4 = (HPDF_FontAttr)VAR_1->attr;
    HPDF_FontDef VAR_5 = VAR_4->fontdef;
    HPDF_CIDFontDefAttr VAR_6 = (HPDF_CIDFontDefAttr)VAR_5->attr;
    HPDF_Encoder VAR_7 = VAR_4->encoder;
    HPDF_CMapEncoderAttr VAR_8 =
                (HPDF_CMapEncoderAttr)VAR_7->attr;

    HPDF_UINT16 VAR_9 = 0;
    HPDF_Font VAR_10;
    HPDF_Array VAR_11;
    HPDF_Array VAR_12 = ((void*)0);
    HPDF_UINT VAR_13;

    HPDF_Dict VAR_14;
    HPDF_Dict VAR_15;

    FUNC_9 ((" HPDF_CIDFontType0_New\n"));

    VAR_10 = FUNC_7 (VAR_1->mmgr);
    if (!VAR_10)
        return ((void*)0);

    if (FUNC_11 (VAR_2, VAR_10) != VAR_0)
        return ((void*)0);

    VAR_3 += FUNC_5 (VAR_10, "Type", "Font");
    VAR_3 += FUNC_5 (VAR_10, "Subtype", "CIDFontType0");
    VAR_3 += FUNC_6 (VAR_10, "DW", VAR_6->DW);
    VAR_3 += FUNC_5 (VAR_10, "BaseFont", VAR_5->base_font);
    if (VAR_3 != VAR_0)
        return ((void*)0);


    VAR_11 = FUNC_2 (VAR_1->mmgr);
    if (!VAR_11)
        return ((void*)0);

    if (FUNC_4 (VAR_10, "DW2", VAR_11) != VAR_0)
        return ((void*)0);

    VAR_3 += FUNC_1 (VAR_11, VAR_6->DW2[0]);
    VAR_3 += FUNC_1 (VAR_11, VAR_6->DW2[1]);

    if (VAR_3 != VAR_0)
        return ((void*)0);


    VAR_11 = FUNC_2 (VAR_1->mmgr);
    if (!VAR_11)
        return ((void*)0);

    if (FUNC_4 (VAR_10, "W", VAR_11) != VAR_0)
        return ((void*)0);


    for (VAR_13 = 0; VAR_13< VAR_6->widths->count; VAR_13++) {
        HPDF_CID_Width *VAR_16 =
                (HPDF_CID_Width *)FUNC_8 (VAR_6->widths, VAR_13);

        if (VAR_16->cid != VAR_9 + 1 || !VAR_12) {
            VAR_12 = FUNC_2 (VAR_1->mmgr);
            if (!VAR_12)
                return ((void*)0);

            VAR_3 += FUNC_1 (VAR_11, VAR_16->cid);
            VAR_3 += FUNC_0 (VAR_11, VAR_12);
        }

        VAR_3 += FUNC_1 (VAR_12, VAR_16->width);
        VAR_9 = VAR_16->cid;

        if (VAR_3 != VAR_0)
            return ((void*)0);
    }


    VAR_14 = FUNC_7 (VAR_1->mmgr);
    if (!VAR_14)
        return ((void*)0);

    if (FUNC_11 (VAR_2, VAR_14) != VAR_0)
        return ((void*)0);

    if (FUNC_4 (VAR_10, "FontDescriptor", VAR_14) != VAR_0)
        return ((void*)0);

    VAR_3 += FUNC_5 (VAR_14, "Type", "FontDescriptor");
    VAR_3 += FUNC_5 (VAR_14, "FontName", VAR_5->base_font);
    VAR_3 += FUNC_6 (VAR_14, "Ascent", VAR_5->ascent);
    VAR_3 += FUNC_6 (VAR_14, "Descent", VAR_5->descent);
    VAR_3 += FUNC_6 (VAR_14, "CapHeight",
                VAR_5->cap_height);
    VAR_3 += FUNC_6 (VAR_14, "MissingWidth",
                VAR_5->missing_width);
    VAR_3 += FUNC_6 (VAR_14, "Flags", VAR_5->flags);

    if (VAR_3 != VAR_0)
        return ((void*)0);

    VAR_11 = FUNC_3 (VAR_1->mmgr, VAR_5->font_bbox);
    if (!VAR_11)
        return ((void*)0);

    VAR_3 += FUNC_4 (VAR_14, "FontBBox", VAR_11);
    VAR_3 += FUNC_6 (VAR_14, "ItalicAngle",
            VAR_5->italic_angle);
    VAR_3 += FUNC_6 (VAR_14, "StemV", VAR_5->stemv);

    if (VAR_3 != VAR_0)
        return ((void*)0);


    VAR_15 = FUNC_7 (VAR_1->mmgr);
    if (!VAR_15)
        return ((void*)0);

    if (FUNC_4 (VAR_10, "CIDSystemInfo", VAR_15) != VAR_0)
        return ((void*)0);

    VAR_3 += FUNC_4 (VAR_15, "Registry",
            FUNC_10 (VAR_1->mmgr, VAR_8->registry, ((void*)0)));
    VAR_3 += FUNC_4 (VAR_15, "Ordering",
            FUNC_10 (VAR_1->mmgr, VAR_8->ordering, ((void*)0)));
    VAR_3 += FUNC_6 (VAR_15, "Supplement",
            VAR_8->suppliment);

    if (VAR_3 != VAR_0)
        return ((void*)0);

    return VAR_10;
}
