
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int auth_token_key; } ;
struct TYPE_8__ {int auth_token; TYPE_1__ opt; } ;
struct TYPE_7__ {int password; } ;
struct test_context {int session; TYPE_3__ multi; TYPE_2__ up; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(void **VAR_4)
{
    struct test_context *VAR_5 = (struct test_context *) *VAR_4;

    VAR_1 = 0x5c331e9c;

    VAR_5->multi.auth_token = FUNC_6(VAR_3);

    FUNC_3(&VAR_5->multi.opt.auth_token_key);
    FUNC_2(&VAR_5->multi.opt.auth_token_key, VAR_0, VAR_2);


    FUNC_8(VAR_5->multi.auth_token);

    FUNC_4(&VAR_5->up, &VAR_5->multi);

    FUNC_0(VAR_3, VAR_5->multi.auth_token);

    FUNC_5(VAR_5->up.password, VAR_5->multi.auth_token);
    FUNC_1(FUNC_7(&VAR_5->up, &VAR_5->multi, &VAR_5->session));
}
