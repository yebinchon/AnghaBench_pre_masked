
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int** unicode_map; void* code_space_range; void* notdef_range; void* cmap_range; int writing_mode; } ;
struct TYPE_8__ {TYPE_1__* error; int mmgr; TYPE_3__* attr; } ;
struct TYPE_7__ {int error_no; } ;
typedef int HPDF_UINT ;
typedef int HPDF_STATUS ;
typedef TYPE_2__* HPDF_Encoder ;
typedef int HPDF_CMapEncoderAttr_Rec ;
typedef TYPE_3__* HPDF_CMapEncoderAttr ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,int) ;
 int VAR_2 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int VAR_4 ;

HPDF_STATUS
FUNC_4 (HPDF_Encoder VAR_5)
{
    HPDF_CMapEncoderAttr VAR_6;
    HPDF_UINT VAR_7;
    HPDF_UINT VAR_8;

    FUNC_3 ((" HPDF_CMapEncoder_InitAttr\n"));

    if (VAR_5->attr)
        return VAR_2;

    VAR_6 = FUNC_0(VAR_5->mmgr,
            sizeof(HPDF_CMapEncoderAttr_Rec));

    if (!VAR_6)
        return VAR_5->error->error_no;

    FUNC_2 (VAR_6, 0, sizeof(HPDF_CMapEncoderAttr_Rec));
    VAR_5->attr = VAR_6;

    VAR_6->writing_mode = VAR_4;

    for (VAR_7 = 0; VAR_7 <= 255; VAR_7++) {
        for (VAR_8 = 0; VAR_8 <= 255; VAR_8++) {

            VAR_6->unicode_map[VAR_7][VAR_8] = 0x25A1;
        }
    }


    VAR_6->cmap_range = FUNC_1 (VAR_5->mmgr,
                VAR_1);
    if (!VAR_6->cmap_range)
        return VAR_5->error->error_no;

    VAR_6->notdef_range = FUNC_1 (VAR_5->mmgr,
                VAR_0);
    if (!VAR_6->notdef_range)
        return VAR_5->error->error_no;

    VAR_6->code_space_range = FUNC_1 (VAR_5->mmgr,
                VAR_0);
    if (!VAR_6->code_space_range)
        return VAR_5->error->error_no;

    return VAR_3;
}
