
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int mmgr; int attr; } ;
struct TYPE_11__ {scalar_t__ offsets; scalar_t__ flgs; } ;
struct TYPE_10__ {scalar_t__ table; } ;
struct TYPE_9__ {scalar_t__ glyph_id_array; scalar_t__ id_range_offset; scalar_t__ id_delta; scalar_t__ start_count; scalar_t__ end_count; } ;
struct TYPE_8__ {scalar_t__ name_records; } ;
struct TYPE_12__ {scalar_t__ stream; TYPE_4__ glyph_tbl; TYPE_3__ offset_tbl; TYPE_2__ cmap; TYPE_1__ name_tbl; scalar_t__ h_metric; scalar_t__ char_set; } ;
typedef TYPE_5__* HPDF_TTFontDefAttr ;
typedef TYPE_6__* HPDF_FontDef ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (HPDF_FontDef VAR_0)
{
    HPDF_TTFontDefAttr VAR_1 = (HPDF_TTFontDefAttr)VAR_0->attr;

    if (VAR_1) {
        if (VAR_1->char_set)
            FUNC_0 (VAR_0->mmgr, VAR_1->char_set);

        if (VAR_1->h_metric)
            FUNC_0 (VAR_0->mmgr, VAR_1->h_metric);

        if (VAR_1->name_tbl.name_records)
            FUNC_0 (VAR_0->mmgr, VAR_1->name_tbl.name_records);

        if (VAR_1->cmap.end_count)
            FUNC_0 (VAR_0->mmgr, VAR_1->cmap.end_count);

        if (VAR_1->cmap.start_count)
            FUNC_0 (VAR_0->mmgr, VAR_1->cmap.start_count);

        if (VAR_1->cmap.id_delta)
            FUNC_0 (VAR_0->mmgr, VAR_1->cmap.id_delta);

        if (VAR_1->cmap.id_range_offset)
            FUNC_0 (VAR_0->mmgr, VAR_1->cmap.id_range_offset);

        if (VAR_1->cmap.glyph_id_array)
            FUNC_0 (VAR_0->mmgr, VAR_1->cmap.glyph_id_array);

        if (VAR_1->offset_tbl.table)
            FUNC_0 (VAR_0->mmgr, VAR_1->offset_tbl.table);

        if (VAR_1->glyph_tbl.flgs)
            FUNC_0 (VAR_0->mmgr, VAR_1->glyph_tbl.flgs);

        if (VAR_1->glyph_tbl.offsets)
            FUNC_0 (VAR_0->mmgr, VAR_1->glyph_tbl.offsets);

        if (VAR_1->stream)
            FUNC_1 (VAR_1->stream);
    }
}
