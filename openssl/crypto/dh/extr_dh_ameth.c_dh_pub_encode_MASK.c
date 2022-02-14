
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int X509_PUBKEY ;
struct TYPE_16__ {scalar_t__ length; int data; } ;
struct TYPE_15__ {int pub_key; } ;
struct TYPE_12__ {TYPE_4__* dh; } ;
struct TYPE_14__ {TYPE_2__* ameth; TYPE_1__ pkey; } ;
struct TYPE_13__ {int pkey_id; } ;
typedef TYPE_3__ EVP_PKEY ;
typedef TYPE_4__ DH ;
typedef TYPE_5__ ASN1_STRING ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 () ;
 int * FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int *,int ,int,TYPE_5__*,unsigned char*,int) ;
 int FUNC_8 (int *,unsigned char**) ;
 scalar_t__ FUNC_9 (TYPE_3__ const*,TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_10(X509_PUBKEY *VAR_3, const EVP_PKEY *VAR_4)
{
    DH *VAR_5;
    int VAR_6;
    unsigned char *VAR_7 = ((void*)0);
    int VAR_8;
    ASN1_STRING *VAR_9;
    ASN1_INTEGER *VAR_10 = ((void*)0);

    VAR_5 = VAR_4->pkey.dh;

    VAR_9 = FUNC_2();
    if (VAR_9 == ((void*)0)) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }
    VAR_9->length = FUNC_9(VAR_4, VAR_5, &VAR_9->data);
    if (VAR_9->length <= 0) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }
    VAR_6 = VAR_2;

    VAR_10 = FUNC_3(VAR_5->pub_key, ((void*)0));
    if (VAR_10 == ((void*)0))
        goto err;

    VAR_8 = FUNC_8(VAR_10, &VAR_7);

    FUNC_0(VAR_10);

    if (VAR_8 <= 0) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }

    if (FUNC_7(VAR_3, FUNC_5(VAR_4->ameth->pkey_id),
                               VAR_6, VAR_9, VAR_7, VAR_8))
        return 1;

 err:
    FUNC_6(VAR_7);
    FUNC_1(VAR_9);

    return 0;
}
