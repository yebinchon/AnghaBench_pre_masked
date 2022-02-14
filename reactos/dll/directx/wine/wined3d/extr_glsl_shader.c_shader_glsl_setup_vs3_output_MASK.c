
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int buffer; } ;
struct wined3d_shader_signature_element {unsigned int register_idx; scalar_t__ semantic_idx; unsigned int mask; int semantic_name; } ;
struct wined3d_shader_signature {unsigned int element_count; struct wined3d_shader_signature_element* elements; } ;
struct TYPE_2__ {unsigned int* output_registers_mask; } ;
struct wined3d_shader_reg_maps {unsigned int input_registers; unsigned int output_registers; TYPE_1__ u; } ;
struct wined3d_gl_info {int dummy; } ;
struct shader_glsl_priv {int string_buffers; struct wined3d_string_buffer shader_buffer; } ;
typedef unsigned int DWORD ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int* FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int*) ;
 scalar_t__ FUNC_3 (struct wined3d_gl_info const*) ;
 int FUNC_4 (struct wined3d_string_buffer*,char*,int ,char*,...) ;
 char* FUNC_5 (struct wined3d_gl_info const*) ;
 int FUNC_6 (unsigned int,char*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 struct wined3d_string_buffer* FUNC_8 (int *) ;
 int FUNC_9 (int *,struct wined3d_string_buffer*) ;
 int FUNC_10 (struct wined3d_string_buffer*,char*,...) ;
 unsigned int FUNC_11 (int,struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_12(struct shader_glsl_priv *VAR_5,
        const struct wined3d_gl_info *VAR_6, const DWORD *VAR_7,
        const struct wined3d_shader_signature *VAR_8,
        const struct wined3d_shader_reg_maps *VAR_9,
        const struct wined3d_shader_signature *VAR_10,
        const struct wined3d_shader_reg_maps *VAR_11)
{
    struct wined3d_string_buffer *VAR_12 = FUNC_8(&VAR_5->string_buffers);
    const char *VAR_13 = FUNC_5(VAR_6);
    struct wined3d_string_buffer *VAR_14 = &VAR_5->shader_buffer;
    unsigned int VAR_15 = FUNC_11(3, VAR_6);
    unsigned int VAR_16 = FUNC_3(VAR_6) ? VAR_15 + 2 : VAR_15;
    DWORD VAR_17, *VAR_18 = ((void*)0);
    unsigned int VAR_19, VAR_20;
    char VAR_21[6];

    VAR_18 = FUNC_1(VAR_16, sizeof(*VAR_18));

    for (VAR_19 = 0; VAR_19 < VAR_8->element_count; ++VAR_19)
    {
        const struct wined3d_shader_signature_element *VAR_22 = &VAR_8->elements[VAR_19];

        if (!(VAR_9->input_registers & (1u << VAR_22->register_idx)))
            continue;

        VAR_17 = VAR_7[VAR_22->register_idx];

        if (VAR_17 == ~0u)
            continue;
        if (VAR_17 >= VAR_16)
        {
            FUNC_0("More input varyings declared than supported, expect issues.\n");
            continue;
        }

        if (VAR_17 == VAR_15)
            FUNC_10(VAR_12, "gl_FrontColor");
        else if (VAR_17 == VAR_15 + 1)
            FUNC_10(VAR_12, "gl_FrontSecondaryColor");
        else
            FUNC_10(VAR_12, "%s[%u]", VAR_13, VAR_17);

        if (!VAR_18[VAR_17])
            VAR_18[VAR_17] = ~0u;

        for (VAR_20 = 0; VAR_20 < VAR_10->element_count; ++VAR_20)
        {
            const struct wined3d_shader_signature_element *VAR_23 = &VAR_10->elements[VAR_20];
            DWORD VAR_24;

            if (!(VAR_11->output_registers & (1u << VAR_23->register_idx))
                    || VAR_22->semantic_idx != VAR_23->semantic_idx
                    || FUNC_7(VAR_22->semantic_name, VAR_23->semantic_name)
                    || !(VAR_24 = VAR_22->mask & VAR_23->mask))
                continue;

            if (VAR_18[VAR_17] == ~0u)
                VAR_18[VAR_17] = 0;
            VAR_18[VAR_17] |= VAR_24 & VAR_11->u.output_registers_mask[VAR_23->register_idx];
            FUNC_6(VAR_24, VAR_21);

            FUNC_4(VAR_14, "%s%s = outputs[%u]%s;\n",
                    VAR_12->buffer, VAR_21, VAR_23->register_idx, VAR_21);
        }
    }

    for (VAR_19 = 0; VAR_19 < VAR_16; ++VAR_19)
    {
        unsigned int VAR_25;

        if (!VAR_18[VAR_19] || VAR_18[VAR_19] == VAR_4)
            continue;

        if (VAR_18[VAR_19] == ~0u)
            VAR_18[VAR_19] = 0;

        VAR_25 = 0;
        if (!(VAR_18[VAR_19] & VAR_0))
            VAR_21[VAR_25++] = 'x';
        if (!(VAR_18[VAR_19] & VAR_1))
            VAR_21[VAR_25++] = 'y';
        if (!(VAR_18[VAR_19] & VAR_2))
            VAR_21[VAR_25++] = 'z';
        if (!(VAR_18[VAR_19] & VAR_3))
            VAR_21[VAR_25++] = 'w';
        VAR_21[VAR_25] = '\0';

        if (VAR_19 == VAR_15)
            FUNC_10(VAR_12, "gl_FrontColor");
        else if (VAR_19 == VAR_15 + 1)
            FUNC_10(VAR_12, "gl_FrontSecondaryColor");
        else
            FUNC_10(VAR_12, "%s[%u]", VAR_13, VAR_19);

        if (VAR_25 == 1)
            FUNC_4(VAR_14, "%s.%s = 0.0;\n", VAR_12->buffer, VAR_21);
        else
            FUNC_4(VAR_14, "%s.%s = vec%u(0.0);\n", VAR_12->buffer, VAR_21, VAR_25);
    }

    FUNC_2(VAR_18);
    FUNC_9(&VAR_5->string_buffers, VAR_12);
}
