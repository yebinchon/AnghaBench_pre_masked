
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pem_password_cb ;
struct TYPE_7__ {TYPE_1__* ameth; } ;
struct TYPE_6__ {int * priv_encode; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EVP_CIPHER ;
typedef int BIO ;


 int FUNC_0 (int *,TYPE_2__*,int const*,char*,int,int *,void*) ;
 int FUNC_1 (int *,TYPE_2__*,int const*,unsigned char*,int,int *,void*) ;

int FUNC_2(BIO *VAR_0, EVP_PKEY *VAR_1, const EVP_CIPHER *VAR_2,
                             unsigned char *VAR_3, int VAR_4,
                             pem_password_cb *VAR_5, void *VAR_6)
{
    if (VAR_1->ameth == ((void*)0) || VAR_1->ameth->priv_encode != ((void*)0))
        return FUNC_0(VAR_0, VAR_1, VAR_2,
                                             (char *)VAR_3, VAR_4, VAR_5, VAR_6);
    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
