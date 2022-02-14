
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int enc; scalar_t__ iv; } ;
struct TYPE_7__ {int ks; } ;
struct TYPE_6__ {int (* cbc ) (unsigned char const*,unsigned char*,size_t,int ,scalar_t__) ;} ;
struct TYPE_8__ {int ks3; int ks2; int ks1; TYPE_2__ tks; TYPE_1__ tstream; } ;
typedef TYPE_3__ PROV_TDES_CTX ;
typedef TYPE_4__ PROV_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (unsigned char const*,unsigned char*,long,int *,int *,int *,int *,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (unsigned char const*,unsigned char*,size_t,int ,scalar_t__) ;

int FUNC_2(PROV_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                       const unsigned char *VAR_3, size_t VAR_4)
{
    PROV_TDES_CTX *VAR_5 = (PROV_TDES_CTX *)VAR_1;

    if (VAR_5->tstream.cbc != ((void*)0)) {
        (*VAR_5->tstream.cbc) (VAR_3, VAR_2, VAR_4, VAR_5->tks.ks, VAR_1->iv);
        return 1;
    }

    while (VAR_4 >= VAR_0) {
        FUNC_0(VAR_3, VAR_2, (long)VAR_0, &VAR_5->ks1, &VAR_5->ks2,
                             &VAR_5->ks3, (DES_cblock *)VAR_1->iv, VAR_1->enc);
        VAR_4 -= VAR_0;
        VAR_3 += VAR_0;
        VAR_2 += VAR_0;
    }
    if (VAR_4 > 0)
        FUNC_0(VAR_3, VAR_2, (long)VAR_4, &VAR_5->ks1, &VAR_5->ks2,
                             &VAR_5->ks3, (DES_cblock *)VAR_1->iv, VAR_1->enc);
    return 1;
}
