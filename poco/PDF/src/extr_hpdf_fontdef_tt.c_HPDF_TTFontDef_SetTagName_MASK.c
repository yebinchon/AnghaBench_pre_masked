
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ base_font; int attr; } ;
struct TYPE_4__ {char* tag_name; int* tag_name2; scalar_t__ base_font; } ;
typedef size_t HPDF_UINT ;
typedef TYPE_1__* HPDF_TTFontDefAttr ;
typedef TYPE_2__* HPDF_FontDef ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (char*,int) ;
 size_t VAR_1 ;

void
FUNC_4 (HPDF_FontDef VAR_2,
                            char *VAR_3)
{
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_2->attr;
    char VAR_5[VAR_0 + 1];
    HPDF_UINT VAR_6;

    FUNC_2 ((" HPDF_TTFontDef_SetTagName\n"));

    if (FUNC_3 (VAR_3, VAR_0) != VAR_1)
        return;

    FUNC_0 ((HPDF_BYTE *)VAR_4->tag_name, (HPDF_BYTE *)VAR_3, VAR_1);
    VAR_4->tag_name[VAR_1] = '+';

    for (VAR_6 = 0; VAR_6 < VAR_1 + 1; VAR_6++) {
        VAR_4->tag_name2[VAR_6 * 2] = 0x00;
        VAR_4->tag_name2[VAR_6 * 2 + 1] = VAR_4->tag_name[VAR_6];
    }

    FUNC_1 (VAR_5, 0, VAR_0 + 1);
    FUNC_0 ((HPDF_BYTE *)VAR_5, (HPDF_BYTE *)VAR_4->tag_name, VAR_1 + 1);
    FUNC_0 ((HPDF_BYTE *)VAR_5 + VAR_1 + 1, (HPDF_BYTE *)VAR_2->base_font, VAR_0 - VAR_1 - 1);

    FUNC_0 ((HPDF_BYTE *)VAR_4->base_font, (HPDF_BYTE *)VAR_5, VAR_0 + 1);
}
