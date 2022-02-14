
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec_mapper {struct priv* priv; } ;
struct priv {int mapped; int vdp_surface; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ra_hwdec_mapper *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    VAR_2->vdp_surface = VAR_0;
    VAR_2->mapped = 0;
}
