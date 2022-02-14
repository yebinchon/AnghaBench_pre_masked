
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* test_case_name; } ;
typedef TYPE_1__ CMP_ASN_TEST_FIXTURE ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static CMP_ASN_TEST_FIXTURE *FUNC_2(const char *const VAR_0)
{
    CMP_ASN_TEST_FIXTURE *VAR_1;

    if (!FUNC_1(VAR_1 = FUNC_0(sizeof(*VAR_1))))
        return ((void*)0);
    VAR_1->test_case_name = VAR_0;
    return VAR_1;
}
