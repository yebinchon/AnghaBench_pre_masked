
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int pkistatus; int pkifailure; int text; int str; } ;
struct TYPE_13__ {scalar_t__ data; } ;
typedef TYPE_1__ OSSL_CMP_PKISI ;
typedef TYPE_2__ CMP_STATUS_TEST_FIXTURE ;
typedef TYPE_1__ ASN1_UTF8STRING ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_9 (int,int,int ) ;
 TYPE_1__* FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(CMP_STATUS_TEST_FIXTURE *VAR_1)
{
    OSSL_CMP_PKISI *VAR_2 = ((void*)0);
    int VAR_3;
    ASN1_UTF8STRING *VAR_4 = ((void*)0);
    int VAR_5 = 0, VAR_6;

    if (!FUNC_2(VAR_2 = FUNC_9(VAR_1->pkistatus,
                                               VAR_1->pkifailure,
                                               VAR_1->text)))
        goto end;

    VAR_3 = FUNC_7(VAR_2);
    if (!FUNC_1(VAR_1->pkistatus, VAR_3)
            || !FUNC_3(VAR_1->str, FUNC_4(VAR_3)))
        goto end;

    if (!FUNC_2(VAR_4 =
                  FUNC_10(FUNC_5(VAR_2),
                                           0))
            || !FUNC_3(VAR_1->text, (char *)VAR_4->data))
        goto end;

    if (!FUNC_1(VAR_1->pkifailure,
                     FUNC_6(VAR_2)))
        goto end;
    for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++)
        if (!FUNC_1((VAR_1->pkifailure >> VAR_6) & 1,
                         FUNC_8(VAR_2, VAR_6)))
            goto end;

    VAR_5 = 1;

 end:
    FUNC_0(VAR_2);
    return VAR_5;
}
