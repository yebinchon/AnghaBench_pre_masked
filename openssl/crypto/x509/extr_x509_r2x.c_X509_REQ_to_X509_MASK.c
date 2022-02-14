
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int attributes; } ;
struct TYPE_18__ {TYPE_1__ req_info; } ;
typedef TYPE_3__ X509_REQ ;
typedef int X509_NAME ;
struct TYPE_17__ {int notAfter; int notBefore; } ;
struct TYPE_19__ {TYPE_2__ validity; int * version; } ;
typedef TYPE_4__ X509_CINF ;
struct TYPE_20__ {TYPE_4__ cert_info; } ;
typedef TYPE_5__ X509 ;
typedef int EVP_PKEY ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int * FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int * FUNC_6 (int ,long) ;
 TYPE_5__* FUNC_7 () ;
 scalar_t__ FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int *) ;
 int FUNC_11 (TYPE_5__*,int *,int ) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;

X509 *FUNC_14(X509_REQ *VAR_2, int VAR_3, EVP_PKEY *VAR_4)
{
    X509 *VAR_5 = ((void*)0);
    X509_CINF *VAR_6 = ((void*)0);
    X509_NAME *VAR_7;
    EVP_PKEY *VAR_8 = ((void*)0);

    if ((VAR_5 = FUNC_7()) == ((void*)0)) {
        FUNC_12(VAR_1, VAR_0);
        return ((void*)0);
    }


    VAR_6 = &VAR_5->cert_info;

    if (FUNC_13(VAR_2->req_info.attributes) != 0) {
        if ((VAR_6->version = FUNC_0()) == ((void*)0))
            goto err;
        if (!FUNC_1(VAR_6->version, 2))
            goto err;


    }

    VAR_7 = FUNC_4(VAR_2);
    if (FUNC_10(VAR_5, VAR_7) == 0)
        goto err;
    if (FUNC_8(VAR_5, VAR_7) == 0)
        goto err;

    if (FUNC_6(VAR_6->validity.notBefore, 0) == ((void*)0))
        goto err;
    if (FUNC_6(VAR_6->validity.notAfter, (long)60 * 60 * 24 * VAR_3) ==
        ((void*)0))
        goto err;

    VAR_8 = FUNC_3(VAR_2);
    if (VAR_8 == ((void*)0) || !FUNC_9(VAR_5, VAR_8))
        goto err;

    if (!FUNC_11(VAR_5, VAR_4, FUNC_2()))
        goto err;
    return VAR_5;

 err:
    FUNC_5(VAR_5);
    return ((void*)0);
}
