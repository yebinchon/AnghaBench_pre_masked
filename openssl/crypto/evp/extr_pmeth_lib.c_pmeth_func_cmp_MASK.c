
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* (* pmeth_fn ) () ;
struct TYPE_7__ {int pkey_id; } ;
struct TYPE_6__ {int pkey_id; } ;
typedef TYPE_2__ EVP_PKEY_METHOD ;


 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static int FUNC_1(const EVP_PKEY_METHOD *const *VAR_0, pmeth_fn const *VAR_1)
{
    return ((*VAR_0)->pkey_id - ((**VAR_1)())->pkey_id);
}
