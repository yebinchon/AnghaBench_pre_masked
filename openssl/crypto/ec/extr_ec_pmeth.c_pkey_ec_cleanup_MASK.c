
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* kdf_ukm; int co_key; int gen_group; } ;
struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef TYPE_2__ EC_PKEY_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(EVP_PKEY_CTX *VAR_0)
{
    EC_PKEY_CTX *VAR_1 = VAR_0->data;
    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_1->gen_group);
        FUNC_1(VAR_1->co_key);
        FUNC_2(VAR_1->kdf_ukm);
        FUNC_2(VAR_1);
        VAR_0->data = ((void*)0);
    }
}
