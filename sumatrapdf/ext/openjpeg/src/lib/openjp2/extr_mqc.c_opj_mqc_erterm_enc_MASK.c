
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ct; int c; int* bp; } ;
typedef TYPE_1__ opj_mqc_t ;
typedef scalar_t__ OPJ_INT32 ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(opj_mqc_t *VAR_0)
{
    OPJ_INT32 VAR_1 = (OPJ_INT32)(11 - VAR_0->ct + 1);

    while (VAR_1 > 0) {
        VAR_0->c <<= VAR_0->ct;
        VAR_0->ct = 0;
        FUNC_0(VAR_0);
        VAR_1 -= (OPJ_INT32)VAR_0->ct;
    }

    if (*VAR_0->bp != 0xff) {
        FUNC_0(VAR_0);
    }
}
