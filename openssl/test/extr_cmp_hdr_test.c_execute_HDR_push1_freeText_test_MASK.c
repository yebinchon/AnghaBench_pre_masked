
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int freeText; } ;
struct TYPE_4__ {TYPE_2__* hdr; } ;
typedef TYPE_1__ CMP_HDR_TEST_FIXTURE ;
typedef int ASN1_UTF8STRING ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(CMP_HDR_TEST_FIXTURE *VAR_0)
{
    ASN1_UTF8STRING* VAR_1 = FUNC_3();

    if (!FUNC_5(VAR_1))
        return 0;

    if (!FUNC_1(VAR_1, "A free text", -1))
        return 0;

    if (!FUNC_4(
            FUNC_6(VAR_0->hdr, VAR_1), 1))
        return 0;
    if (!FUNC_4(FUNC_0(
            FUNC_7(VAR_0->hdr->freeText, 0), VAR_1), 0))
        return 0;

    FUNC_2(VAR_1);
    return 1;
}
