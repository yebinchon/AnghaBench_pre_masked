
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int (* pkey_ctrl ) (TYPE_2__*,int,int,void*) ;} ;
typedef TYPE_2__ EVP_PKEY ;


 int FUNC_0 (TYPE_2__*,int,int,void*) ;

__attribute__((used)) static int FUNC_1(EVP_PKEY *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
    if (VAR_0->ameth == ((void*)0) || VAR_0->ameth->pkey_ctrl == ((void*)0))
        return -2;
    return VAR_0->ameth->pkey_ctrl(VAR_0, VAR_1, VAR_2, VAR_3);
}
