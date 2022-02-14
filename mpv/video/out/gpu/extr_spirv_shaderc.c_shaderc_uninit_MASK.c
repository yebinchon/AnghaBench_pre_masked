
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {TYPE_1__* spirv; } ;
struct priv {int compiler; int opts; } ;
struct TYPE_2__ {struct priv* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->spirv->priv;
    if (!VAR_1)
        return;

    FUNC_0(VAR_1->opts);
    FUNC_1(VAR_1->compiler);
}
