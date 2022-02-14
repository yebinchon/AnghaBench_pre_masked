
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int kdf_oid; struct TYPE_6__* kdf_ukm; } ;
struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef TYPE_2__ DH_PKEY_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(EVP_PKEY_CTX *VAR_0)
{
    DH_PKEY_CTX *VAR_1 = VAR_0->data;
    if (VAR_1 != ((void*)0)) {
        FUNC_1(VAR_1->kdf_ukm);
        FUNC_0(VAR_1->kdf_oid);
        FUNC_1(VAR_1);
    }
}
