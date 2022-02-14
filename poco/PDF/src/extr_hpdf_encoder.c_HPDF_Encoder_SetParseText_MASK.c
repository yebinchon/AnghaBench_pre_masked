
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int byte_type; int len; scalar_t__ index; int const* text; } ;
typedef int HPDF_UINT ;
typedef TYPE_1__ HPDF_ParseText_Rec ;
typedef int HPDF_Encoder ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (HPDF_Encoder VAR_1,
                            HPDF_ParseText_Rec *VAR_2,
                            const HPDF_BYTE *VAR_3,
                            HPDF_UINT VAR_4)
{
    FUNC_0 ((" HPDF_CMapEncoder_SetParseText\n"));
    FUNC_1 (VAR_1);

    VAR_2->text = VAR_3;
    VAR_2->index = 0;
    VAR_2->len = VAR_4;
    VAR_2->byte_type = VAR_0;
}
