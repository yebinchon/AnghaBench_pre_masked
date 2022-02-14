
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ct; int* bp; scalar_t__ c; } ;
typedef TYPE_1__ opj_mqc_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef unsigned int OPJ_BYTE ;
typedef scalar_t__ OPJ_BOOL ;


 int FUNC_0 (int) ;

void FUNC_1(opj_mqc_t *VAR_0, OPJ_BOOL VAR_1)
{






    if (VAR_0->ct < 7 || (VAR_0->ct == 7 && (VAR_1 || VAR_0->bp[-1] != 0xff))) {
        OPJ_BYTE VAR_2 = 0;




        while (VAR_0->ct > 0) {
            VAR_0->ct--;
            VAR_0->c += (OPJ_UINT32)(VAR_2 << VAR_0->ct);
            VAR_2 = (OPJ_BYTE)(1U - VAR_2);
        }
        *VAR_0->bp = (OPJ_BYTE)VAR_0->c;

        VAR_0->bp++;
    } else if (VAR_0->ct == 7 && VAR_0->bp[-1] == 0xff) {

        FUNC_0(!VAR_1);
        VAR_0->bp --;
    } else if (VAR_0->ct == 8 && !VAR_1 &&
               VAR_0->bp[-1] == 0x7f && VAR_0->bp[-2] == 0xff) {




        VAR_0->bp -= 2;
    }

    FUNC_0(VAR_0->bp[-1] != 0xff);
}
