
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pkey_id; } ;
typedef TYPE_1__ EVP_PKEY_METHOD ;



__attribute__((used)) static int FUNC_0(const EVP_PKEY_METHOD *const *VAR_0,
                     const EVP_PKEY_METHOD *const *VAR_1)
{
    return ((*VAR_0)->pkey_id - (*VAR_1)->pkey_id);
}
