
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mode; scalar_t__ enc; } ;
struct TYPE_5__ {int * cbc; } ;
struct TYPE_6__ {int ks1; int ks3; int ks2; TYPE_1__ tstream; } ;
typedef TYPE_2__ PROV_TDES_CTX ;
typedef TYPE_3__ PROV_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(PROV_CIPHER_CTX *VAR_4,
                                       const unsigned char *VAR_5, size_t VAR_6)
{
    PROV_TDES_CTX *VAR_7 = (PROV_TDES_CTX *)VAR_4;
    DES_cblock *VAR_8 = (DES_cblock *)VAR_5;

    VAR_7->tstream.cbc = ((void*)0);
    FUNC_0(&VAR_8[0], &VAR_7->ks1);
    FUNC_0(&VAR_8[1], &VAR_7->ks2);
    FUNC_2(&VAR_7->ks3, &VAR_7->ks1, sizeof(VAR_7->ks1));
    return 1;
}
