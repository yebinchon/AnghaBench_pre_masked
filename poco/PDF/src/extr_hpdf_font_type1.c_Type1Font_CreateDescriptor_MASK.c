
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int error; int filter; int stream; int attr; } ;
struct TYPE_18__ {TYPE_2__* fontdef; } ;
struct TYPE_17__ {char* base_font; TYPE_4__* descriptor; int x_height; int stemv; int italic_angle; int font_bbox; int flags; int descent; int ascent; int attr; } ;
struct TYPE_16__ {char* char_set; int length3; int length2; int length1; scalar_t__ font_data; } ;
typedef int HPDF_Xref ;
typedef TYPE_1__* HPDF_Type1FontDefAttr ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MMgr ;
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
 int VAR_1 ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ,TYPE_4__*) ;

__attribute__((used)) static HPDF_STATUS
FUNC_10 (HPDF_MMgr VAR_2,
                             HPDF_Font VAR_3,
                             HPDF_Xref VAR_4)
{
    HPDF_FontAttr VAR_5 = (HPDF_FontAttr)VAR_3->attr;
    HPDF_FontDef VAR_6 = VAR_5->fontdef;
    HPDF_Type1FontDefAttr VAR_7 = (HPDF_Type1FontDefAttr)VAR_6->attr;

    FUNC_7 ((" HPDF_Type1Font_CreateDescriptor\n"));

    if (!VAR_5->fontdef->descriptor) {
        HPDF_Dict VAR_8 = FUNC_5 (VAR_2);
        HPDF_STATUS VAR_9 = 0;
        HPDF_Array VAR_10;

        if (!VAR_8)
            return FUNC_6 (VAR_3->error);

        VAR_9 += FUNC_9 (VAR_4, VAR_8);
        VAR_9 += FUNC_3 (VAR_8, "Type", "FontDescriptor");
        VAR_9 += FUNC_4 (VAR_8, "Ascent", VAR_6->ascent);
        VAR_9 += FUNC_4 (VAR_8, "Descent", VAR_6->descent);
        VAR_9 += FUNC_4 (VAR_8, "Flags", VAR_6->flags);

        VAR_10 = FUNC_0 (VAR_2, VAR_6->font_bbox);
        VAR_9 += FUNC_2 (VAR_8, "FontBBox", VAR_10);

        VAR_9 += FUNC_3 (VAR_8, "FontName",
                VAR_5->fontdef->base_font);
        VAR_9 += FUNC_4 (VAR_8, "ItalicAngle",
                VAR_6->italic_angle);
        VAR_9 += FUNC_4 (VAR_8, "StemV", VAR_6->stemv);
        VAR_9 += FUNC_4 (VAR_8, "XHeight", VAR_6->x_height);

        if (VAR_7->char_set)
            VAR_9 += FUNC_3 (VAR_8, "CharSet",
                        VAR_7->char_set);

        if (VAR_9 != VAR_0)
            return FUNC_6 (VAR_3->error);

        if (VAR_7->font_data) {
            HPDF_Dict VAR_11 = FUNC_1 (VAR_2, VAR_4);

            if (!VAR_11)
                return FUNC_6 (VAR_3->error);

            if (FUNC_8 (VAR_7->font_data,
                VAR_11->stream, VAR_1, ((void*)0)) != VAR_0)
                return FUNC_6 (VAR_3->error);

            VAR_9 += FUNC_2 (VAR_8, "FontFile", VAR_11);
            VAR_9 += FUNC_4 (VAR_11, "Length1",
                    VAR_7->length1);
            VAR_9 += FUNC_4 (VAR_11, "Length2",
                    VAR_7->length2);
            VAR_9 += FUNC_4 (VAR_11, "Length3",
                    VAR_7->length3);

            VAR_11->filter = VAR_3->filter;
        }

        if (VAR_9 != VAR_0)
            return FUNC_6 (VAR_3->error);

        VAR_5->fontdef->descriptor = VAR_8;
    }

    return FUNC_2 (VAR_3, "FontDescriptor",
            VAR_5->fontdef->descriptor);
}
