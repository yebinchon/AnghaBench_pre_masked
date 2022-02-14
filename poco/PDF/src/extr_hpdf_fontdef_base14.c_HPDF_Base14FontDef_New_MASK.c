
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int cap_height; int x_height; int descent; int ascent; int bbox; int widths_table; scalar_t__ is_font_specific; int font_name; } ;
struct TYPE_14__ {char* base_font; void* valid; int cap_height; int x_height; int descent; int ascent; int font_bbox; scalar_t__ attr; } ;
struct TYPE_13__ {int error; } ;
struct TYPE_12__ {char* encoding_scheme; void* is_base14font; } ;
typedef TYPE_1__* HPDF_Type1FontDefAttr ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_MMgr ;
typedef TYPE_3__* HPDF_FontDef ;
typedef TYPE_4__ HPDF_Base14FontDefData ;


 TYPE_4__* FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int ,char*) ;
 void* VAR_4 ;
 TYPE_3__* FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;

HPDF_FontDef
FUNC_6 (HPDF_MMgr VAR_5,
                         const char *VAR_6)
{
    HPDF_FontDef VAR_7;
    HPDF_STATUS VAR_8;
    const HPDF_Base14FontDefData *VAR_9;
    char *VAR_10;
    HPDF_Type1FontDefAttr VAR_11;

    VAR_7 = FUNC_4 (VAR_5);
    if (!VAR_7)
        return ((void*)0);

    VAR_9 = FUNC_0 (VAR_6);

    if (!VAR_9->font_name) {
        FUNC_2 (VAR_5->error, VAR_1, 0);
        FUNC_1 (VAR_7);
        return ((void*)0);
    }

    VAR_10 = VAR_7->base_font + VAR_2;
    FUNC_3 (VAR_7->base_font, VAR_9->font_name, VAR_10);

    VAR_11 = (HPDF_Type1FontDefAttr)VAR_7->attr;
    VAR_11->is_base14font = VAR_4;

    if (VAR_9->is_font_specific)
        FUNC_3 (VAR_11->encoding_scheme, VAR_0,
                VAR_11->encoding_scheme + VAR_2);

    VAR_8 = FUNC_5 (VAR_7, VAR_9->widths_table);

    if (VAR_8 != VAR_3) {
        FUNC_1 (VAR_7);
        return ((void*)0);
    }

    VAR_7->font_bbox = VAR_9->bbox;
    VAR_7->ascent = VAR_9->ascent;
    VAR_7->descent = VAR_9->descent;
    VAR_7->x_height = VAR_9->x_height;
    VAR_7->cap_height = VAR_9->cap_height;

    VAR_7->valid = VAR_4;

    return VAR_7;
}
