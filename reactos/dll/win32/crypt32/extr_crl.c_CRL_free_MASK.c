
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pCrlInfo; int pbCrlEncoded; } ;
struct TYPE_4__ {TYPE_1__ ctx; } ;
typedef TYPE_2__ crl_t ;
typedef int context_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(context_t *VAR_0)
{
    crl_t *VAR_1 = (crl_t*)VAR_0;

    FUNC_0(VAR_1->ctx.pbCrlEncoded);
    FUNC_1(VAR_1->ctx.pCrlInfo);
}
