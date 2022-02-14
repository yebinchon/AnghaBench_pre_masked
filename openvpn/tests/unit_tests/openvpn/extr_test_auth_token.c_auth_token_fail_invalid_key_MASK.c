
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int auth_token_key; } ;
struct TYPE_8__ {TYPE_1__ opt; int auth_token; } ;
struct TYPE_7__ {int password; } ;
struct test_context {int session; TYPE_3__ multi; TYPE_2__ up; int kt; } ;
struct key {int dummy; } ;
typedef int key ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (int *,struct key*,int *,int,char*) ;
 int FUNC_4 (struct key*,char,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,int *) ;

__attribute__((used)) static void
FUNC_7(void **VAR_1)
{
    struct test_context *VAR_2 = (struct test_context *) *VAR_1;

    FUNC_2(&VAR_2->up, &VAR_2->multi);
    FUNC_5(VAR_2->up.password, VAR_2->multi.auth_token);
    FUNC_0(FUNC_6(&VAR_2->up, &VAR_2->multi, &VAR_2->session),
                     VAR_0);


    struct key VAR_3;
    FUNC_4(&VAR_3, '1', sizeof(VAR_3));
    FUNC_1(&VAR_2->multi.opt.auth_token_key);
    FUNC_3(&VAR_2->multi.opt.auth_token_key, &VAR_3, &VAR_2->kt, 0, "TEST");

    FUNC_0(FUNC_6(&VAR_2->up, &VAR_2->multi, &VAR_2->session), 0);


    FUNC_4(&VAR_3, 0, sizeof(VAR_3));
    FUNC_1(&VAR_2->multi.opt.auth_token_key);
    FUNC_3(&VAR_2->multi.opt.auth_token_key, &VAR_3, &VAR_2->kt, 0, "TEST");
    FUNC_0(FUNC_6(&VAR_2->up, &VAR_2->multi, &VAR_2->session),
                     VAR_0);

}
