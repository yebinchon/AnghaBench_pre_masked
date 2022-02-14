
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** curctx; } ;
typedef TYPE_2__ opj_mqc_t ;
struct TYPE_6__ {scalar_t__ mps; } ;
typedef scalar_t__ OPJ_UINT32 ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(opj_mqc_t *VAR_0, OPJ_UINT32 VAR_1)
{
    if ((*VAR_0->curctx)->mps == VAR_1) {
        FUNC_1(VAR_0);
    } else {
        FUNC_0(VAR_0);
    }
}
