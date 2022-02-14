
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int auth_token; } ;
struct TYPE_5__ {int password; } ;
struct test_context {int session; TYPE_2__ multi; TYPE_1__ up; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void **VAR_3)
{
    struct test_context *VAR_4 = (struct test_context *) *VAR_3;

    VAR_1 = 0;

    VAR_4->multi.auth_token = FUNC_4(VAR_2);


    FUNC_6(VAR_4->multi.auth_token);

    FUNC_2(&VAR_4->up, &VAR_4->multi);

    FUNC_1(VAR_2, VAR_4->multi.auth_token);

    FUNC_3(VAR_4->up.password, VAR_4->multi.auth_token);
    FUNC_0(FUNC_5(&VAR_4->up, &VAR_4->multi, &VAR_4->session),
                     VAR_0);
}
