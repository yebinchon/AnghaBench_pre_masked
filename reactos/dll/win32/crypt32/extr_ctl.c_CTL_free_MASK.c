
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pCtlInfo; int pbCtlContext; int pbCtlEncoded; int hCryptMsg; } ;
struct TYPE_4__ {TYPE_1__ ctx; } ;
typedef TYPE_2__ ctl_t ;
typedef int context_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(context_t *VAR_0)
{
    ctl_t *VAR_1 = (ctl_t*)VAR_0;

    FUNC_1(VAR_1->ctx.hCryptMsg);
    FUNC_0(VAR_1->ctx.pbCtlEncoded);
    FUNC_0(VAR_1->ctx.pbCtlContext);
    FUNC_2(VAR_1->ctx.pCtlInfo);
}
