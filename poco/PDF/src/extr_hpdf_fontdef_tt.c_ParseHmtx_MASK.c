
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int error; int mmgr; int attr; } ;
struct TYPE_11__ {int offset; } ;
struct TYPE_10__ {int lsb; int advance_width; } ;
struct TYPE_9__ {int num_glyphs; int num_h_metric; int stream; TYPE_2__* h_metric; } ;
typedef int HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_TTFontDefAttr ;
typedef TYPE_2__ HPDF_TTF_LongHorMetric ;
typedef TYPE_3__ HPDF_TTFTable ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_4__* HPDF_FontDef ;


 TYPE_3__* FUNC_0 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static HPDF_STATUS
FUNC_8 (HPDF_FontDef VAR_3)
{
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_TTFTable *VAR_5 = FUNC_0 (VAR_3, "hmtx");
    HPDF_STATUS VAR_6;
    HPDF_UINT VAR_7;
    HPDF_UINT16 VAR_8 = 0;
    HPDF_TTF_LongHorMetric *VAR_9;

    FUNC_5 ((" HPDF_TTFontDef_ParseHtmx\n"));

    if (!VAR_5)
        return FUNC_6 (VAR_3->error, VAR_2, 7);

    VAR_6 = FUNC_7 (VAR_4->stream, VAR_5->offset, VAR_1);
    if (VAR_6 != VAR_0)
        return VAR_6;




    VAR_4->h_metric = FUNC_4 (VAR_3->mmgr,
        sizeof (HPDF_TTF_LongHorMetric) * VAR_4->num_glyphs);

    if (!VAR_4->h_metric)
        return FUNC_3 (VAR_3->error);

    VAR_9 = VAR_4->h_metric;
    for (VAR_7 = 0; VAR_7 < VAR_4->num_h_metric; VAR_7++) {
        if ((VAR_6 = FUNC_2 (VAR_4->stream, &VAR_9->advance_width)) !=
                    VAR_0)
            return VAR_6;

        if ((VAR_6 = FUNC_1 (VAR_4->stream, &VAR_9->lsb)) != VAR_0)
            return VAR_6;

        FUNC_5((" ParseHmtx metric[%u] aw=%u lsb=%d\n", VAR_7,
            VAR_9->advance_width, VAR_9->lsb));

        VAR_8 = VAR_9->advance_width;
        VAR_9++;
    }


    while (VAR_7 < VAR_4->num_glyphs) {
        VAR_9->advance_width = VAR_8;

        if ((VAR_6 = FUNC_1 (VAR_4->stream, &VAR_9->lsb)) != VAR_0)
            return VAR_6;

        VAR_9++;
        VAR_7++;
    }

    return VAR_0;
}
