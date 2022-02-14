
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ src_string; scalar_t__ tgt_string; } ;
typedef TYPE_1__ CMP_ASN_TEST_FIXTURE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(CMP_ASN_TEST_FIXTURE *VAR_0)
{
    FUNC_0(VAR_0->src_string);
    if (VAR_0->tgt_string != VAR_0->src_string)
        FUNC_0(VAR_0->tgt_string);

    FUNC_1(VAR_0);
}
