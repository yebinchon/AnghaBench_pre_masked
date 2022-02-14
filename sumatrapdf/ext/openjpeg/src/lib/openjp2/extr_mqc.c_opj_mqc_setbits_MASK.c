
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ c; scalar_t__ a; } ;
typedef TYPE_1__ opj_mqc_t ;
typedef scalar_t__ OPJ_UINT32 ;



__attribute__((used)) static void FUNC_0(opj_mqc_t *VAR_0)
{
    OPJ_UINT32 VAR_1 = VAR_0->c + VAR_0->a;
    VAR_0->c |= 0xffff;
    if (VAR_0->c >= VAR_1) {
        VAR_0->c -= 0x8000;
    }
}
