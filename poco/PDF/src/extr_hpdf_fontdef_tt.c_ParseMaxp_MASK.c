
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int error; int attr; } ;
struct TYPE_8__ {scalar_t__ offset; } ;
struct TYPE_7__ {int num_glyphs; int stream; } ;
typedef TYPE_1__* HPDF_TTFontDefAttr ;
typedef TYPE_2__ HPDF_TTFTable ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_3__* HPDF_FontDef ;


 TYPE_2__* FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;
 int VAR_2 ;

__attribute__((used)) static HPDF_STATUS
FUNC_5 (HPDF_FontDef VAR_3)
{
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_TTFTable *VAR_5 = FUNC_0 (VAR_3, "maxp");
    HPDF_STATUS VAR_6;

    FUNC_2 ((" HPDF_TTFontDef_ParseMaxp\n"));

    if (!VAR_5)
        return FUNC_3 (VAR_3->error, VAR_2, 9);

    VAR_6 = FUNC_4 (VAR_4->stream, VAR_5->offset + 4, VAR_1);
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_6 = FUNC_1 (VAR_4->stream, &VAR_4->num_glyphs);

    FUNC_2((" HPDF_TTFontDef_ParseMaxp num_glyphs=%u\n",
            VAR_4->num_glyphs));

    return VAR_6;
}
