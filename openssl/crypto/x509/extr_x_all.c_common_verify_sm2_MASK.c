
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int req_info; TYPE_5__* sm2_id; TYPE_6__* signature; } ;
typedef TYPE_2__ X509_REQ ;
struct TYPE_16__ {scalar_t__ type; int flags; scalar_t__ length; int data; } ;
struct TYPE_13__ {int cert_info; TYPE_5__* sm2_id; TYPE_6__ signature; } ;
typedef TYPE_3__ X509 ;
struct TYPE_15__ {int length; int data; } ;
struct TYPE_14__ {TYPE_1__* ameth; } ;
struct TYPE_11__ {scalar_t__ pkey_id; } ;
typedef int EVP_PKEY_CTX ;
typedef TYPE_4__ EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int ASN1_VALUE ;
typedef TYPE_5__ ASN1_OCTET_STRING ;
typedef TYPE_6__ ASN1_BIT_STRING ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned char**,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,size_t,unsigned char*,int) ;
 int FUNC_3 (int *,int *,int const*,int *,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_11 (int) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (unsigned char*,size_t) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(void *VAR_12, EVP_PKEY *VAR_13,
                             int VAR_14, int VAR_15, int VAR_16)
{
    X509 *VAR_17 = ((void*)0);
    X509_REQ *VAR_18 = ((void*)0);
    EVP_MD_CTX *VAR_19 = ((void*)0);
    unsigned char *VAR_20 = ((void*)0);
    int VAR_21 = -1, VAR_22 = 0;
    size_t VAR_23 = 0;
    EVP_PKEY_CTX *VAR_24 = ((void*)0);
    const EVP_MD *VAR_25 = FUNC_12(VAR_14);
    ASN1_BIT_STRING *VAR_26 = ((void*)0);
    ASN1_OCTET_STRING *VAR_27 = ((void*)0);
    ASN1_VALUE *VAR_28 = ((void*)0);

    if (VAR_25 == ((void*)0)) {
        FUNC_14(VAR_10,
                VAR_1);
        goto err;
    }

    if (VAR_13 == ((void*)0)) {
        FUNC_14(VAR_10, VAR_6);
        return -1;
    }

    if (VAR_16 == 1) {
        VAR_18 = (X509_REQ *)VAR_12;
        VAR_26 = VAR_18->signature;
        VAR_27 = VAR_18->sm2_id;
        VAR_28 = (ASN1_VALUE *)&VAR_18->req_info;
    } else {
        VAR_17 = (X509 *)VAR_12;
        VAR_26 = &VAR_17->signature;
        VAR_27 = VAR_17->sm2_id;
        VAR_28 = (ASN1_VALUE *)&VAR_17->cert_info;
    }

    if (VAR_26->type == VAR_8 && VAR_26->flags & 0x7) {
        FUNC_14(VAR_10, VAR_0);
        return -1;
    }

    VAR_19 = FUNC_5();
    if (VAR_19 == ((void*)0)) {
        FUNC_14(VAR_10, VAR_5);
        goto err;
    }


    if (FUNC_11(VAR_15) != VAR_13->ameth->pkey_id) {
        FUNC_14(VAR_10, VAR_2);
        goto err;
    }

    if (!FUNC_10(VAR_13, VAR_7)) {
        FUNC_14(VAR_10, VAR_3);
        VAR_21 = 0;
        goto err;
    }
    VAR_24 = FUNC_8(VAR_13, ((void*)0));
    if (VAR_24 == ((void*)0)) {
        FUNC_14(VAR_10, VAR_3);
        VAR_21 = 0;
        goto err;
    }

    if (VAR_27 != ((void*)0)
            && FUNC_9(VAR_24, VAR_27->data, VAR_27->length) != 1) {
        FUNC_14(VAR_10, VAR_3);
        VAR_21 = 0;
        goto err;
    }
    FUNC_6(VAR_19, VAR_24);

    if (!FUNC_3(VAR_19, ((void*)0), VAR_25, ((void*)0), VAR_13)) {
        FUNC_14(VAR_10, VAR_3);
        VAR_21 = 0;
        goto err;
    }

    VAR_22 = FUNC_1(VAR_28, &VAR_20,
                        VAR_16 == 1 ?
                        FUNC_0(VAR_11) :
                        FUNC_0(VAR_9));
    if (VAR_22 <= 0) {
        FUNC_14(VAR_10, VAR_4);
        goto err;
    }
    if (VAR_20 == ((void*)0)) {
        FUNC_14(VAR_10, VAR_5);
        goto err;
    }
    VAR_23 = VAR_22;

    VAR_21 = FUNC_2(VAR_19, VAR_26->data,
                           (size_t)VAR_26->length, VAR_20, VAR_22);
    if (VAR_21 <= 0) {
        FUNC_14(VAR_10, VAR_3);
        goto err;
    }
    VAR_21 = 1;
 err:
    FUNC_13(VAR_20, VAR_23);
    FUNC_4(VAR_19);
    FUNC_7(VAR_24);
    return VAR_21;
}
