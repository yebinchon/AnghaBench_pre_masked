
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_vdpau_ctx {void* preemption_obj; void* vdp_device; TYPE_1__* video_surfaces; } ;
struct TYPE_2__ {int allocated; void* osurface; void* surface; } ;


 int VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct mp_vdpau_ctx *VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        VAR_2->video_surfaces[VAR_3].surface = VAR_1;
        VAR_2->video_surfaces[VAR_3].osurface = VAR_1;
        VAR_2->video_surfaces[VAR_3].allocated = 0;
    }
    VAR_2->vdp_device = VAR_1;
    VAR_2->preemption_obj = VAR_1;
}
