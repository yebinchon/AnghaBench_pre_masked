
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs_set_sampler {size_t type; size_t sampler_idx; int sampler; } ;
struct TYPE_2__ {int ** sampler; } ;
struct wined3d_cs {int device; TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct wined3d_cs *VAR_3, const void *VAR_4)
{
    const struct wined3d_cs_set_sampler *VAR_5 = VAR_4;

    VAR_3->state.sampler[VAR_5->type][VAR_5->sampler_idx] = VAR_5->sampler;
    if (VAR_5->type != VAR_2)
        FUNC_0(VAR_3->device, VAR_1);
    else
        FUNC_0(VAR_3->device, VAR_0);
}
