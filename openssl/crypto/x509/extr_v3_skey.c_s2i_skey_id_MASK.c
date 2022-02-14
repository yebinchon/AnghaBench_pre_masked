
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509_PUBKEY ;
typedef int X509V3_EXT_METHOD ;
struct TYPE_12__ {scalar_t__ flags; TYPE_4__* subject_cert; TYPE_2__* subject_req; } ;
typedef TYPE_5__ X509V3_CTX ;
struct TYPE_10__ {int * key; } ;
struct TYPE_11__ {TYPE_3__ cert_info; } ;
struct TYPE_8__ {int * pubkey; } ;
struct TYPE_9__ {TYPE_1__ req_info; } ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (unsigned char const*,int,unsigned char*,unsigned int*,int ,int *) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,unsigned char const**,int*,int *,int *) ;
 int * FUNC_7 (int *,TYPE_5__*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static ASN1_OCTET_STRING *FUNC_9(X509V3_EXT_METHOD *VAR_5,
                                      X509V3_CTX *VAR_6, char *VAR_7)
{
    ASN1_OCTET_STRING *VAR_8;
    X509_PUBKEY *VAR_9;
    const unsigned char *VAR_10;
    int VAR_11;
    unsigned char VAR_12[VAR_2];
    unsigned int VAR_13;

    if (FUNC_8(VAR_7, "hash"))
        return FUNC_7(VAR_5, VAR_6, VAR_7);

    if ((VAR_8 = FUNC_1()) == ((void*)0)) {
        FUNC_5(VAR_3, VAR_1);
        return ((void*)0);
    }

    if (VAR_6 && (VAR_6->flags == VAR_0))
        return VAR_8;

    if (!VAR_6 || (!VAR_6->subject_req && !VAR_6->subject_cert)) {
        FUNC_5(VAR_3, VAR_4);
        goto err;
    }

    if (VAR_6->subject_req)
        VAR_9 = VAR_6->subject_req->req_info.pubkey;
    else
        VAR_9 = VAR_6->subject_cert->cert_info.key;

    if (VAR_9 == ((void*)0)) {
        FUNC_5(VAR_3, VAR_4);
        goto err;
    }

    FUNC_6(((void*)0), &VAR_10, &VAR_11, ((void*)0), VAR_9);

    if (!FUNC_3(VAR_10, VAR_11, VAR_12, &VAR_13, FUNC_4(), ((void*)0)))
        goto err;

    if (!FUNC_2(VAR_8, VAR_12, VAR_13)) {
        FUNC_5(VAR_3, VAR_1);
        goto err;
    }

    return VAR_8;

 err:
    FUNC_0(VAR_8);
    return ((void*)0);
}
