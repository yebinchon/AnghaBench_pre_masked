
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_vsync_info {int dummy; } ;
struct vo {struct priv* priv; } ;
struct priv {struct vo_vsync_info vsync_info; } ;



__attribute__((used)) static void FUNC_0(struct vo *VAR_0, struct vo_vsync_info *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;
    *VAR_1 = VAR_2->vsync_info;
}
