
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * login; } ;
struct TYPE_5__ {TYPE_1__ srp_ctx; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(SSL *VAR_0, unsigned int VAR_1)
{
    FUNC_0(VAR_0->srp_ctx.login);
    VAR_0->srp_ctx.login = ((void*)0);

    return 1;
}
