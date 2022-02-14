
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int provctx; int const* (* query_operation ) (int ,int,int*) ;} ;
typedef TYPE_1__ OSSL_PROVIDER ;
typedef int OSSL_ALGORITHM ;


 int const* FUNC_0 (int ,int,int*) ;

const OSSL_ALGORITHM *FUNC_1(const OSSL_PROVIDER *VAR_0,
                                                    int VAR_1,
                                                    int *VAR_2)
{
    return VAR_0->query_operation(VAR_0->provctx, VAR_1, VAR_2);
}
