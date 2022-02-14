
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct test_context* opt; } ;
struct TYPE_4__ {int auth_token_key; } ;
struct TYPE_6__ {TYPE_1__ opt; } ;
struct test_context {TYPE_2__ session; TYPE_3__ multi; } ;


 int FUNC_0 (struct test_context*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_3(void **VAR_0)
{
    struct test_context *VAR_1 = (struct test_context *) *VAR_0;

    FUNC_1(&VAR_1->multi.opt.auth_token_key);
    FUNC_2(&VAR_1->multi);

    FUNC_0(VAR_1->session.opt);
    FUNC_0(VAR_1);

    return 0;
}
