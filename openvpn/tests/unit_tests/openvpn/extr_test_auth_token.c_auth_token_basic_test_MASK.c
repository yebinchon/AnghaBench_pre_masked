
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
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_4(void **VAR_1)
{
    struct test_context *VAR_2 = (struct test_context *) *VAR_1;

    FUNC_1(&VAR_2->up, &VAR_2->multi);
    FUNC_2(VAR_2->up.password, VAR_2->multi.auth_token);
    FUNC_0(FUNC_3(&VAR_2->up, &VAR_2->multi, &VAR_2->session),
                     VAR_0);
}
