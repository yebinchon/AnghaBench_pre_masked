
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_9__ {TYPE_1__* sender; } ;
struct TYPE_8__ {TYPE_4__* hdr; } ;
struct TYPE_7__ {int directoryName; } ;
struct TYPE_6__ {TYPE_2__ d; int type; } ;
typedef TYPE_3__ CMP_HDR_TEST_FIXTURE ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_7(CMP_HDR_TEST_FIXTURE *VAR_1)
{
    X509_NAME *VAR_2 = FUNC_5();

    if (!FUNC_1(VAR_2))
        return 0;

    FUNC_2(VAR_2, "CN", "A common sender name");
    if (!FUNC_0(FUNC_6(VAR_1->hdr, VAR_2), 1))
        return 0;
    if (!FUNC_0(VAR_1->hdr->sender->type, VAR_0))
        return 0;

    if (!FUNC_0(
            FUNC_3(VAR_1->hdr->sender->d.directoryName, VAR_2), 0))
        return 0;

    FUNC_4(VAR_2);
    return 1;
}
