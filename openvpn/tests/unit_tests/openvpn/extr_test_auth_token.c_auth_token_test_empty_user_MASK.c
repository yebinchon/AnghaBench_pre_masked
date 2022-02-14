
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* auth_token; } ;
struct TYPE_5__ {int password; int username; } ;
struct test_context {int session; TYPE_2__ multi; TYPE_1__ up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void **VAR_4)
{
    struct test_context *VAR_5 = (struct test_context *) *VAR_4;

    FUNC_0(VAR_5->up.username);
    VAR_3 = 0;

    FUNC_2(&VAR_5->up, &VAR_5->multi);
    FUNC_3(VAR_5->up.password, VAR_5->multi.auth_token);
    FUNC_1(FUNC_4(&VAR_5->up, &VAR_5->multi, &VAR_5->session),
                     VAR_1);

    VAR_3 = 100000;
    FUNC_1(FUNC_4(&VAR_5->up, &VAR_5->multi, &VAR_5->session),
                     VAR_1|VAR_0);
    FUNC_3(VAR_5->up.username, "test user name");

    VAR_3 = 0;
    FUNC_1(FUNC_4(&VAR_5->up, &VAR_5->multi, &VAR_5->session),
                     VAR_1|VAR_2);

    FUNC_3(VAR_5->up.username, "test user name");
    VAR_3 = 100000;
    FUNC_1(FUNC_4(&VAR_5->up, &VAR_5->multi, &VAR_5->session),
                     VAR_1|VAR_0|VAR_2);

    FUNC_5(VAR_5->up.password);
    FUNC_1(FUNC_4(&VAR_5->up, &VAR_5->multi, &VAR_5->session),
                     0);
}
