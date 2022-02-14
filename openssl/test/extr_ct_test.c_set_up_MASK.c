
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* test_case_name; unsigned long long epoch_time_in_ms; struct TYPE_9__* ctlog_store; } ;
typedef TYPE_1__ CT_TEST_FIXTURE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static CT_TEST_FIXTURE *FUNC_8(const char *const VAR_0)
{
    CT_TEST_FIXTURE *VAR_1 = ((void*)0);

    if (!FUNC_7(VAR_1 = FUNC_4(sizeof(*VAR_1))))
        goto end;
    VAR_1->test_case_name = VAR_0;
    VAR_1->epoch_time_in_ms = 1473269626000ULL;
    if (!FUNC_7(VAR_1->ctlog_store = FUNC_2())
            || !FUNC_6(
                    FUNC_1(VAR_1->ctlog_store), 1))
        goto end;
    return VAR_1;

end:
    if (VAR_1 != ((void*)0))
        FUNC_0(VAR_1->ctlog_store);
    FUNC_3(VAR_1);
    FUNC_5("Failed to setup");
    return ((void*)0);
}
