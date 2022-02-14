
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int * co_key; } ;
struct TYPE_12__ {TYPE_4__* peerkey; TYPE_2__* pkey; TYPE_6__* data; } ;
struct TYPE_10__ {int ec; } ;
struct TYPE_11__ {TYPE_3__ pkey; } ;
struct TYPE_8__ {int * ec; } ;
struct TYPE_9__ {TYPE_1__ pkey; } ;
typedef TYPE_5__ EVP_PKEY_CTX ;
typedef int EC_POINT ;
typedef TYPE_6__ EC_PKEY_CTX ;
typedef int EC_KEY ;
typedef int EC_GROUP ;


 int FUNC_0 (unsigned char*,size_t,int const*,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_2, unsigned char *VAR_3, size_t *VAR_4)
{
    int VAR_5;
    size_t VAR_6;
    const EC_POINT *VAR_7 = ((void*)0);
    EC_KEY *VAR_8;
    EC_PKEY_CTX *VAR_9 = VAR_2->data;
    if (!VAR_2->pkey || !VAR_2->peerkey) {
        FUNC_4(VAR_0, VAR_1);
        return 0;
    }

    VAR_8 = VAR_9->co_key ? VAR_9->co_key : VAR_2->pkey->pkey.ec;

    if (!VAR_3) {
        const EC_GROUP *VAR_10;
        VAR_10 = FUNC_2(VAR_8);
        *VAR_4 = (FUNC_1(VAR_10) + 7) / 8;
        return 1;
    }
    VAR_7 = FUNC_3(VAR_2->peerkey->pkey.ec);






    VAR_6 = *VAR_4;

    VAR_5 = FUNC_0(VAR_3, VAR_6, VAR_7, VAR_8, 0);
    if (VAR_5 <= 0)
        return 0;
    *VAR_4 = VAR_5;
    return 1;
}
