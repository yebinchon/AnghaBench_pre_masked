
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int* renderState; int* transform; unsigned int vertexShaderConstantsI; unsigned int vertexShaderConstantsB; unsigned int pixelShaderConstantsI; unsigned int pixelShaderConstantsB; int* textureState; int* samplerState; scalar_t__* ps_consts_f; scalar_t__* vs_consts_f; } ;
struct wined3d_stateblock {unsigned int* contained_render_states; size_t num_contained_render_states; unsigned int* contained_transform_states; size_t num_contained_transform_states; unsigned int* contained_vs_consts_f; size_t num_contained_vs_consts_f; unsigned int* contained_vs_consts_i; size_t num_contained_vs_consts_i; unsigned int* contained_vs_consts_b; size_t num_contained_vs_consts_b; unsigned int* contained_ps_consts_f; size_t num_contained_ps_consts_f; unsigned int* contained_ps_consts_i; size_t num_contained_ps_consts_i; unsigned int* contained_ps_consts_b; size_t num_contained_ps_consts_b; size_t num_contained_tss_states; size_t num_contained_sampler_states; TYPE_6__* contained_sampler_states; TYPE_5__ changed; TYPE_4__* contained_tss_states; TYPE_2__* device; } ;
struct TYPE_9__ {unsigned int vs_uniform_count; unsigned int ps_uniform_count; } ;
struct wined3d_d3d_info {TYPE_3__ limits; } ;
struct TYPE_12__ {unsigned int stage; unsigned int state; } ;
struct TYPE_10__ {unsigned int stage; unsigned int state; } ;
struct TYPE_8__ {TYPE_1__* adapter; } ;
struct TYPE_7__ {struct wined3d_d3d_info d3d_info; } ;
typedef int DWORD ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

void FUNC_0(struct wined3d_stateblock *VAR_6)
{
    const struct wined3d_d3d_info *VAR_7 = &VAR_6->device->adapter->d3d_info;
    unsigned int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 <= VAR_5 >> 5; ++VAR_8)
    {
        DWORD VAR_10 = VAR_6->changed.renderState[VAR_8];
        for (VAR_9 = 0; VAR_10; VAR_10 >>= 1, ++VAR_9)
        {
            if (!(VAR_10 & 1)) continue;

            VAR_6->contained_render_states[VAR_6->num_contained_render_states] = (VAR_8 << 5) | VAR_9;
            ++VAR_6->num_contained_render_states;
        }
    }

    for (VAR_8 = 0; VAR_8 <= VAR_0 >> 5; ++VAR_8)
    {
        DWORD VAR_11 = VAR_6->changed.transform[VAR_8];
        for (VAR_9 = 0; VAR_11; VAR_11 >>= 1, ++VAR_9)
        {
            if (!(VAR_11 & 1)) continue;

            VAR_6->contained_transform_states[VAR_6->num_contained_transform_states] = (VAR_8 << 5) | VAR_9;
            ++VAR_6->num_contained_transform_states;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_7->limits.vs_uniform_count; ++VAR_8)
    {
        if (VAR_6->changed.vs_consts_f[VAR_8])
        {
            VAR_6->contained_vs_consts_f[VAR_6->num_contained_vs_consts_f] = VAR_8;
            ++VAR_6->num_contained_vs_consts_f;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
    {
        if (VAR_6->changed.vertexShaderConstantsI & (1u << VAR_8))
        {
            VAR_6->contained_vs_consts_i[VAR_6->num_contained_vs_consts_i] = VAR_8;
            ++VAR_6->num_contained_vs_consts_i;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8)
    {
        if (VAR_6->changed.vertexShaderConstantsB & (1u << VAR_8))
        {
            VAR_6->contained_vs_consts_b[VAR_6->num_contained_vs_consts_b] = VAR_8;
            ++VAR_6->num_contained_vs_consts_b;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_7->limits.ps_uniform_count; ++VAR_8)
    {
        if (VAR_6->changed.ps_consts_f[VAR_8])
        {
            VAR_6->contained_ps_consts_f[VAR_6->num_contained_ps_consts_f] = VAR_8;
            ++VAR_6->num_contained_ps_consts_f;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
    {
        if (VAR_6->changed.pixelShaderConstantsI & (1u << VAR_8))
        {
            VAR_6->contained_ps_consts_i[VAR_6->num_contained_ps_consts_i] = VAR_8;
            ++VAR_6->num_contained_ps_consts_i;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8)
    {
        if (VAR_6->changed.pixelShaderConstantsB & (1u << VAR_8))
        {
            VAR_6->contained_ps_consts_b[VAR_6->num_contained_ps_consts_b] = VAR_8;
            ++VAR_6->num_contained_ps_consts_b;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8)
    {
        DWORD VAR_12 = VAR_6->changed.textureState[VAR_8];

        for(VAR_9 = 0; VAR_12; VAR_12 >>= 1, ++VAR_9)
        {
            if (!(VAR_12 & 1)) continue;

            VAR_6->contained_tss_states[VAR_6->num_contained_tss_states].stage = VAR_8;
            VAR_6->contained_tss_states[VAR_6->num_contained_tss_states].state = VAR_9;
            ++VAR_6->num_contained_tss_states;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8)
    {
        DWORD VAR_13 = VAR_6->changed.samplerState[VAR_8];

        for (VAR_9 = 0; VAR_13; VAR_13 >>= 1, ++VAR_9)
        {
            if (!(VAR_13 & 1)) continue;

            VAR_6->contained_sampler_states[VAR_6->num_contained_sampler_states].stage = VAR_8;
            VAR_6->contained_sampler_states[VAR_6->num_contained_sampler_states].state = VAR_9;
            ++VAR_6->num_contained_sampler_states;
        }
    }
}
