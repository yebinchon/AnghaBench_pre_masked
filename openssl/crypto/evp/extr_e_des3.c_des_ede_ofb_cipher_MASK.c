
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ks3; int ks2; int ks1; } ;
typedef int EVP_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (unsigned char const*,unsigned char*,long,int *,int *,int *,int *,int*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 size_t VAR_0 ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(EVP_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                              const unsigned char *VAR_3, size_t VAR_4)
{
    while (VAR_4 >= VAR_0) {
        int VAR_5 = FUNC_2(VAR_1);
        FUNC_0(VAR_3, VAR_2, (long)VAR_0,
                               &FUNC_4(VAR_1)->ks1, &FUNC_4(VAR_1)->ks2,
                               &FUNC_4(VAR_1)->ks3,
                               (DES_cblock *)FUNC_1(VAR_1),
                               &VAR_5);
        FUNC_3(VAR_1, VAR_5);
        VAR_4 -= VAR_0;
        VAR_3 += VAR_0;
        VAR_2 += VAR_0;
    }
    if (VAR_4) {
        int VAR_6 = FUNC_2(VAR_1);
        FUNC_0(VAR_3, VAR_2, (long)VAR_4,
                               &FUNC_4(VAR_1)->ks1, &FUNC_4(VAR_1)->ks2,
                               &FUNC_4(VAR_1)->ks3,
                               (DES_cblock *)FUNC_1(VAR_1),
                               &VAR_6);
        FUNC_3(VAR_1, VAR_6);
    }
    return 1;
}
