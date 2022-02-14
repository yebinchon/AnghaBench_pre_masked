
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ ra_ctx; } ;
struct libmpv_gpu_context {struct priv* priv; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct libmpv_gpu_context *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->ra_ctx)
        FUNC_0(VAR_1->ra_ctx);
}
