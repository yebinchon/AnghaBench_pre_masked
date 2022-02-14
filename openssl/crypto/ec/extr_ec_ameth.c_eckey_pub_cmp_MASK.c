
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ec; } ;
struct TYPE_6__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EC_POINT ;
typedef int EC_GROUP ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int const*,int const*,int const*,int *) ;

__attribute__((used)) static int FUNC_3(const EVP_PKEY *VAR_0, const EVP_PKEY *VAR_1)
{
    int VAR_2;
    const EC_GROUP *VAR_3 = FUNC_0(VAR_1->pkey.ec);
    const EC_POINT *VAR_4 = FUNC_1(VAR_0->pkey.ec),
        *VAR_5 = FUNC_1(VAR_1->pkey.ec);
    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
        return -2;
    VAR_2 = FUNC_2(VAR_3, VAR_4, VAR_5, ((void*)0));
    if (VAR_2 == 0)
        return 1;
    if (VAR_2 == 1)
        return 0;
    return -2;
}
