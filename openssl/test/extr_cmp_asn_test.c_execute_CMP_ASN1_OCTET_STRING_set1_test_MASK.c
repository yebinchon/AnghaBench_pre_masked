
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expected; int src_string; int tgt_string; } ;
typedef TYPE_1__ CMP_ASN_TEST_FIXTURE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(CMP_ASN_TEST_FIXTURE *
                                                   VAR_0)
{
    if (!FUNC_1(VAR_0->expected,
                     FUNC_2(&VAR_0->tgt_string,
                                                     VAR_0->src_string)))
        return 0;
    if (VAR_0->expected != 0)
        return FUNC_1(0, FUNC_0(VAR_0->tgt_string,
                                                    VAR_0->src_string));
    return 1;
}
