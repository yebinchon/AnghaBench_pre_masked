
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tls_options {int dummy; } ;
struct TYPE_13__ {int digest; } ;
struct TYPE_11__ {int auth_token_generate; int auth_token_lifetime; int auth_token_key; } ;
struct TYPE_12__ {TYPE_4__ opt; } ;
struct TYPE_10__ {int password; int username; } ;
struct TYPE_9__ {TYPE_1__* opt; } ;
struct test_context {TYPE_6__ kt; TYPE_5__ multi; TYPE_3__ up; TYPE_2__ session; } ;
struct key {int member_0; } ;
struct TYPE_8__ {int renegotiate_seconds; int auth_token_lifetime; } ;


 TYPE_6__ FUNC_0 () ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int *,struct key*,TYPE_6__*,int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(void **VAR_1)
{
    struct test_context *VAR_2 = FUNC_1(1, sizeof(*VAR_2));
    *VAR_1 = VAR_2;

    struct key VAR_3 = { 0 };

    VAR_2->kt = FUNC_0();
    if (!VAR_2->kt.digest)
    {
        return 0;
    }
    VAR_2->multi.opt.auth_token_generate = 1;
    VAR_2->multi.opt.auth_token_lifetime = 3000;

    VAR_2->session.opt = FUNC_1(1, sizeof(struct tls_options));
    VAR_2->session.opt->renegotiate_seconds = 120;
    VAR_2->session.opt->auth_token_lifetime = 3000;

    FUNC_3(VAR_2->up.username, "test user name");
    FUNC_3(VAR_2->up.password, "ignored");

    FUNC_2(&VAR_2->multi.opt.auth_token_key, &VAR_3, &VAR_2->kt, 0, "TEST");

    VAR_0 = 0;
    return 0;
}
