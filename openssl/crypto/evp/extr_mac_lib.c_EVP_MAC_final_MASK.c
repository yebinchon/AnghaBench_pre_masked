
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int data; TYPE_1__* meth; } ;
struct TYPE_5__ {int (* final ) (int ,unsigned char*,size_t*,size_t) ;} ;
typedef TYPE_2__ EVP_MAC_CTX ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,unsigned char*,size_t*,size_t) ;

int FUNC_2(EVP_MAC_CTX *VAR_0,
                  unsigned char *VAR_1, size_t *VAR_2, size_t VAR_3)
{
    int VAR_4 = FUNC_0(VAR_0);

    if (VAR_4 < 0)
        return 0;
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_4;
    if (VAR_1 == ((void*)0))
        return 1;
    return VAR_0->meth->final(VAR_0->data, VAR_1, VAR_2, VAR_3);
}
