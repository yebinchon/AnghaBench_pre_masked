
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int (* param_encode ) (TYPE_2__ const*,unsigned char**) ;} ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__ const*,unsigned char**) ;

int FUNC_2(const EVP_PKEY *VAR_2, unsigned char **VAR_3)
{
    if (VAR_2->ameth != ((void*)0) && VAR_2->ameth->param_encode != ((void*)0))
        return VAR_2->ameth->param_encode(VAR_2, VAR_3);
    FUNC_0(VAR_0, VAR_1);
    return -1;
}
