
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int loader_ctx; TYPE_1__* loader; scalar_t__ loading; } ;
struct TYPE_4__ {int (* find ) (int ,int const*) ;} ;
typedef int OSSL_STORE_SEARCH ;
typedef TYPE_2__ OSSL_STORE_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int const*) ;

int FUNC_2(OSSL_STORE_CTX *VAR_3, const OSSL_STORE_SEARCH *VAR_4)
{
    if (VAR_3->loading) {
        FUNC_0(VAR_0,
                      VAR_1);
        return 0;
    }
    if (VAR_3->loader->find == ((void*)0)) {
        FUNC_0(VAR_0,
                      VAR_2);
        return 0;
    }

    return VAR_3->loader->find(VAR_3->loader_ctx, VAR_4);
}
