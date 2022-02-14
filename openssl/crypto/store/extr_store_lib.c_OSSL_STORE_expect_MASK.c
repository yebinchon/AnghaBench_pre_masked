
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int expected_type; int loader_ctx; TYPE_1__* loader; scalar_t__ loading; } ;
struct TYPE_4__ {int (* expect ) (int ,int) ;} ;
typedef TYPE_2__ OSSL_STORE_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(OSSL_STORE_CTX *VAR_2, int VAR_3)
{
    if (VAR_2->loading) {
        FUNC_0(VAR_0,
                      VAR_1);
        return 0;
    }

    VAR_2->expected_type = VAR_3;
    if (VAR_2->loader->expect != ((void*)0))
        return VAR_2->loader->expect(VAR_2->loader_ctx, VAR_3);
    return 1;
}
