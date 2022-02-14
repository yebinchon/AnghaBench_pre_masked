
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int error; int mmgr; int attr; } ;
struct TYPE_5__ {scalar_t__ format; scalar_t__ length; scalar_t__ language; int glyph_id_array_count; int * glyph_id_array; } ;
struct TYPE_6__ {TYPE_1__ cmap; int stream; } ;
typedef int HPDF_UINT32 ;
typedef int HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_3__* HPDF_FontDef ;
typedef int HPDF_BYTE ;


 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int*) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static HPDF_STATUS
FUNC_7 (HPDF_FontDef VAR_3,
                    HPDF_UINT32 VAR_4)
{
    HPDF_TTFontDefAttr VAR_5 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_STATUS VAR_6;
    HPDF_BYTE VAR_7[256];
    HPDF_UINT VAR_8;
    HPDF_UINT16 *VAR_9;
    HPDF_UINT VAR_10;

    FUNC_3((" ParseCMAP_format0\n"));

    VAR_6 = FUNC_6 (VAR_5->stream, VAR_4, VAR_1);
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_6 += FUNC_0 (VAR_5->stream, &VAR_5->cmap.format);
    VAR_6 += FUNC_0 (VAR_5->stream, &VAR_5->cmap.length);
    VAR_6 += FUNC_0 (VAR_5->stream, &VAR_5->cmap.language);

    if (VAR_6 != VAR_0)
        return FUNC_1 (VAR_3->error);

    if (VAR_5->cmap.format != 0)
        return FUNC_4 (VAR_3->error, VAR_2, 0);

    VAR_8 = 256;
    VAR_6 = FUNC_5 (VAR_5->stream, VAR_7, &VAR_8);
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_5->cmap.glyph_id_array_count = 256;
    VAR_5->cmap.glyph_id_array = FUNC_2 (VAR_3->mmgr,
            sizeof (HPDF_UINT16) * 256);
    if (!VAR_5->cmap.glyph_id_array)
        return FUNC_1 (VAR_3->error);

    VAR_9 = VAR_5->cmap.glyph_id_array;
    for (VAR_10 = 0; VAR_10 < 256; VAR_10++) {
        *VAR_9 = VAR_5->cmap.glyph_id_array[VAR_10];
        FUNC_3((" ParseCMAP_format0 glyph_id_array[%d]=%u\n",
                    VAR_10, *VAR_9));
        VAR_9++;
    }

    return VAR_0;
}
