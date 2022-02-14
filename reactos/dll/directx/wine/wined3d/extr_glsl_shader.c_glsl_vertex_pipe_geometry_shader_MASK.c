
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {TYPE_3__** shader; } ;
struct wined3d_context {unsigned int shader_update_mask; struct glsl_context_data* shader_backend_data; } ;
struct glsl_context_data {scalar_t__ rasterization_disabled; } ;
struct TYPE_4__ {int major; } ;
struct TYPE_5__ {TYPE_1__ shader_version; } ;
struct TYPE_6__ {TYPE_2__ reg_maps; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(struct wined3d_context *VAR_4,
        const struct wined3d_state *VAR_5, DWORD VAR_6)
{
    struct glsl_context_data *VAR_7 = VAR_4->shader_backend_data;
    BOOL VAR_8;

    VAR_8 = FUNC_0(VAR_5->shader[VAR_1]);
    if (VAR_7->rasterization_disabled != VAR_8)
        VAR_4->shader_update_mask |= 1u << VAR_2;
    VAR_7->rasterization_disabled = VAR_8;

    if (VAR_5->shader[VAR_0])
        VAR_4->shader_update_mask |= 1u << VAR_0;
    else if (VAR_5->shader[VAR_3]
            && VAR_5->shader[VAR_3]->reg_maps.shader_version.major >= 4)
        VAR_4->shader_update_mask |= 1u << VAR_3;
}
