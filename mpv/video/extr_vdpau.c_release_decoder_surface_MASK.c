
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct surface_ref {size_t index; struct mp_vdpau_ctx* ctx; } ;
struct mp_vdpau_ctx {int pool_lock; TYPE_1__* video_surfaces; } ;
struct TYPE_2__ {int in_use; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct surface_ref*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
    struct surface_ref *VAR_1 = VAR_0;
    struct mp_vdpau_ctx *VAR_2 = VAR_1->ctx;

    FUNC_1(&VAR_2->pool_lock);
    FUNC_0(VAR_2->video_surfaces[VAR_1->index].in_use);
    VAR_2->video_surfaces[VAR_1->index].in_use = 0;
    FUNC_2(&VAR_2->pool_lock);

    FUNC_3(VAR_1);
}
