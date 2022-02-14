
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; TYPE_1__* meth; } ;
struct TYPE_4__ {int (* reset ) (int ) ;} ;
typedef TYPE_2__ EVP_KDF_CTX ;


 int FUNC_0 (int ) ;

void FUNC_1(EVP_KDF_CTX *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;

    if (VAR_0->meth->reset != ((void*)0))
        VAR_0->meth->reset(VAR_0->data);
}
