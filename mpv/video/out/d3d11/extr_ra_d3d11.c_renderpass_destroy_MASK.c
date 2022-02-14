
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_renderpass {struct d3d_rpass* priv; } ;
struct ra {int dummy; } ;
struct d3d_rpass {int bstate; int layout; int cs; int ps; int vs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ra_renderpass*) ;

__attribute__((used)) static void FUNC_2(struct ra *VAR_0, struct ra_renderpass *VAR_1)
{
    if (!VAR_1)
        return;
    struct d3d_rpass *VAR_2 = VAR_1->priv;

    FUNC_0(VAR_2->vs);
    FUNC_0(VAR_2->ps);
    FUNC_0(VAR_2->cs);
    FUNC_0(VAR_2->layout);
    FUNC_0(VAR_2->bstate);
    FUNC_1(VAR_1);
}
