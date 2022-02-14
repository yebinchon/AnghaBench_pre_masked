
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int enc; scalar_t__ iv; } ;
struct TYPE_4__ {int ks3; int ks2; int ks1; } ;
typedef TYPE_1__ PROV_TDES_CTX ;
typedef TYPE_2__ PROV_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (unsigned char*,unsigned char*,int,int,int *,int *,int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                               const unsigned char *VAR_3, size_t VAR_4)
{
    PROV_TDES_CTX *VAR_5 = (PROV_TDES_CTX *)VAR_1;
    size_t VAR_6;
    unsigned char VAR_7[1], VAR_8[1];

    if ((VAR_1->flags & VAR_0) == 0)
        VAR_4 *= 8;
    for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
        VAR_7[0] = (VAR_3[VAR_6 / 8] & (1 << (7 - VAR_6 % 8))) ? 0x80 : 0;
        FUNC_0(VAR_7, VAR_8, 1, 1,
                             &VAR_5->ks1, &VAR_5->ks2, &VAR_5->ks3,
                             (DES_cblock *)VAR_1->iv, VAR_1->enc);
        VAR_2[VAR_6 / 8] = (VAR_2[VAR_6 / 8] & ~(0x80 >> (unsigned int)(VAR_6 % 8)))
            | ((VAR_8[0] & 0x80) >> (unsigned int)(VAR_6 % 8));
    }

    return 1;
}
