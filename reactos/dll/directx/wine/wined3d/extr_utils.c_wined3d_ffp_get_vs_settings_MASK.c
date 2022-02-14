
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_stream_info {unsigned int use_map; int swizzle_map; scalar_t__ position_transformed; } ;
struct wined3d_state {scalar_t__ gl_primitive_type; int* render_states; unsigned int** texture_states; TYPE_3__* transforms; TYPE_2__** lights; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_ffp_vs_settings {int transformed; int point_size; int per_vertex_point_size; unsigned int texcoords; unsigned int* texgen; int flatshading; int vertexblends; int sw_blending; int vb_indices; int clipping; int normal; int normalize; int lighting; int localviewer; int diffuse_source; int emissive_source; int ambient_source; int specular_source; int ortho_fog; int swizzle_map; void* fog_mode; int parallel_point_light_count; int directional_light_count; int spot_light_count; int point_light_count; } ;
struct TYPE_8__ {scalar_t__ varying_count; } ;
struct wined3d_d3d_info {scalar_t__ emulated_flatshading; TYPE_4__ limits; } ;
struct wined3d_context {int device; struct wined3d_d3d_info* d3d_info; struct wined3d_gl_info* gl_info; struct wined3d_stream_info stream_info; } ;
struct TYPE_7__ {float _14; float _24; float _34; float _44; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ OriginalParms; } ;


 void* VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;




 void* VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 int VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;




 int FUNC_1 (struct wined3d_ffp_vs_settings*,int ,int) ;
 scalar_t__ FUNC_2 (struct wined3d_state const*,struct wined3d_stream_info const*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct wined3d_gl_info const*) ;

void FUNC_5(const struct wined3d_context *VAR_33,
        const struct wined3d_state *VAR_34, struct wined3d_ffp_vs_settings *VAR_35)
{
    const struct wined3d_stream_info *VAR_36 = &VAR_33->stream_info;
    const struct wined3d_gl_info *VAR_37 = VAR_33->gl_info;
    const struct wined3d_d3d_info *VAR_38 = VAR_33->d3d_info;
    unsigned int VAR_39, VAR_40;

    FUNC_1(VAR_35, 0, sizeof(*VAR_35));

    if (VAR_36->position_transformed)
    {
        VAR_35->transformed = 1;
        VAR_35->point_size = VAR_34->gl_primitive_type == VAR_1;
        VAR_35->per_vertex_point_size = !!(VAR_36->use_map & 1u << VAR_6);
        if (!VAR_34->render_states[VAR_20])
            VAR_35->fog_mode = VAR_10;
        else if (VAR_34->render_states[VAR_21] != VAR_12)
            VAR_35->fog_mode = VAR_8;
        else
            VAR_35->fog_mode = VAR_9;

        for (VAR_40 = 0; VAR_40 < VAR_3; ++VAR_40)
        {
            VAR_39 = VAR_34->texture_states[VAR_40][VAR_31];
            if (VAR_39 < VAR_3 && (VAR_36->use_map & (1u << (VAR_7 + VAR_39))))
                VAR_35->texcoords |= 1u << VAR_40;
            VAR_35->texgen[VAR_40] = VAR_34->texture_states[VAR_40][VAR_31];
        }
        if (VAR_38->limits.varying_count >= FUNC_4(VAR_37))
            VAR_35->texcoords = (1u << VAR_3) - 1;

        if (VAR_38->emulated_flatshading)
            VAR_35->flatshading = VAR_34->render_states[VAR_27] == VAR_30;
        else
            VAR_35->flatshading = VAR_0;

        VAR_35->swizzle_map = VAR_36->swizzle_map;

        return;
    }

    switch (VAR_34->render_states[VAR_29])
    {
        case 128:
        case 131:
        case 130:
        case 129:
            VAR_35->vertexblends = VAR_34->render_states[VAR_29];
            break;
        default:
            FUNC_0("Unsupported vertex blending: %d\n", VAR_34->render_states[VAR_29]);
            break;
    }

    if (FUNC_2(VAR_34, VAR_36))
    {
        if (FUNC_3(VAR_33->device))
            VAR_35->sw_blending = 1;
        else
            VAR_35->vb_indices = 1;
    }

    VAR_35->clipping = VAR_34->render_states[VAR_15]
            && VAR_34->render_states[VAR_16];
    VAR_35->normal = !!(VAR_36->use_map & (1u << VAR_5));
    VAR_35->normalize = VAR_35->normal && VAR_34->render_states[VAR_25];
    VAR_35->lighting = !!VAR_34->render_states[VAR_23];
    VAR_35->localviewer = !!VAR_34->render_states[VAR_24];
    VAR_35->point_size = VAR_34->gl_primitive_type == VAR_1;
    VAR_35->per_vertex_point_size = !!(VAR_36->use_map & 1u << VAR_6);

    if (VAR_34->render_states[VAR_17] && (VAR_36->use_map & (1u << VAR_4)))
    {
        VAR_35->diffuse_source = VAR_34->render_states[VAR_18];
        VAR_35->emissive_source = VAR_34->render_states[VAR_19];
        VAR_35->ambient_source = VAR_34->render_states[VAR_14];
        VAR_35->specular_source = VAR_34->render_states[VAR_28];
    }
    else
    {
        VAR_35->diffuse_source = VAR_13;
        VAR_35->emissive_source = VAR_13;
        VAR_35->ambient_source = VAR_13;
        VAR_35->specular_source = VAR_13;
    }

    for (VAR_40 = 0; VAR_40 < VAR_3; ++VAR_40)
    {
        VAR_39 = VAR_34->texture_states[VAR_40][VAR_31];
        if (VAR_39 < VAR_3 && (VAR_36->use_map & (1u << (VAR_7 + VAR_39))))
            VAR_35->texcoords |= 1u << VAR_40;
        VAR_35->texgen[VAR_40] = VAR_34->texture_states[VAR_40][VAR_31];
    }
    if (VAR_38->limits.varying_count >= FUNC_4(VAR_37))
        VAR_35->texcoords = (1u << VAR_3) - 1;

    for (VAR_40 = 0; VAR_40 < VAR_2; ++VAR_40)
    {
        if (!VAR_34->lights[VAR_40])
            continue;

        switch (VAR_34->lights[VAR_40]->OriginalParms.type)
        {
            case 133:
                ++VAR_35->point_light_count;
                break;
            case 132:
                ++VAR_35->spot_light_count;
                break;
            case 135:
                ++VAR_35->directional_light_count;
                break;
            case 134:
                ++VAR_35->parallel_point_light_count;
                break;
            default:
                FUNC_0("Unhandled light type %#x.\n", VAR_34->lights[VAR_40]->OriginalParms.type);
                break;
        }
    }

    if (!VAR_34->render_states[VAR_20])
        VAR_35->fog_mode = VAR_10;
    else if (VAR_34->render_states[VAR_21] != VAR_12)
    {
        VAR_35->fog_mode = VAR_8;

        if (VAR_34->transforms[VAR_32]._14 == 0.0f
                && VAR_34->transforms[VAR_32]._24 == 0.0f
                && VAR_34->transforms[VAR_32]._34 == 0.0f
                && VAR_34->transforms[VAR_32]._44 == 1.0f)
            VAR_35->ortho_fog = 1;
    }
    else if (VAR_34->render_states[VAR_22] == VAR_12)
        VAR_35->fog_mode = VAR_9;
    else if (VAR_34->render_states[VAR_26])
        VAR_35->fog_mode = VAR_11;
    else
        VAR_35->fog_mode = VAR_8;

    if (VAR_38->emulated_flatshading)
        VAR_35->flatshading = VAR_34->render_states[VAR_27] == VAR_30;
    else
        VAR_35->flatshading = VAR_0;

    VAR_35->swizzle_map = VAR_36->swizzle_map;
}
