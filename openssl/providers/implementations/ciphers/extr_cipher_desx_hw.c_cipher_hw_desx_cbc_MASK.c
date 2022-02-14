
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enc; scalar_t__ iv; } ;
struct TYPE_4__ {int ks3; int ks2; int ks1; } ;
typedef TYPE_1__ PROV_TDES_CTX ;
typedef TYPE_2__ PROV_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (unsigned char const*,unsigned char*,long,int *,int *,int *,int *,int ) ;
 size_t VAR_0 ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                              const unsigned char *VAR_3, size_t VAR_4)
{
    PROV_TDES_CTX *VAR_5 = (PROV_TDES_CTX *)VAR_1;

    while (VAR_4 >= VAR_0) {
        FUNC_0(VAR_3, VAR_2, (long)VAR_0, &VAR_5->ks1,
                         (DES_cblock *)VAR_1->iv, &VAR_5->ks2, &VAR_5->ks3,
                         VAR_1->enc);
        VAR_4 -= VAR_0;
        VAR_3 += VAR_0;
        VAR_2 += VAR_0;
    }
    if (VAR_4 > 0)
        FUNC_0(VAR_3, VAR_2, (long)VAR_4, &VAR_5->ks1,
                         (DES_cblock *)VAR_1->iv, &VAR_5->ks2, &VAR_5->ks3,
                         VAR_1->enc);
    return 1;
}
