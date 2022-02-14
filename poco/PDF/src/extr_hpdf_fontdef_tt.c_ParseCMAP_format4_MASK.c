
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int error; int mmgr; int attr; } ;
struct TYPE_5__ {int format; int length; int language; int seg_count_x2; int search_range; int entry_selector; int range_shift; int reserved_pad; int glyph_id_array_count; int * id_range_offset; int * id_delta; int * end_count; int * start_count; int * glyph_id_array; } ;
struct TYPE_6__ {TYPE_1__ cmap; int stream; } ;
typedef scalar_t__ HPDF_UINT32 ;
typedef int HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef scalar_t__ HPDF_STATUS ;
typedef scalar_t__ HPDF_INT32 ;
typedef int HPDF_INT16 ;
typedef TYPE_3__* HPDF_FontDef ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_2 ;

__attribute__((used)) static HPDF_STATUS
FUNC_8 (HPDF_FontDef VAR_3,
                    HPDF_UINT32 VAR_4)
{
    HPDF_TTFontDefAttr VAR_5 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_STATUS VAR_6;
    HPDF_UINT VAR_7;
    HPDF_UINT16 *VAR_8;
    HPDF_UINT16 *VAR_9;
    HPDF_INT16 *VAR_10;
    HPDF_UINT16 *VAR_11;
    HPDF_UINT16 *VAR_12;
    HPDF_INT32 VAR_13;

    FUNC_4((" ParseCMAP_format4\n"));

    if ((VAR_6 = FUNC_6 (VAR_5->stream, VAR_4, VAR_1)) !=
            VAR_0)
        return VAR_6;

    VAR_6 += FUNC_1 (VAR_5->stream, &VAR_5->cmap.format);
    VAR_6 += FUNC_1 (VAR_5->stream, &VAR_5->cmap.length);
    VAR_6 += FUNC_1 (VAR_5->stream, &VAR_5->cmap.language);

    if (VAR_6 != VAR_0)
        return FUNC_2 (VAR_3->error);

    if (VAR_5->cmap.format != 4)
        return FUNC_5 (VAR_3->error, VAR_2, 0);

    VAR_6 += FUNC_1 (VAR_5->stream, &VAR_5->cmap.seg_count_x2);
    VAR_6 += FUNC_1 (VAR_5->stream, &VAR_5->cmap.search_range);
    VAR_6 += FUNC_1 (VAR_5->stream, &VAR_5->cmap.entry_selector);
    VAR_6 += FUNC_1 (VAR_5->stream, &VAR_5->cmap.range_shift);

    if (VAR_6 != VAR_0)
        return FUNC_2 (VAR_3->error);


    VAR_5->cmap.end_count = FUNC_3 (VAR_3->mmgr,
            sizeof(HPDF_UINT16) * VAR_5->cmap.seg_count_x2 / 2);
    if (!VAR_5->cmap.end_count)
        return FUNC_2 (VAR_3->error);

    VAR_8 = VAR_5->cmap.end_count;
    for (VAR_7 = 0; VAR_7 < (HPDF_UINT)VAR_5->cmap.seg_count_x2 / 2; VAR_7++)
        if ((VAR_6 = FUNC_1 (VAR_5->stream, VAR_8++)) != VAR_0)
            return VAR_6;

    if ((VAR_6 = FUNC_1 (VAR_5->stream, &VAR_5->cmap.reserved_pad)) != VAR_0)
        return VAR_6;


    VAR_5->cmap.start_count = FUNC_3 (VAR_3->mmgr,
            sizeof(HPDF_UINT16) * VAR_5->cmap.seg_count_x2 / 2);
    if (!VAR_5->cmap.start_count)
        return FUNC_2 (VAR_3->error);

    VAR_9 = VAR_5->cmap.start_count;
    for (VAR_7 = 0; VAR_7 < (HPDF_UINT)VAR_5->cmap.seg_count_x2 / 2; VAR_7++)
        if ((VAR_6 = FUNC_1 (VAR_5->stream, VAR_9++)) != VAR_0)
            return VAR_6;


    VAR_5->cmap.id_delta = FUNC_3 (VAR_3->mmgr,
            sizeof(HPDF_UINT16) * VAR_5->cmap.seg_count_x2 / 2);
    if (!VAR_5->cmap.id_delta)
        return FUNC_2 (VAR_3->error);

    VAR_10 = VAR_5->cmap.id_delta;
    for (VAR_7 = 0; VAR_7 < (HPDF_UINT)VAR_5->cmap.seg_count_x2 / 2; VAR_7++)
        if ((VAR_6 = FUNC_0 (VAR_5->stream, VAR_10++)) != VAR_0)
            return VAR_6;


    VAR_5->cmap.id_range_offset = FUNC_3 (VAR_3->mmgr,
            sizeof(HPDF_UINT16) * VAR_5->cmap.seg_count_x2 / 2);
    if (!VAR_5->cmap.id_range_offset)
        return FUNC_2 (VAR_3->error);

    VAR_11 = VAR_5->cmap.id_range_offset;
    for (VAR_7 = 0; VAR_7 < (HPDF_UINT)VAR_5->cmap.seg_count_x2 / 2; VAR_7++)
        if ((VAR_6 = FUNC_1 (VAR_5->stream, VAR_11++)) != VAR_0)
            return VAR_6;

    VAR_13 = FUNC_7 (VAR_5->stream) - VAR_4;
    if (VAR_13 < 0)
        return FUNC_2 (VAR_3->error);

    VAR_5->cmap.glyph_id_array_count = (VAR_5->cmap.length - VAR_13) / 2;

    if (VAR_5->cmap.glyph_id_array_count > 0) {

        VAR_5->cmap.glyph_id_array = FUNC_3 (VAR_3->mmgr,
                sizeof(HPDF_UINT16) * VAR_5->cmap.glyph_id_array_count);
        if (!VAR_5->cmap.glyph_id_array)
            return FUNC_2 (VAR_3->error);

        VAR_12 = VAR_5->cmap.glyph_id_array;
        for (VAR_7 = 0; VAR_7 < VAR_5->cmap.glyph_id_array_count; VAR_7++)
            if ((VAR_6 = FUNC_1 (VAR_5->stream, VAR_12++)) != VAR_0)
                return VAR_6;
    } else
        VAR_5->cmap.glyph_id_array = ((void*)0);
    return VAR_0;
}
