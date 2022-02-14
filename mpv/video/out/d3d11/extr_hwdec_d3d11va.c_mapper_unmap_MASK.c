
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec_mapper {int * tex; int ra; struct priv* priv; } ;
struct priv {scalar_t__ copy_tex; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct ra_hwdec_mapper *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (VAR_1->copy_tex)
        return;
    for (int VAR_2 = 0; VAR_2 < 4; VAR_2++)
        FUNC_0(VAR_0->ra, &VAR_0->tex[VAR_2]);
}
