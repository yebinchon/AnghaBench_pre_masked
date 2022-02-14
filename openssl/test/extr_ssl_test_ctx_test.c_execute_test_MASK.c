
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expected_ctx; int test_section; } ;
typedef TYPE_1__ SSL_TEST_CTX_TEST_FIXTURE ;
typedef int SSL_TEST_CTX ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(SSL_TEST_CTX_TEST_FIXTURE *VAR_1)
{
    int VAR_2 = 0;
    SSL_TEST_CTX *VAR_3;

    if (!FUNC_2(VAR_3 = FUNC_0(VAR_0, VAR_1->test_section))
            || !FUNC_3(VAR_3, VAR_1->expected_ctx))
        goto err;

    VAR_2 = 1;
 err:
    FUNC_1(VAR_3);
    return VAR_2;
}
