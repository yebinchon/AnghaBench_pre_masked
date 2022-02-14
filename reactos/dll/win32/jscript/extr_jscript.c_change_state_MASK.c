
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ site; TYPE_1__* ctx; } ;
struct TYPE_4__ {scalar_t__ state; } ;
typedef scalar_t__ SCRIPTSTATE ;
typedef TYPE_2__ JScript ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(JScript *VAR_0, SCRIPTSTATE VAR_1)
{
    if(VAR_0->ctx->state == VAR_1)
        return;

    VAR_0->ctx->state = VAR_1;
    if(VAR_0->site)
        FUNC_0(VAR_0->site, VAR_1);
}
