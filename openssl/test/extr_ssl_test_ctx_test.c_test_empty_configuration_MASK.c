
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* test_section; TYPE_1__* expected_ctx; } ;
struct TYPE_3__ {int expected_result; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
    FUNC_1();
    if (VAR_1 == ((void*)0))
        return 0;
    VAR_1->test_section = "ssltest_default";
    VAR_1->expected_ctx->expected_result = VAR_0;
    FUNC_0();
    return VAR_2;
}
