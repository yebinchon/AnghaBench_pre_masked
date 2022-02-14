
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_tex {struct d3d_tex* priv; } ;
struct ra {int dummy; } ;
struct d3d_tex {int staging; int res; int sampler; int uav; int rtv; int srv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ra_tex*) ;

__attribute__((used)) static void FUNC_2(struct ra *VAR_0, struct ra_tex *VAR_1)
{
    if (!VAR_1)
        return;
    struct d3d_tex *VAR_2 = VAR_1->priv;

    FUNC_0(VAR_2->srv);
    FUNC_0(VAR_2->rtv);
    FUNC_0(VAR_2->uav);
    FUNC_0(VAR_2->sampler);
    FUNC_0(VAR_2->res);
    FUNC_0(VAR_2->staging);
    FUNC_1(VAR_1);
}
