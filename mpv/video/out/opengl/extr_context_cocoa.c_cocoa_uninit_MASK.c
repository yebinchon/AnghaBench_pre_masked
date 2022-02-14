
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {int ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ra_ctx*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_1(VAR_0);
    FUNC_0(VAR_1->ctx);
    FUNC_2(VAR_0->vo);
}
