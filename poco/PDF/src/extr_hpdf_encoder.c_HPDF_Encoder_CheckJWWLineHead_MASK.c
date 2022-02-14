
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ const* jww_line_head; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ attr; } ;
typedef scalar_t__ HPDF_UINT16 ;
typedef size_t HPDF_UINT ;
typedef TYPE_1__* HPDF_Encoder ;
typedef TYPE_2__* HPDF_CMapEncoderAttr ;
typedef int HPDF_BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;

HPDF_BOOL
FUNC_2 (HPDF_Encoder VAR_4,
                                const HPDF_UINT16 VAR_5)
{
    HPDF_CMapEncoderAttr VAR_6;
    HPDF_UINT VAR_7;

    FUNC_1 ((" HPDF_Encoder_CheckJWWLineHead\n"));

    if (!FUNC_0 (VAR_4))
        return VAR_1;

    if (VAR_4->type != VAR_0)
        return VAR_1;

    VAR_6 = (HPDF_CMapEncoderAttr)VAR_4->attr;

    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        if (VAR_5 == VAR_6->jww_line_head[VAR_7])
            return VAR_3;

        if (VAR_6->jww_line_head[VAR_7] == 0)
            return VAR_1;
    }

    return VAR_1;
}
