
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* test_case_name; struct TYPE_7__* expected_ctx; } ;
typedef TYPE_1__ SSL_TEST_CTX_TEST_FIXTURE ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static SSL_TEST_CTX_TEST_FIXTURE *FUNC_4(const char *const VAR_0)
{
    SSL_TEST_CTX_TEST_FIXTURE *VAR_1;

    if (!FUNC_3(VAR_1 = FUNC_1(sizeof(*VAR_1))))
        return ((void*)0);
    VAR_1->test_case_name = VAR_0;
    if (!FUNC_3(VAR_1->expected_ctx = FUNC_2())) {
        FUNC_0(VAR_1);
        return ((void*)0);
    }
    return VAR_1;
}
