
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_ctx {struct priv* priv; } ;
struct TYPE_4__ {int (* DeleteSync ) (int ) ;int (* ClientWaitSync ) (int ,int ,int) ;} ;
struct TYPE_3__ {scalar_t__ num_bos; } ;
struct priv {scalar_t__ num_vsync_fences; int * vsync_fences; TYPE_2__ gl; TYPE_1__ gbm; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    while (VAR_2->num_vsync_fences && (VAR_2->num_vsync_fences >= VAR_2->gbm.num_bos)) {
        VAR_2->gl.ClientWaitSync(VAR_2->vsync_fences[0], VAR_0, 1e9);
        VAR_2->gl.DeleteSync(VAR_2->vsync_fences[0]);
        FUNC_0(VAR_2->vsync_fences, VAR_2->num_vsync_fences, 0);
    }
}
