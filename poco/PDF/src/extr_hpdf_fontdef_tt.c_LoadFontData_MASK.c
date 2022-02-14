
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;


struct TYPE_28__ {scalar_t__ missing_width; void* x_height; void* cap_height; int error; int attr; } ;
struct TYPE_27__ {int offset; } ;
struct TYPE_25__ {int units_per_em; } ;
struct TYPE_23__ {int base_offset; } ;
struct TYPE_26__ {int * stream; TYPE_3__ header; TYPE_2__* h_metric; TYPE_1__ glyph_tbl; int embedding; } ;
struct TYPE_24__ {scalar_t__ advance_width; } ;
struct TYPE_22__ {scalar_t__ top; } ;
typedef int HPDF_UINT32 ;
typedef void* HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_4__* HPDF_TTFontDefAttr ;
typedef TYPE_5__ HPDF_TTFTable ;
typedef int * HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef scalar_t__ HPDF_INT16 ;
typedef TYPE_6__* HPDF_FontDef ;
typedef int HPDF_BOOL ;


 int FUNC_0 (TYPE_6__*) ;
 TYPE_5__* FUNC_1 (TYPE_6__*,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_2 ;
 TYPE_17__ FUNC_6 (TYPE_6__*,void*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (TYPE_6__*) ;

__attribute__((used)) static HPDF_STATUS
FUNC_16 (HPDF_FontDef VAR_3,
              HPDF_Stream VAR_4,
              HPDF_BOOL VAR_5,
              HPDF_UINT VAR_6)
{
    HPDF_TTFontDefAttr VAR_7 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_STATUS VAR_8;
    HPDF_TTFTable *VAR_9;

    FUNC_2 ((" HPDF_TTFontDef_LoadFontData\n"));

    VAR_7->stream = VAR_4;
    VAR_7->embedding = VAR_5;

    if ((VAR_8 = FUNC_5 (VAR_4, VAR_6, VAR_1)) != VAR_0)
        return VAR_8;

    if ((VAR_8 = FUNC_7 (VAR_3)) != VAR_0)
        return VAR_8;





    if ((VAR_8 = FUNC_9 (VAR_3)) != VAR_0)
        return VAR_8;

    if ((VAR_8 = FUNC_13 (VAR_3)) != VAR_0)
        return VAR_8;

    if ((VAR_8 = FUNC_10 (VAR_3)) != VAR_0)
        return VAR_8;

    if ((VAR_8 = FUNC_8 (VAR_3)) != VAR_0)
        return VAR_8;

    if ((VAR_8 = FUNC_11 (VAR_3)) != VAR_0)
        return VAR_8;

    if ((VAR_8 = FUNC_12 (VAR_3)) != VAR_0)
        return VAR_8;

    if ((VAR_8 = FUNC_14 (VAR_3)) != VAR_0)
        return VAR_8;

    if ((VAR_8 = FUNC_15 (VAR_3)) != VAR_0)
        return VAR_8;

    VAR_9 = FUNC_1 (VAR_3, "glyf");
    if (!VAR_9)
        return FUNC_3 (VAR_3->error, VAR_2, 4);

    VAR_7->glyph_tbl.base_offset = VAR_9->offset;
    VAR_3->cap_height =
                (HPDF_UINT16)FUNC_6 (VAR_3, (HPDF_UINT16)'H').top;
    VAR_3->x_height =
                (HPDF_UINT16)FUNC_6 (VAR_3, (HPDF_UINT16)'x').top;
    VAR_3->missing_width = (HPDF_INT16)((HPDF_UINT32)VAR_7->h_metric[0].advance_width * 1000 /
                VAR_7->header.units_per_em);

    FUNC_2 ((" fontdef->cap_height=%d\n", VAR_3->cap_height));
    FUNC_2 ((" fontdef->x_height=%d\n", VAR_3->x_height));
    FUNC_2 ((" fontdef->missing_width=%d\n", VAR_3->missing_width));

    if (!VAR_5) {
        FUNC_4 (VAR_7->stream);
        VAR_7->stream = ((void*)0);
    }

    return VAR_0;
}
