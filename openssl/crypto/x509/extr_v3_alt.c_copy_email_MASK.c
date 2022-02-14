
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;
struct TYPE_9__ {scalar_t__ flags; int * subject_req; int * subject_cert; } ;
typedef TYPE_2__ X509V3_CTX ;
struct TYPE_8__ {int * ia5; } ;
struct TYPE_10__ {int type; TYPE_1__ d; } ;
typedef int GENERAL_NAMES ;
typedef TYPE_3__ GENERAL_NAME ;
typedef int ASN1_IA5STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,int) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_13(X509V3_CTX *VAR_6, GENERAL_NAMES *VAR_7, int VAR_8)
{
    X509_NAME *VAR_9;
    ASN1_IA5STRING *VAR_10 = ((void*)0);
    X509_NAME_ENTRY *VAR_11;
    GENERAL_NAME *VAR_12 = ((void*)0);
    int VAR_13 = -1;

    if (VAR_6 != ((void*)0) && VAR_6->flags == VAR_0)
        return 1;
    if (VAR_6 == ((void*)0)
        || (VAR_6->subject_cert == ((void*)0) && VAR_6->subject_req == ((void*)0))) {
        FUNC_4(VAR_4, VAR_5);
        goto err;
    }

    if (VAR_6->subject_cert)
        VAR_9 = FUNC_11(VAR_6->subject_cert);
    else
        VAR_9 = FUNC_10(VAR_6->subject_req);


    while ((VAR_13 = FUNC_9(VAR_9,
                                           VAR_3, VAR_13)) >= 0) {
        VAR_11 = FUNC_8(VAR_9, VAR_13);
        VAR_10 = FUNC_1(FUNC_6(VAR_11));
        if (VAR_8) {
            FUNC_7(VAR_9, VAR_13);
            FUNC_5(VAR_11);
            VAR_13--;
        }
        if (VAR_10 == ((void*)0) || (VAR_12 = FUNC_3()) == ((void*)0)) {
            FUNC_4(VAR_4, VAR_1);
            goto err;
        }
        VAR_12->d.ia5 = VAR_10;
        VAR_10 = ((void*)0);
        VAR_12->type = VAR_2;
        if (!FUNC_12(VAR_7, VAR_12)) {
            FUNC_4(VAR_4, VAR_1);
            goto err;
        }
        VAR_12 = ((void*)0);
    }

    return 1;

 err:
    FUNC_2(VAR_12);
    FUNC_0(VAR_10);
    return 0;

}
