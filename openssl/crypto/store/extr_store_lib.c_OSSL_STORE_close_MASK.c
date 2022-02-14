
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ loader_ctx; TYPE_1__* loader; } ;
struct TYPE_5__ {int (* close ) (scalar_t__) ;} ;
typedef TYPE_2__ OSSL_STORE_CTX ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,void*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(OSSL_STORE_CTX *VAR_1)
{
    int VAR_2;

    FUNC_1(VAR_0, "Closing %p\n", (void *)VAR_1->loader_ctx);
    VAR_2 = VAR_1->loader->close(VAR_1->loader_ctx);

    FUNC_0(VAR_1);
    return VAR_2;
}
