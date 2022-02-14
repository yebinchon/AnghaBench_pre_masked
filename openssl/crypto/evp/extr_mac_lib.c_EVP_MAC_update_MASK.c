
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; TYPE_1__* meth; } ;
struct TYPE_4__ {int (* update ) (int ,unsigned char const*,size_t) ;} ;
typedef TYPE_2__ EVP_MAC_CTX ;


 int FUNC_0 (int ,unsigned char const*,size_t) ;

int FUNC_1(EVP_MAC_CTX *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    if (VAR_2 == 0)
        return 1;
    return VAR_0->meth->update(VAR_0->data, VAR_1, VAR_2);
}
