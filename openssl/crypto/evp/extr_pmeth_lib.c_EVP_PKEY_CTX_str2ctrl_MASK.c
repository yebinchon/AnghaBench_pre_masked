
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pmeth; } ;
struct TYPE_5__ {int (* ctrl ) (TYPE_2__*,int,size_t,void*) ;} ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 size_t VAR_0 ;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_2__*,int,size_t,void*) ;

int FUNC_2(EVP_PKEY_CTX *VAR_1, int VAR_2, const char *VAR_3)
{
    size_t VAR_4;

    VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 > VAR_0)
        return -1;
    return VAR_1->pmeth->ctrl(VAR_1, VAR_2, VAR_4, (void *)VAR_3);
}
