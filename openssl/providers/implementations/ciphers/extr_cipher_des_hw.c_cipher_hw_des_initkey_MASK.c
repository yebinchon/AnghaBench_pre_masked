
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ mode; scalar_t__ enc; } ;
struct TYPE_7__ {int * cbc; } ;
struct TYPE_6__ {int ks; } ;
struct TYPE_8__ {TYPE_2__ dstream; TYPE_1__ dks; } ;
typedef TYPE_3__ PROV_DES_CTX ;
typedef TYPE_4__ PROV_CIPHER_CTX ;
typedef int DES_key_schedule ;
typedef int DES_cblock ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(PROV_CIPHER_CTX *VAR_4,
                                 const unsigned char *VAR_5, size_t VAR_6)
{
    PROV_DES_CTX *VAR_7 = (PROV_DES_CTX *)VAR_4;
    DES_cblock *VAR_8 = (DES_cblock *)VAR_5;
    DES_key_schedule *VAR_9 = &VAR_7->dks.ks;

    VAR_7->dstream.cbc = ((void*)0);
    FUNC_0(VAR_8, VAR_9);
    return 1;
}
