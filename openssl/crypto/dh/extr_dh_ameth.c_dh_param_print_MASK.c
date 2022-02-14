
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dh; } ;
struct TYPE_5__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int BIO ;
typedef int ASN1_PCTX ;


 int FUNC_0 (int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_0, const EVP_PKEY *VAR_1, int VAR_2,
                          ASN1_PCTX *VAR_3)
{
    return FUNC_0(VAR_0, VAR_1->pkey.dh, VAR_2, 0);
}
