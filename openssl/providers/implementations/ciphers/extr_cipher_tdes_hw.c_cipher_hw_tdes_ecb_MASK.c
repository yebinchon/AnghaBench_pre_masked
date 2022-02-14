
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const_DES_cblock ;
struct TYPE_5__ {int enc; } ;
struct TYPE_4__ {int ks3; int ks2; int ks1; } ;
typedef TYPE_1__ PROV_TDES_CTX ;
typedef TYPE_2__ PROV_CIPHER_CTX ;
typedef int DES_cblock ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *,int *,int *,int *,int ) ;

int FUNC_1(PROV_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                       const unsigned char *VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    PROV_TDES_CTX *VAR_6 = (PROV_TDES_CTX *)VAR_1;

    if (VAR_4 < VAR_0)
        return 1;

    for (VAR_5 = 0, VAR_4 -= VAR_0; VAR_5 <= VAR_4; VAR_5 += VAR_0) {
        FUNC_0((const_DES_cblock *)(VAR_3 + VAR_5), (DES_cblock *)(VAR_2 + VAR_5),
                         &VAR_6->ks1, &VAR_6->ks2, &VAR_6->ks3, VAR_1->enc);
    }
    return 1;
}
