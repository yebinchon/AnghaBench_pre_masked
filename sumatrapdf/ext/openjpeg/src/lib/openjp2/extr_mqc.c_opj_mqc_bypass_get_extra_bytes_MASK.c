
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ct; int* bp; } ;
typedef TYPE_1__ opj_mqc_t ;
typedef int OPJ_UINT32 ;
typedef scalar_t__ OPJ_BOOL ;



OPJ_UINT32 FUNC_0(opj_mqc_t *VAR_0, OPJ_BOOL VAR_1)
{
    return (VAR_0->ct < 7 ||
            (VAR_0->ct == 7 && (VAR_1 || VAR_0->bp[-1] != 0xff))) ? 1 : 0;
}
