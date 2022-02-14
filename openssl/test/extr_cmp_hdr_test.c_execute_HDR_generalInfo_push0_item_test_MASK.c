
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int generalInfo; } ;
struct TYPE_4__ {TYPE_2__* hdr; } ;
typedef int OSSL_CMP_ITAV ;
typedef TYPE_1__ CMP_HDR_TEST_FIXTURE ;


 int * FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int * FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(CMP_HDR_TEST_FIXTURE *VAR_0)
{
    OSSL_CMP_ITAV *VAR_1 = FUNC_0();

    if (!FUNC_2(VAR_1))
        return 0;

    if (!FUNC_1(
            FUNC_4(VAR_0->hdr, VAR_1), 1))
        return 0;
    if (!FUNC_3(VAR_1 == FUNC_5(
            VAR_0->hdr->generalInfo, 0)))
        return 0;

    return 1;
}
