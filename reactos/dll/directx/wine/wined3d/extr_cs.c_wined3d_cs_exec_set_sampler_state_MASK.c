
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs_set_sampler_state {size_t sampler_idx; size_t state; int value; } ;
struct TYPE_2__ {int ** sampler_states; } ;
struct wined3d_cs {int device; TYPE_1__ state; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_set_sampler_state *VAR_2 = VAR_1;

    VAR_0->state.sampler_states[VAR_2->sampler_idx][VAR_2->state] = VAR_2->value;
    FUNC_1(VAR_0->device, FUNC_0(VAR_2->sampler_idx));
}
