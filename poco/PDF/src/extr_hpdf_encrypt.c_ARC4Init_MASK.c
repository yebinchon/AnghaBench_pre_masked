
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__ idx2; scalar_t__ idx1; } ;
typedef int HPDF_UINT ;
typedef int HPDF_BYTE ;
typedef TYPE_1__ HPDF_ARC4_Ctx_Rec ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

void
FUNC_1 (HPDF_ARC4_Ctx_Rec *VAR_1,
                        const HPDF_BYTE *VAR_2,
                        HPDF_UINT VAR_3)
{
    HPDF_BYTE VAR_4[VAR_0];
    HPDF_UINT VAR_5;
    HPDF_UINT VAR_6 = 0;

    FUNC_0((" ARC4Init\n"));

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
        VAR_1->state[VAR_5] = (HPDF_BYTE)VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
        VAR_4[VAR_5] = VAR_2[VAR_5 % VAR_3];

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        HPDF_BYTE VAR_7;

        VAR_6 = (VAR_6 + VAR_1->state[VAR_5] + VAR_4[VAR_5]) % VAR_0;

        VAR_7 = VAR_1->state[VAR_5];
        VAR_1->state[VAR_5] = VAR_1->state[VAR_6];
        VAR_1->state[VAR_6] = VAR_7;
    }

    VAR_1->idx1 = 0;
    VAR_1->idx2 = 0;
}
