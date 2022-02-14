
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* version; } ;
typedef TYPE_2__ X509_REQ_INFO ;
struct TYPE_12__ {TYPE_2__ req_info; } ;
typedef TYPE_3__ X509_REQ ;
typedef int X509 ;
struct TYPE_10__ {int length; scalar_t__* data; } ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int *,int const*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;

X509_REQ *FUNC_9(X509 *VAR_2, EVP_PKEY *VAR_3, const EVP_MD *VAR_4)
{
    X509_REQ *VAR_5;
    X509_REQ_INFO *VAR_6;
    int VAR_7;
    EVP_PKEY *VAR_8;

    VAR_5 = FUNC_2();
    if (VAR_5 == ((void*)0)) {
        FUNC_8(VAR_1, VAR_0);
        goto err;
    }

    VAR_6 = &VAR_5->req_info;

    VAR_6->version->length = 1;
    VAR_6->version->data = FUNC_0(1);
    if (VAR_6->version->data == ((void*)0))
        goto err;
    VAR_6->version->data[0] = 0;

    if (!FUNC_4(VAR_5, FUNC_7(VAR_2)))
        goto err;

    VAR_8 = FUNC_6(VAR_2);
    if (VAR_8 == ((void*)0))
        goto err;
    VAR_7 = FUNC_3(VAR_5, VAR_8);
    if (!VAR_7)
        goto err;

    if (VAR_3 != ((void*)0)) {
        if (!FUNC_5(VAR_5, VAR_3, VAR_4))
            goto err;
    }
    return VAR_5;
 err:
    FUNC_1(VAR_5);
    return ((void*)0);
}
