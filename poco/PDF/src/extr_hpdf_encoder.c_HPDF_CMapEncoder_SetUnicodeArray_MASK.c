
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int** unicode_map; } ;
struct TYPE_7__ {int attr; } ;
struct TYPE_6__ {int unicode; int code; } ;
typedef TYPE_1__ HPDF_UnicodeMap_Rec ;
typedef TYPE_2__* HPDF_Encoder ;
typedef TYPE_3__* HPDF_CMapEncoderAttr ;
typedef size_t HPDF_BYTE ;


 int FUNC_0 (char*) ;

void
FUNC_1 (HPDF_Encoder VAR_0,
                                   const HPDF_UnicodeMap_Rec *VAR_1)
{
    HPDF_CMapEncoderAttr VAR_2 = (HPDF_CMapEncoderAttr)VAR_0->attr;

    FUNC_0 ((" HPDF_CMapEncoder_SetUnicodeArray\n"));

    if (VAR_1 != ((void*)0))
        while (VAR_1->unicode != 0xffff) {
            HPDF_BYTE VAR_3 = (HPDF_BYTE)VAR_1->code;
            HPDF_BYTE VAR_4 = (HPDF_BYTE)(VAR_1->code >> 8);
            VAR_2->unicode_map[VAR_3][VAR_4] = VAR_1->unicode;
            VAR_1++;
        }
}
