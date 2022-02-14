
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_shader_signature_element {char* semantic_name; int semantic_idx; size_t register_idx; } ;
struct TYPE_3__ {unsigned int element_count; struct wined3d_shader_signature_element* elements; } ;
struct wined3d_shader {TYPE_1__ input_signature; } ;
struct shader_arb_ctx_priv {char** ps_input; } ;
struct TYPE_4__ {int vp_mode; } ;
struct arb_ps_compile_args {TYPE_2__ super; } ;
typedef int DWORD ;


 int FUNC_0 (char*,size_t,char const*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (char const*,int ) ;


__attribute__((used)) static void FUNC_2(const struct wined3d_shader *VAR_3,
        const struct arb_ps_compile_args *VAR_4, struct shader_arb_ctx_priv *VAR_5)
{
    static const char * const VAR_6[8] =
    {
        "fragment.texcoord[0]", "fragment.texcoord[1]", "fragment.texcoord[2]", "fragment.texcoord[3]",
        "fragment.texcoord[4]", "fragment.texcoord[5]", "fragment.texcoord[6]", "fragment.texcoord[7]"
    };
    unsigned int VAR_7;
    const struct wined3d_shader_signature_element *VAR_8;
    const char *VAR_9;
    DWORD VAR_10;

    switch(VAR_4->super.vp_mode)
    {
        case 129:
        case 130:
            for (VAR_7 = 0; VAR_7 < VAR_3->input_signature.element_count; ++VAR_7)
            {
                VAR_8 = &VAR_3->input_signature.elements[VAR_7];
                if (!(VAR_9 = VAR_8->semantic_name))
                    continue;
                VAR_10 = VAR_8->semantic_idx;

                if (FUNC_1(VAR_9, VAR_0))
                {
                    if (!VAR_10)
                        VAR_5->ps_input[VAR_8->register_idx] = "fragment.color.primary";
                    else if (VAR_10 == 1)
                        VAR_5->ps_input[VAR_8->register_idx] = "fragment.color.secondary";
                    else
                        VAR_5->ps_input[VAR_8->register_idx] = "0.0";
                }
                else if (VAR_4->super.vp_mode == 130)
                {
                    VAR_5->ps_input[VAR_8->register_idx] = "0.0";
                }
                else if (FUNC_1(VAR_9, VAR_2))
                {
                    if (VAR_10 < 8)
                        VAR_5->ps_input[VAR_8->register_idx] = VAR_6[VAR_10];
                    else
                        VAR_5->ps_input[VAR_8->register_idx] = "0.0";
                }
                else if (FUNC_1(VAR_9, VAR_1))
                {
                    if (!VAR_10)
                        VAR_5->ps_input[VAR_8->register_idx] = "fragment.fogcoord";
                    else
                        VAR_5->ps_input[VAR_8->register_idx] = "0.0";
                }
                else
                {
                    VAR_5->ps_input[VAR_8->register_idx] = "0.0";
                }

                FUNC_0("v%u, semantic %s%u is %s\n", VAR_8->register_idx,
                        VAR_9, VAR_10, VAR_5->ps_input[VAR_8->register_idx]);
            }
            break;

        case 128:



            for(VAR_7 = 0; VAR_7 < 8; VAR_7++)
            {
                VAR_5->ps_input[VAR_7] = VAR_6[VAR_7];
            }
            VAR_5->ps_input[8] = "fragment.color.primary";
            VAR_5->ps_input[9] = "fragment.color.secondary";
            break;
    }
}
