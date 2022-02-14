
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const_DES_cblock ;
struct TYPE_7__ {size_t blocksize; int enc; } ;
struct TYPE_5__ {int ks; } ;
struct TYPE_6__ {TYPE_1__ dks; } ;
typedef TYPE_2__ PROV_DES_CTX ;
typedef TYPE_3__ PROV_CIPHER_CTX ;
typedef int DES_key_schedule ;


 int FUNC_0 (int *,int *,int *,int ) ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_0, unsigned char *VAR_1,
                                    const unsigned char *VAR_2, size_t VAR_3)
{
    size_t VAR_4, VAR_5 = VAR_0->blocksize;
    DES_key_schedule *VAR_6 = &(((PROV_DES_CTX *)VAR_0)->dks.ks);

    if (VAR_3 < VAR_5)
        return 1;
    for (VAR_4 = 0, VAR_3 -= VAR_5; VAR_4 <= VAR_3; VAR_4 += VAR_5)
        FUNC_0((const_DES_cblock *)(VAR_2 + VAR_4),
                        (const_DES_cblock *)(VAR_1 + VAR_4), VAR_6, VAR_0->enc);
    return 1;
}
