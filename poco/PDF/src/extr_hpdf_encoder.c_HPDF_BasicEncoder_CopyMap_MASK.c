
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * unicode_map; } ;
struct TYPE_4__ {scalar_t__ attr; } ;
typedef int HPDF_UNICODE ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_Encoder ;
typedef TYPE_2__* HPDF_BasicEncoderAttr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

void
FUNC_1 (HPDF_Encoder VAR_2,
                            const HPDF_UNICODE *VAR_3)
{
    HPDF_UINT VAR_4;
    HPDF_UNICODE* VAR_5 = ((HPDF_BasicEncoderAttr)VAR_2->attr)->unicode_map +
        VAR_0;

    FUNC_0((" HPDF_BasicEncoder_CopyMap\n"));

    for (VAR_4 = 0; VAR_4 <= VAR_1 -
            VAR_0; VAR_4++)
        *VAR_5++ = *VAR_3++;
}
