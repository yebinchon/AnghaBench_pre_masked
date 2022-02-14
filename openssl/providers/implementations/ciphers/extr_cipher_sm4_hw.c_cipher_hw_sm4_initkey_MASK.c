
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* block128_f ;
struct TYPE_7__ {scalar_t__ mode; void* block; scalar_t__ enc; int * ks; } ;
struct TYPE_5__ {int ks; } ;
struct TYPE_6__ {TYPE_1__ ks; } ;
typedef int SM4_KEY ;
typedef TYPE_2__ PROV_SM4_CTX ;
typedef TYPE_3__ PROV_CIPHER_CTX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned char const*,int *) ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_4,
                                 const unsigned char *VAR_5, size_t VAR_6)
{
    PROV_SM4_CTX *VAR_7 = (PROV_SM4_CTX *)VAR_4;
    SM4_KEY *VAR_8 = &VAR_7->ks.ks;

    FUNC_0(VAR_5, VAR_8);
    VAR_4->ks = VAR_8;
    if (VAR_4->enc
            || (VAR_4->mode != VAR_1
                && VAR_4->mode != VAR_0))
        VAR_4->block = (block128_f)VAR_3;
    else
        VAR_4->block = (block128_f)VAR_2;
    return 1;
}
