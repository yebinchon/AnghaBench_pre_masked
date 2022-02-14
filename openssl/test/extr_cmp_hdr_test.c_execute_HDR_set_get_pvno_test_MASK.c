
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hdr; } ;
typedef TYPE_1__ CMP_HDR_TEST_FIXTURE ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(CMP_HDR_TEST_FIXTURE *VAR_0)
{
    int VAR_1 = 77;

    if (!FUNC_0(FUNC_2(VAR_0->hdr, VAR_1), 1))
        return 0;
    if (!FUNC_0(FUNC_1(VAR_0->hdr), VAR_1))
        return 0;
    return 1;
}
