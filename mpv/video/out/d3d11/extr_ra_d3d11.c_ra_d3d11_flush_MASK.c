
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_d3d11 {int ctx; } ;
struct ra {struct ra_d3d11* priv; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct ra *VAR_0)
{
    struct ra_d3d11 *VAR_1 = VAR_0->priv;
    FUNC_0(VAR_1->ctx);
}
