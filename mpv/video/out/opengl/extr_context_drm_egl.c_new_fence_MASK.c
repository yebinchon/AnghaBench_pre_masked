
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {struct priv* priv; } ;
struct TYPE_2__ {scalar_t__ (* FenceSync ) (int ,int ) ;} ;
struct priv {int num_vsync_fences; int vsync_fences; TYPE_1__ gl; } ;
typedef scalar_t__ GLsync ;


 int VAR_0 ;
 int FUNC_0 (struct priv*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    if (VAR_2->gl.FenceSync) {
        GLsync VAR_3 = VAR_2->gl.FenceSync(VAR_0, 0);
        if (VAR_3)
            FUNC_0(VAR_2, VAR_2->vsync_fences, VAR_2->num_vsync_fences, VAR_3);
    }
}
