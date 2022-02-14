
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; } ;
typedef TYPE_1__ MAC_PKEY_CTX ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int ,void const*,size_t) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(EVP_MD_CTX *VAR_0, const void *VAR_1, size_t VAR_2)
{
    MAC_PKEY_CTX *VAR_3 = FUNC_2(FUNC_1(VAR_0));

    if (!FUNC_0(VAR_3->ctx, VAR_1, VAR_2))
        return 0;
    return 1;
}
