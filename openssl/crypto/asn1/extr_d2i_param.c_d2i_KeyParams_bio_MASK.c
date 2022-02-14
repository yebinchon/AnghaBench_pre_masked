
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
typedef void EVP_PKEY ;
typedef TYPE_1__ BUF_MEM ;
typedef int BIO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__**) ;
 void* FUNC_2 (int,void**,unsigned char const**,int) ;

EVP_PKEY *FUNC_3(int VAR_0, EVP_PKEY **VAR_1, BIO *VAR_2)
{
    BUF_MEM *VAR_3 = ((void*)0);
    const unsigned char *VAR_4;
    void *VAR_5 = ((void*)0);
    int VAR_6;

    VAR_6 = FUNC_1(VAR_2, &VAR_3);
    if (VAR_6 < 0)
        goto err;

    VAR_4 = (unsigned char *)VAR_3->data;
    VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_4, VAR_6);
err:
    FUNC_0(VAR_3);
    return VAR_5;
}
