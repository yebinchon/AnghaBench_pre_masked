
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ks3; int ks2; int ks1; } ;
typedef int EVP_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (unsigned char*,unsigned char*,int,int,int *,int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(EVP_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                                const unsigned char *VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    unsigned char VAR_6[1], VAR_7[1];

    if (!FUNC_3(VAR_1, VAR_0))
            VAR_4 *= 8;
    for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
        VAR_6[0] = (VAR_3[VAR_5 / 8] & (1 << (7 - VAR_5 % 8))) ? 0x80 : 0;
        FUNC_0(VAR_6, VAR_7, 1, 1,
                             &FUNC_4(VAR_1)->ks1, &FUNC_4(VAR_1)->ks2,
                             &FUNC_4(VAR_1)->ks3,
                             (DES_cblock *)FUNC_2(VAR_1),
                             FUNC_1(VAR_1));
        VAR_2[VAR_5 / 8] = (VAR_2[VAR_5 / 8] & ~(0x80 >> (unsigned int)(VAR_5 % 8)))
            | ((VAR_7[0] & 0x80) >> (unsigned int)(VAR_5 % 8));
    }

    return 1;
}
