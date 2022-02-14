
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* test_case_name; struct TYPE_8__* hdr; struct TYPE_8__* cmp_ctx; } ;
typedef TYPE_1__ CMP_HDR_TEST_FIXTURE ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static CMP_HDR_TEST_FIXTURE *FUNC_5(const char *const VAR_0)
{
    CMP_HDR_TEST_FIXTURE *VAR_1;

    if (!FUNC_3(VAR_1 = FUNC_0(sizeof(*VAR_1))))
        return ((void*)0);
    VAR_1->test_case_name = VAR_0;
    if (!FUNC_3(VAR_1->cmp_ctx = FUNC_1()))
        goto err;
    if (!FUNC_3(VAR_1->hdr = FUNC_2()))
        goto err;
    return VAR_1;

 err:
    FUNC_4(VAR_1);
    return ((void*)0);
}
