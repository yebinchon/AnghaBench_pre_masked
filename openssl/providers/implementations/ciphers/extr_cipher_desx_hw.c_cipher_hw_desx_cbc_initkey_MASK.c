
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ks3; int ks2; int ks1; } ;
typedef TYPE_1__ PROV_TDES_CTX ;
typedef int PROV_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_2(PROV_CIPHER_CTX *VAR_0,
                                      const unsigned char *VAR_1, size_t VAR_2)
{
    PROV_TDES_CTX *VAR_3 = (PROV_TDES_CTX *)VAR_0;
    DES_cblock *VAR_4 = (DES_cblock *)VAR_1;

    FUNC_0(VAR_4, &VAR_3->ks1);
    FUNC_1(&VAR_3->ks2, &VAR_1[8], 8);
    FUNC_1(&VAR_3->ks3, &VAR_1[16], 8);

    return 1;
}
