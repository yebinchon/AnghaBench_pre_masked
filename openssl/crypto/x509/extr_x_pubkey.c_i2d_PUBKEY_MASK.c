
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* pkey; } ;
typedef TYPE_2__ X509_PUBKEY ;
struct TYPE_12__ {TYPE_1__* ameth; } ;
struct TYPE_10__ {int (* pub_encode ) (TYPE_2__*,TYPE_3__ const*) ;} ;
typedef TYPE_3__ EVP_PKEY ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,unsigned char**) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__ const*) ;

int FUNC_4(const EVP_PKEY *VAR_0, unsigned char **VAR_1)
{
    X509_PUBKEY *VAR_2 = ((void*)0);
    int VAR_3 = -1;

    if (VAR_0 == ((void*)0))
        return 0;
    if ((VAR_2 = FUNC_1()) == ((void*)0))
        return -1;
    if (VAR_0->ameth != ((void*)0) && VAR_0->ameth->pub_encode != ((void*)0)
        && !VAR_0->ameth->pub_encode(VAR_2, VAR_0))
        goto error;
    VAR_2->pkey = (EVP_PKEY *)VAR_0;
    VAR_3 = FUNC_2(VAR_2, VAR_1);
    VAR_2->pkey = ((void*)0);
 error:
    FUNC_0(VAR_2);
    return VAR_3;
}
