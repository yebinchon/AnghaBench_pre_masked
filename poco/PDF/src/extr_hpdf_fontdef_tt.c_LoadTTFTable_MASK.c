
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int error; int mmgr; int attr; } ;
struct TYPE_9__ {scalar_t__ length; scalar_t__ offset; scalar_t__ check_sum; int * tag; } ;
struct TYPE_7__ {int num_tables; int search_range; int entry_selector; int range_shift; TYPE_3__* table; scalar_t__ sfnt_version; } ;
struct TYPE_8__ {int stream; TYPE_1__ offset_tbl; } ;
typedef int HPDF_UINT ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef TYPE_3__ HPDF_TTFTable ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_INT ;
typedef TYPE_4__* HPDF_FontDef ;
typedef int HPDF_BYTE ;


 scalar_t__ FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *,int*) ;
 int VAR_1 ;
 int VAR_2 ;

HPDF_STATUS
FUNC_7 (HPDF_FontDef VAR_3)
{
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_STATUS VAR_5 = VAR_0;
    HPDF_INT VAR_6;
    HPDF_TTFTable *VAR_7;

    FUNC_4 ((" HPDF_TTFontDef_LoadTTFTable\n"));

    VAR_5 += FUNC_1 (VAR_4->stream, &VAR_4->offset_tbl.sfnt_version);
    VAR_5 += FUNC_0 (VAR_4->stream, &VAR_4->offset_tbl.num_tables);
    VAR_5 += FUNC_0 (VAR_4->stream, &VAR_4->offset_tbl.search_range);
    VAR_5 += FUNC_0 (VAR_4->stream, &VAR_4->offset_tbl.entry_selector);
    VAR_5 += FUNC_0 (VAR_4->stream, &VAR_4->offset_tbl.range_shift);

    if (VAR_5 != VAR_0)
        return FUNC_2 (VAR_3->error);

    if (VAR_4->offset_tbl.num_tables * sizeof(HPDF_TTFTable) >
            VAR_2)
        return FUNC_5 (VAR_3->error, VAR_1, 0);

    VAR_4->offset_tbl.table = FUNC_3 (VAR_3->mmgr,
                        sizeof(HPDF_TTFTable) * VAR_4->offset_tbl.num_tables);
    if (!VAR_4->offset_tbl.table)
        return FUNC_2 (VAR_3->error);

    VAR_7 = VAR_4->offset_tbl.table;
    for (VAR_6 = 0; VAR_6 < VAR_4->offset_tbl.num_tables; VAR_6++) {
        HPDF_UINT VAR_8 = 4;

        VAR_5 += FUNC_6 (VAR_4->stream, (HPDF_BYTE *)VAR_7->tag, &VAR_8);
        VAR_5 += FUNC_1 (VAR_4->stream, &VAR_7->check_sum);
        VAR_5 += FUNC_1 (VAR_4->stream, &VAR_7->offset);
        VAR_5 += FUNC_1 (VAR_4->stream, &VAR_7->length);

        FUNC_4((" [%d] tag=[%c%c%c%c] check_sum=%u offset=%u length=%u\n",
                    VAR_6, VAR_7->tag[0], VAR_7->tag[1], VAR_7->tag[2], VAR_7->tag[3],
                    (HPDF_UINT)VAR_7->check_sum, (HPDF_UINT)VAR_7->offset,
                    (HPDF_UINT)VAR_7->length));

        if (VAR_5 != VAR_0)
            return FUNC_2 (VAR_3->error);;

        VAR_7++;
    }

    return VAR_0;
}
