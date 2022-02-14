
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {int error; int filter; int stream; int mmgr; int attr; } ;
struct TYPE_19__ {TYPE_2__* fontdef; int xref; } ;
struct TYPE_18__ {TYPE_4__* descriptor; int x_height; int stemv; int italic_angle; int font_bbox; int flags; int cap_height; int descent; int ascent; int attr; } ;
struct TYPE_17__ {char* base_font; char* char_set; int length1; scalar_t__ embedding; } ;
typedef TYPE_1__* HPDF_TTFontDefAttr ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_FontDef ;
typedef TYPE_3__* HPDF_FontAttr ;
typedef TYPE_4__* HPDF_Font ;
typedef TYPE_4__* HPDF_Dict ;
typedef TYPE_4__* HPDF_Array ;


 TYPE_4__* FUNC_0 (int ,int ) ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,char*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,char*,int ) ;
 TYPE_4__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (int ,TYPE_4__*) ;

__attribute__((used)) static HPDF_STATUS
FUNC_10 (HPDF_Font VAR_1)
{
    HPDF_FontAttr VAR_2 = (HPDF_FontAttr)VAR_1->attr;
    HPDF_FontDef VAR_3 = VAR_2->fontdef;
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_3->attr;

    FUNC_7 ((" HPDF_TTFont_CreateDescriptor\n"));

    if (!VAR_2->fontdef->descriptor) {
        HPDF_Dict VAR_5 = FUNC_5 (VAR_1->mmgr);
        HPDF_STATUS VAR_6 = 0;
        HPDF_Array VAR_7;

        if (!VAR_5)
            return FUNC_6 (VAR_1->error);

        VAR_6 += FUNC_9 (VAR_2->xref, VAR_5);
        VAR_6 += FUNC_3 (VAR_5, "Type", "FontDescriptor");
        VAR_6 += FUNC_4 (VAR_5, "Ascent", VAR_3->ascent);
        VAR_6 += FUNC_4 (VAR_5, "Descent", VAR_3->descent);
        VAR_6 += FUNC_4 (VAR_5, "CapHeight", VAR_3->cap_height);
        VAR_6 += FUNC_4 (VAR_5, "Flags", VAR_3->flags);

        VAR_7 = FUNC_0 (VAR_1->mmgr, VAR_3->font_bbox);
        VAR_6 += FUNC_2 (VAR_5, "FontBBox", VAR_7);

        VAR_6 += FUNC_3 (VAR_5, "FontName", VAR_4->base_font);
        VAR_6 += FUNC_4 (VAR_5, "ItalicAngle",
                VAR_3->italic_angle);
        VAR_6 += FUNC_4 (VAR_5, "StemV", VAR_3->stemv);
        VAR_6 += FUNC_4 (VAR_5, "XHeight", VAR_3->x_height);

        if (VAR_4->char_set)
            VAR_6 += FUNC_3 (VAR_5, "CharSet",
                        VAR_4->char_set);

        if (VAR_6 != VAR_0)
            return FUNC_6 (VAR_1->error);

        if (VAR_4->embedding) {
            HPDF_Dict VAR_8 = FUNC_1 (VAR_1->mmgr,
                    VAR_2->xref);

            if (!VAR_8)
                return FUNC_6 (VAR_1->error);

            if (FUNC_8 (VAR_2->fontdef,
                VAR_8->stream) != VAR_0)
                return FUNC_6 (VAR_1->error);

            VAR_6 += FUNC_2 (VAR_5, "FontFile2", VAR_8);
            VAR_6 += FUNC_4 (VAR_8, "Length1",
                    VAR_4->length1);
            VAR_6 += FUNC_4 (VAR_8, "Length2", 0);
            VAR_6 += FUNC_4 (VAR_8, "Length3", 0);

            VAR_8->filter = VAR_1->filter;
        }

        if (VAR_6 != VAR_0)
            return FUNC_6 (VAR_1->error);

        VAR_2->fontdef->descriptor = VAR_5;
    }

    return FUNC_2 (VAR_1, "FontDescriptor",
                VAR_2->fontdef->descriptor);
}
