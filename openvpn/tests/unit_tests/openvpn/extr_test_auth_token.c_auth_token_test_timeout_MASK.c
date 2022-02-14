
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* opt; } ;
struct TYPE_9__ {scalar_t__ auth_token_lifetime; } ;
struct TYPE_11__ {TYPE_2__ opt; int auth_token; int * auth_token_initial; } ;
struct TYPE_10__ {int password; } ;
struct test_context {TYPE_5__ session; TYPE_4__ multi; TYPE_3__ up; } ;
struct TYPE_8__ {int renegotiate_seconds; int auth_token_lifetime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_6(void **VAR_3)
{
    struct test_context *VAR_4 = (struct test_context *) *VAR_3;

    VAR_2 = 100000;
    FUNC_2(&VAR_4->up, &VAR_4->multi);
    FUNC_3(VAR_4->up.password, VAR_4->multi.auth_token);


    FUNC_0(FUNC_5(&VAR_4->up, &VAR_4->multi, &VAR_4->session),
                     VAR_1);


    VAR_2 = 100000 - 100;
    FUNC_0(FUNC_5(&VAR_4->up, &VAR_4->multi, &VAR_4->session),
                     VAR_1|VAR_0);


    VAR_2 = 100000 + 2*VAR_4->session.opt->renegotiate_seconds - 20;
    FUNC_0(FUNC_5(&VAR_4->up, &VAR_4->multi, &VAR_4->session),
                     VAR_1);


    VAR_2 = 100000 + 2*VAR_4->session.opt->renegotiate_seconds + 20;
    FUNC_0(FUNC_5(&VAR_4->up, &VAR_4->multi, &VAR_4->session),
                     VAR_1|VAR_0);


    VAR_4->multi.auth_token_initial = FUNC_4(VAR_4->up.password);
    FUNC_0(FUNC_5(&VAR_4->up, &VAR_4->multi, &VAR_4->session),
                     VAR_1);


    VAR_2 = 100000 + VAR_4->session.opt->auth_token_lifetime + 1;
    FUNC_0(FUNC_5(&VAR_4->up, &VAR_4->multi, &VAR_4->session),
                     VAR_1|VAR_0);

    FUNC_1(VAR_4->multi.auth_token_initial);
    VAR_4->multi.auth_token_initial = ((void*)0);


    VAR_2 = 100000;
    while (VAR_2 < 100000 + VAR_4->session.opt->auth_token_lifetime + 1)
    {
        FUNC_0(FUNC_5(&VAR_4->up, &VAR_4->multi, &VAR_4->session),
                         VAR_1);
        FUNC_2(&VAR_4->up, &VAR_4->multi);
        FUNC_3(VAR_4->up.password, VAR_4->multi.auth_token);
        VAR_2 += VAR_4->session.opt->renegotiate_seconds;
    }


    FUNC_0(FUNC_5(&VAR_4->up, &VAR_4->multi, &VAR_4->session),
                     VAR_1|VAR_0);
    VAR_4->multi.opt.auth_token_lifetime = 0;


    FUNC_0(FUNC_5(&VAR_4->up, &VAR_4->multi, &VAR_4->session),
                     VAR_1);
}
