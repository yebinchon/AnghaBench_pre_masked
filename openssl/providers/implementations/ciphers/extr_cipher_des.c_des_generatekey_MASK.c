
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t keylen; int libctx; } ;
typedef TYPE_1__ PROV_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static int FUNC_2(PROV_CIPHER_CTX *VAR_0, void *VAR_1)
{

    DES_cblock *VAR_2 = VAR_1;
    size_t VAR_3 = VAR_0->keylen;

    if (VAR_3 == 0 || FUNC_1(VAR_0->libctx, VAR_1, VAR_3) <= 0)
        return 0;
    FUNC_0(VAR_2);
    return 1;
}
