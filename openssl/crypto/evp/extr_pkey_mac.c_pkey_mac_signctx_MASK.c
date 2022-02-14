
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; } ;
typedef TYPE_1__ MAC_PKEY_CTX ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int ,unsigned char*,size_t*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(EVP_PKEY_CTX *VAR_0, unsigned char *VAR_1,
                             size_t *VAR_2, EVP_MD_CTX *VAR_3)
{
    MAC_PKEY_CTX *VAR_4 = FUNC_2(VAR_0);

    return FUNC_0(VAR_4->ctx, VAR_1, VAR_2, FUNC_1(VAR_4->ctx));
}
