
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ctxs; } ;
typedef TYPE_1__ opj_mqc_t ;
typedef size_t OPJ_UINT32 ;


 size_t VAR_0 ;
 int VAR_1 ;

void FUNC_0(opj_mqc_t *VAR_2)
{
    OPJ_UINT32 VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        VAR_2->ctxs[VAR_3] = VAR_1;
    }
}
