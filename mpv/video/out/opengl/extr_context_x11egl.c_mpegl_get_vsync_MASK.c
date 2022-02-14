
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_vsync_info {int dummy; } ;
struct ra_ctx {struct priv* priv; } ;
struct priv {int sync; } ;


 int FUNC_0 (int *,struct vo_vsync_info*) ;

__attribute__((used)) static void FUNC_1(struct ra_ctx *VAR_0, struct vo_vsync_info *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;
    FUNC_0(&VAR_2->sync, VAR_1);
}
