
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec_mapper {int * tex; int ra; struct priv* priv; } ;
struct priv {int ctx; int copy_tex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ra_hwdec_mapper *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    for (int VAR_2 = 0; VAR_2 < 4; VAR_2++)
        FUNC_1(VAR_0->ra, &VAR_0->tex[VAR_2]);
    FUNC_0(VAR_1->copy_tex);
    FUNC_0(VAR_1->ctx);
}
