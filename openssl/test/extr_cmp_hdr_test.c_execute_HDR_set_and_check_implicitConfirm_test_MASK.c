
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hdr; } ;
typedef TYPE_1__ CMP_HDR_TEST_FIXTURE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(CMP_HDR_TEST_FIXTURE
                                               * VAR_0)
{
    return FUNC_0(FUNC_2(VAR_0->hdr))
        && FUNC_1(FUNC_3(VAR_0->hdr))
        && FUNC_1(FUNC_2(VAR_0->hdr));
}
