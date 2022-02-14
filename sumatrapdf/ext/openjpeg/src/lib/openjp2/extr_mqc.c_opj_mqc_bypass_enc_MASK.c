
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ct; int* bp; scalar_t__ c; } ;
typedef TYPE_1__ opj_mqc_t ;
typedef int OPJ_UINT32 ;
typedef int OPJ_BYTE ;


 int VAR_0 ;

void FUNC_0(opj_mqc_t *VAR_1, OPJ_UINT32 VAR_2)
{
    if (VAR_1->ct == VAR_0) {
        VAR_1->ct = 8;
    }
    VAR_1->ct--;
    VAR_1->c = VAR_1->c + (VAR_2 << VAR_1->ct);
    if (VAR_1->ct == 0) {
        *VAR_1->bp = (OPJ_BYTE)VAR_1->c;
        VAR_1->ct = 8;

        if (*VAR_1->bp == 0xff) {
            VAR_1->ct = 7;
        }
        VAR_1->bp++;
        VAR_1->c = 0;
    }
}
