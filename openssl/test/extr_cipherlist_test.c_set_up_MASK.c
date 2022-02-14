
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* test_case_name; struct TYPE_7__* client; struct TYPE_7__* server; } ;
typedef TYPE_1__ CIPHERLIST_TEST_FIXTURE ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static CIPHERLIST_TEST_FIXTURE *FUNC_6(const char *const VAR_0)
{
    CIPHERLIST_TEST_FIXTURE *VAR_1;

    if (!FUNC_2(VAR_1 = FUNC_0(sizeof(*VAR_1))))
        return ((void*)0);
    VAR_1->test_case_name = VAR_0;
    if (!FUNC_2(VAR_1->server = FUNC_1(FUNC_4()))
            || !FUNC_2(VAR_1->client = FUNC_1(FUNC_3()))) {
        FUNC_5(VAR_1);
        return ((void*)0);
    }
    return VAR_1;
}
