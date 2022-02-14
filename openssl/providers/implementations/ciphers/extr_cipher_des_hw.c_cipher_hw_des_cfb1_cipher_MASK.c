
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int enc; scalar_t__ iv; } ;
struct TYPE_5__ {int ks; } ;
struct TYPE_6__ {TYPE_1__ dks; } ;
typedef TYPE_2__ PROV_DES_CTX ;
typedef TYPE_3__ PROV_CIPHER_CTX ;
typedef int DES_key_schedule ;
typedef int DES_cblock ;


 int FUNC_0 (unsigned char*,unsigned char*,int,int,int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                                     const unsigned char *VAR_3, size_t VAR_4)
{
    size_t VAR_5, VAR_6 = VAR_0 / 8;
    DES_key_schedule *VAR_7 = &(((PROV_DES_CTX *)VAR_1)->dks.ks);
    unsigned char VAR_8[1], VAR_9[1];

    if (VAR_4 < VAR_6)
        VAR_6 = VAR_4;

    while (VAR_4 && VAR_4 >= VAR_6) {
        for (VAR_5 = 0; VAR_5 < VAR_6 * 8; ++VAR_5) {
            VAR_8[0] = (VAR_3[VAR_5 / 8] & (1 << (7 - VAR_5 % 8))) ? 0x80 : 0;
            FUNC_0(VAR_8, VAR_9, 1, 1, VAR_7, (DES_cblock *)VAR_1->iv, VAR_1->enc);
            VAR_2[VAR_5 / 8] =
                (VAR_2[VAR_5 / 8] & ~(0x80 >> (unsigned int)(VAR_5 % 8))) |
                ((VAR_9[0] & 0x80) >> (unsigned int)(VAR_5 % 8));
        }
        VAR_4 -= VAR_6;
        VAR_3 += VAR_6;
        VAR_2 += VAR_6;
        if (VAR_4 < VAR_6)
            VAR_6 = VAR_4;
    }

    return 1;
}
