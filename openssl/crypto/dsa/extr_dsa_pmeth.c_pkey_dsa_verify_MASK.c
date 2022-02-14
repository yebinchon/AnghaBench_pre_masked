
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * md; } ;
struct TYPE_8__ {TYPE_2__* pkey; TYPE_4__* data; } ;
struct TYPE_6__ {int * dsa; } ;
struct TYPE_7__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef TYPE_4__ DSA_PKEY_CTX ;
typedef int DSA ;


 int FUNC_0 (int ,unsigned char const*,size_t,unsigned char const*,size_t,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_0,
                           const unsigned char *VAR_1, size_t VAR_2,
                           const unsigned char *VAR_3, size_t VAR_4)
{
    int VAR_5;
    DSA_PKEY_CTX *VAR_6 = VAR_0->data;
    DSA *VAR_7 = VAR_0->pkey->pkey.dsa;

    if (VAR_6->md != ((void*)0) && VAR_4 != (size_t)FUNC_1(VAR_6->md))
        return 0;

    VAR_5 = FUNC_0(0, VAR_3, VAR_4, VAR_1, VAR_2, VAR_7);

    return VAR_5;
}
