
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ** unicode_map; } ;
struct TYPE_4__ {int attr; } ;
typedef int HPDF_UNICODE ;
typedef int HPDF_UINT16 ;
typedef TYPE_1__* HPDF_Encoder ;
typedef TYPE_2__* HPDF_CMapEncoderAttr ;
typedef size_t HPDF_BYTE ;



HPDF_UNICODE
FUNC_0 (HPDF_Encoder VAR_0,
                             HPDF_UINT16 VAR_1)
{
    HPDF_BYTE VAR_2 = (HPDF_BYTE)VAR_1;
    HPDF_BYTE VAR_3 = (HPDF_BYTE)(VAR_1 >> 8);
    HPDF_CMapEncoderAttr VAR_4 = (HPDF_CMapEncoderAttr)VAR_0->attr;

    return VAR_4->unicode_map[VAR_2][VAR_3];
}
