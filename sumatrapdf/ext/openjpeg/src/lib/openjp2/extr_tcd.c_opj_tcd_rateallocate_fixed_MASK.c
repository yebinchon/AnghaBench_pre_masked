
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* tcp; } ;
typedef TYPE_2__ opj_tcd_t ;
struct TYPE_5__ {scalar_t__ numlayers; } ;
typedef scalar_t__ OPJ_UINT32 ;


 int FUNC_0 (TYPE_2__*,scalar_t__,int) ;

void FUNC_1(opj_tcd_t *VAR_0)
{
    OPJ_UINT32 VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->tcp->numlayers; VAR_1++) {
        FUNC_0(VAR_0, VAR_1, 1);
    }
}
