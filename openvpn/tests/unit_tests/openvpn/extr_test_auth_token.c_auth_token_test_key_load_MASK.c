
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int auth_token_key; } ;
struct TYPE_6__ {TYPE_1__ opt; } ;
struct TYPE_5__ {int password; } ;
struct test_context {int session; TYPE_3__ multi; TYPE_2__ up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(void **VAR_4)
{
    struct test_context *VAR_5 = (struct test_context *) *VAR_4;

    FUNC_3(&VAR_5->multi.opt.auth_token_key);
    FUNC_2(&VAR_5->multi.opt.auth_token_key, VAR_0, VAR_3);
    FUNC_4(VAR_5->up.password, VAR_2);
    FUNC_1(FUNC_5(&VAR_5->up, &VAR_5->multi, &VAR_5->session));

    FUNC_3(&VAR_5->multi.opt.auth_token_key);
    FUNC_2(&VAR_5->multi.opt.auth_token_key, VAR_0, VAR_1);
    FUNC_0(FUNC_5(&VAR_5->up, &VAR_5->multi, &VAR_5->session));
}
