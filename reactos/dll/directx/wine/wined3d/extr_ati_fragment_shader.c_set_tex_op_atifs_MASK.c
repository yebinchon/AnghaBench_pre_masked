
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {int * textures; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_device {struct atifs_private_data* fragment_priv; } ;
struct TYPE_4__ {unsigned int ffp_blend_stages; } ;
struct wined3d_d3d_info {TYPE_1__ limits; } ;
struct wined3d_context {scalar_t__* tex_unit_map; struct atifs_context_private_data* fragment_pipe_data; struct wined3d_d3d_info* d3d_info; struct wined3d_gl_info* gl_info; struct wined3d_device* device; } ;
struct ffp_frag_settings {TYPE_2__* op; } ;
struct atifs_private_data {int fragment_shaders; } ;
struct TYPE_6__ {struct ffp_frag_settings settings; } ;
typedef struct atifs_ffp_desc {unsigned int num_textures_used; int* constants; int shader; TYPE_3__ parent; } const atifs_ffp_desc ;
struct atifs_context_private_data {struct atifs_ffp_desc const* last_shader; } ;
struct TYPE_5__ {scalar_t__ cop; } ;
typedef scalar_t__ DWORD ;





 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (char*,struct atifs_ffp_desc const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 int FUNC_7 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 int FUNC_8 (struct wined3d_context*,struct wined3d_gl_info const*,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,struct ffp_frag_settings*) ;
 int FUNC_10 (TYPE_2__*,struct wined3d_gl_info const*,int*) ;
 int FUNC_11 (struct wined3d_context*,struct wined3d_state const*,struct ffp_frag_settings*,int ) ;
 int FUNC_12 (int ) ;
 struct atifs_ffp_desc const* FUNC_13 (int) ;
 int FUNC_14 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 int FUNC_15 (int ,struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_16(struct wined3d_context *VAR_7, const struct wined3d_state *VAR_8, DWORD VAR_9)
{
    const struct wined3d_device *VAR_10 = VAR_7->device;
    const struct wined3d_gl_info *VAR_11 = VAR_7->gl_info;
    const struct wined3d_d3d_info *VAR_12 = VAR_7->d3d_info;
    struct atifs_context_private_data *VAR_13 = VAR_7->fragment_pipe_data;
    const struct atifs_ffp_desc *VAR_14, *VAR_15 = VAR_13->last_shader;
    struct ffp_frag_settings VAR_16;
    struct atifs_private_data *VAR_17 = VAR_10->fragment_priv;
    DWORD VAR_18;
    unsigned int VAR_19;

    FUNC_11(VAR_7, VAR_8, &VAR_16, VAR_1);
    VAR_14 = (const struct atifs_ffp_desc *)FUNC_9(&VAR_17->fragment_shaders, &VAR_16);
    if (!VAR_14)
    {
        struct atifs_ffp_desc *VAR_20;

        if (!(VAR_20 = FUNC_13(sizeof(*VAR_20))))
        {
            FUNC_0("Out of memory\n");
            return;
        }
        VAR_20->num_textures_used = 0;
        for (VAR_19 = 0; VAR_19 < VAR_12->limits.ffp_blend_stages; ++VAR_19)
        {
            if (VAR_16.op[VAR_19].cop == VAR_3)
                break;
            ++VAR_20->num_textures_used;
        }

        VAR_20->parent.settings = VAR_16;
        VAR_20->shader = FUNC_10(VAR_16.op, VAR_11, VAR_20->constants);
        FUNC_5(&VAR_17->fragment_shaders, &VAR_20->parent);
        FUNC_4("Allocated fixed function replacement shader descriptor %p.\n", VAR_20);
        VAR_14 = VAR_20;
    }




    for (VAR_19 = 0; VAR_19 < VAR_14->num_textures_used; ++VAR_19)
    {
        VAR_18 = VAR_7->tex_unit_map[VAR_19];
        if (VAR_18 != VAR_6)
        {
            FUNC_8(VAR_7, VAR_11, VAR_18);
            FUNC_15(VAR_8->textures[VAR_19], VAR_11);
        }
    }

    FUNC_1(FUNC_12(VAR_14->shader));
    VAR_13->last_shader = VAR_14;

    for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++)
    {
        if (VAR_15 && VAR_15->constants[VAR_19] == VAR_14->constants[VAR_19])
            continue;

        switch (VAR_14->constants[VAR_19])
        {
            case 130:
                FUNC_14(VAR_7, VAR_8, FUNC_3(VAR_19, VAR_4));
                break;

            case 128:
                FUNC_7(VAR_7, VAR_8, FUNC_2(VAR_2));
                break;

            case 129:
                FUNC_6(VAR_7, VAR_8, FUNC_3(VAR_19, VAR_5));
                break;

            default:
                FUNC_0("Unexpected constant type %u.\n", VAR_14->constants[VAR_19]);
        }
    }
}
