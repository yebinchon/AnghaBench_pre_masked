
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx_size; } ;
typedef TYPE_1__ EVP_CIPHER ;



int FUNC_0(EVP_CIPHER *VAR_0, int VAR_1)
{
    if (VAR_0->ctx_size != 0)
        return 0;

    VAR_0->ctx_size = VAR_1;
    return 1;
}
