
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dsa; } ;
struct TYPE_10__ {TYPE_1__ pkey; } ;
struct TYPE_9__ {int * pkey; } ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef TYPE_3__ EVP_PKEY ;
typedef int DSA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_2, EVP_PKEY *VAR_3)
{
    DSA *VAR_4 = ((void*)0);

    if (VAR_2->pkey == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    VAR_4 = FUNC_1();
    if (VAR_4 == ((void*)0))
        return 0;
    FUNC_3(VAR_3, VAR_4);

    if (!FUNC_4(VAR_3, VAR_2->pkey))
        return 0;
    return FUNC_0(VAR_3->pkey.dsa);
}
