
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int pubkey; } ;
struct TYPE_6__ {TYPE_4__* ecx; } ;
struct TYPE_8__ {TYPE_2__* ameth; TYPE_1__ pkey; } ;
struct TYPE_7__ {int pkey_id; } ;
typedef TYPE_3__ EVP_PKEY ;
typedef TYPE_4__ ECX_KEY ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int ,size_t) ;

__attribute__((used)) static int FUNC_2(const EVP_PKEY *VAR_0, unsigned char *VAR_1,
                           size_t *VAR_2)
{
    const ECX_KEY *VAR_3 = VAR_0->pkey.ecx;

    if (VAR_1 == ((void*)0)) {
        *VAR_2 = FUNC_0(VAR_0->ameth->pkey_id);
        return 1;
    }

    if (VAR_3 == ((void*)0)
            || *VAR_2 < (size_t)FUNC_0(VAR_0->ameth->pkey_id))
        return 0;

    *VAR_2 = FUNC_0(VAR_0->ameth->pkey_id);
    FUNC_1(VAR_1, VAR_3->pubkey, *VAR_2);

    return 1;
}
