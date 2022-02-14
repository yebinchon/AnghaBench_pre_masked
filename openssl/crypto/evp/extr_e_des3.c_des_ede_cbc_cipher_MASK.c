
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ks; } ;
struct TYPE_5__ {int (* cbc ) (unsigned char const*,unsigned char*,size_t,int ,scalar_t__) ;} ;
struct TYPE_7__ {int ks3; int ks2; int ks1; TYPE_2__ ks; TYPE_1__ stream; } ;
typedef int EVP_CIPHER_CTX ;
typedef int DES_cblock ;
typedef TYPE_3__ DES_EDE_KEY ;


 int FUNC_0 (unsigned char const*,unsigned char*,long,int *,int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t VAR_0 ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (unsigned char const*,unsigned char*,size_t,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(EVP_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                              const unsigned char *VAR_3, size_t VAR_4)
{
    DES_EDE_KEY *VAR_5 = FUNC_3(VAR_1);

    if (VAR_5->stream.cbc != ((void*)0)) {
        (*VAR_5->stream.cbc) (VAR_3, VAR_2, VAR_4, VAR_5->ks.ks,
                            FUNC_2(VAR_1));
        return 1;
    }

    while (VAR_4 >= VAR_0) {
        FUNC_0(VAR_3, VAR_2, (long)VAR_0,
                             &VAR_5->ks1, &VAR_5->ks2, &VAR_5->ks3,
                             (DES_cblock *)FUNC_2(VAR_1),
                             FUNC_1(VAR_1));
        VAR_4 -= VAR_0;
        VAR_3 += VAR_0;
        VAR_2 += VAR_0;
    }
    if (VAR_4)
        FUNC_0(VAR_3, VAR_2, (long)VAR_4,
                             &VAR_5->ks1, &VAR_5->ks2, &VAR_5->ks3,
                             (DES_cblock *)FUNC_2(VAR_1),
                             FUNC_1(VAR_1));
    return 1;
}
