
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_23__ {int error; int mmgr; int filter; int stream; int attr; } ;
struct TYPE_22__ {TYPE_4__* fontdef; TYPE_6__* descendant_font; int xref; TYPE_2__* cmap_stream; TYPE_1__* map_stream; } ;
struct TYPE_21__ {TYPE_6__* descriptor; int x_height; int stemv; int italic_angle; int font_bbox; int flags; int descent; int ascent; int attr; } ;
struct TYPE_20__ {char* base_font; int length1; scalar_t__ embedding; } ;
struct TYPE_19__ {int filter; } ;
struct TYPE_18__ {int filter; } ;
typedef TYPE_3__* HPDF_TTFontDefAttr ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_4__* HPDF_FontDef ;
typedef TYPE_5__* HPDF_FontAttr ;
typedef TYPE_6__* HPDF_Dict ;
typedef TYPE_6__* HPDF_Array ;


 TYPE_6__* FUNC_0 (int ,int ) ;
 TYPE_6__* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*,char*,TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_6__*,char*,int ) ;
 TYPE_6__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_9 (int ,TYPE_6__*) ;

__attribute__((used)) static HPDF_STATUS
FUNC_10 (HPDF_Dict VAR_1)
{
    HPDF_FontAttr VAR_2 = (HPDF_FontAttr)VAR_1->attr;
    HPDF_FontDef VAR_3 = VAR_2->fontdef;
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_STATUS VAR_5 = 0;

    FUNC_7 ((" CIDFontType2_BeforeWrite_Func\n"));

    if (VAR_2->map_stream)
        VAR_2->map_stream->filter = VAR_1->filter;

    if (VAR_2->cmap_stream)
        VAR_2->cmap_stream->filter = VAR_1->filter;

    if (!VAR_2->fontdef->descriptor) {
        HPDF_Dict VAR_6 = FUNC_5 (VAR_1->mmgr);
        HPDF_Array VAR_7;

        if (!VAR_6)
            return FUNC_6 (VAR_1->error);

        if (VAR_4->embedding) {
            HPDF_Dict VAR_8 = FUNC_1 (VAR_1->mmgr,
                    VAR_2->xref);

            if (!VAR_8)
                return FUNC_6 (VAR_1->error);

            if (FUNC_8 (VAR_2->fontdef,
                VAR_8->stream) != VAR_0)
                return FUNC_6 (VAR_1->error);

            VAR_5 += FUNC_2 (VAR_6, "FontFile2", VAR_8);
            VAR_5 += FUNC_4 (VAR_8, "Length1",
                    VAR_4->length1);
            VAR_5 += FUNC_4 (VAR_8, "Length2", 0);
            VAR_5 += FUNC_4 (VAR_8, "Length3", 0);

            VAR_8->filter = VAR_1->filter;

            if (VAR_5 != VAR_0)
                return FUNC_6 (VAR_1->error);
        }

        VAR_5 += FUNC_9 (VAR_2->xref, VAR_6);
        VAR_5 += FUNC_3 (VAR_6, "Type", "FontDescriptor");
        VAR_5 += FUNC_4 (VAR_6, "Ascent", VAR_3->ascent);
        VAR_5 += FUNC_4 (VAR_6, "Descent", VAR_3->descent);
        VAR_5 += FUNC_4 (VAR_6, "Flags", VAR_3->flags);

        VAR_7 = FUNC_0 (VAR_1->mmgr, VAR_3->font_bbox);
        VAR_5 += FUNC_2 (VAR_6, "FontBBox", VAR_7);

        VAR_5 += FUNC_3 (VAR_6, "FontName", VAR_4->base_font);
        VAR_5 += FUNC_4 (VAR_6, "ItalicAngle",
                VAR_3->italic_angle);
        VAR_5 += FUNC_4 (VAR_6, "StemV", VAR_3->stemv);
        VAR_5 += FUNC_4 (VAR_6, "XHeight", VAR_3->x_height);

        if (VAR_5 != VAR_0)
            return FUNC_6 (VAR_1->error);

        VAR_2->fontdef->descriptor = VAR_6;
    }

    if ((VAR_5 = FUNC_3 (VAR_1, "BaseFont",
                VAR_4->base_font)) != VAR_0)
        return VAR_5;

    if ((VAR_5 = FUNC_3 (VAR_2->descendant_font, "BaseFont",
                VAR_4->base_font)) != VAR_0)
        return VAR_5;

    return FUNC_2 (VAR_2->descendant_font, "FontDescriptor",
                VAR_2->fontdef->descriptor);
}
