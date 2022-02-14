
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_renderpass {struct pass_priv* priv; } ;
struct ra {int dummy; } ;
struct pl_pass {int dummy; } ;
struct pass_priv {int pl_pass; } ;


 int FUNC_0 (struct ra*) ;
 int FUNC_1 (int ,struct pl_pass const**) ;
 int FUNC_2 (struct ra_renderpass*) ;

__attribute__((used)) static void FUNC_3(struct ra *VAR_0, struct ra_renderpass *VAR_1)
{
    if (!VAR_1)
        return;

    struct pass_priv *VAR_2 = VAR_1->priv;
    FUNC_1(FUNC_0(VAR_0), (const struct pl_pass **) &VAR_2->pl_pass);
    FUNC_2(VAR_1);
}
