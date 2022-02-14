
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int error; void* descent; void* ascent; int attr; } ;
struct TYPE_10__ {scalar_t__ offset; } ;
struct TYPE_8__ {int units_per_em; } ;
struct TYPE_9__ {int num_h_metric; int stream; TYPE_1__ header; } ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef TYPE_3__ HPDF_TTFTable ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_INT32 ;
typedef void* HPDF_INT16 ;
typedef TYPE_4__* HPDF_FontDef ;


 TYPE_3__* FUNC_0 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_1 (int ,void**) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int ) ;
 int VAR_2 ;

__attribute__((used)) static HPDF_STATUS
FUNC_7 (HPDF_FontDef VAR_3)
{
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_TTFTable *VAR_5 = FUNC_0 (VAR_3, "hhea");
    HPDF_STATUS VAR_6;

    FUNC_4 ((" HPDF_TTFontDef_ParseHhea\n"));

    if (!VAR_5)
        return FUNC_5 (VAR_3->error, VAR_2, 6);

    VAR_6 = FUNC_6 (VAR_4->stream, VAR_5->offset + 4, VAR_1);
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_6 += FUNC_1 (VAR_4->stream, &VAR_3->ascent);
    VAR_3->ascent = (HPDF_INT16)((HPDF_INT32)VAR_3->ascent * 1000 /
                VAR_4->header.units_per_em);
    VAR_6 += FUNC_1 (VAR_4->stream, &VAR_3->descent);
    VAR_3->descent = (HPDF_INT16)((HPDF_INT32)VAR_3->descent * 1000 /
                VAR_4->header.units_per_em);

    if (VAR_6 != VAR_0)
        return FUNC_3 (VAR_3->error);

    VAR_6 = FUNC_6 (VAR_4->stream, VAR_5->offset + 34, VAR_1);
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_6 = FUNC_2 (VAR_4->stream, &VAR_4->num_h_metric);
    if (VAR_6 != VAR_0)
        return FUNC_3 (VAR_3->error);

    FUNC_4((" HPDF_TTFontDef_ParseHhea num_h_metric=%u\n",
            VAR_4->num_h_metric));

    return VAR_6;
}
