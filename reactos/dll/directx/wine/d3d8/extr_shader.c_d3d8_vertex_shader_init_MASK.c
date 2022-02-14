
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ element_count; } ;
struct TYPE_5__ {scalar_t__ element_count; } ;
struct TYPE_4__ {scalar_t__ element_count; } ;
struct wined3d_shader_desc {scalar_t__ const* byte_code; size_t byte_code_size; int max_version; TYPE_3__ patch_constant_signature; TYPE_2__ output_signature; TYPE_1__ input_signature; int format; } ;
struct d3d8_vertex_shader {int wined3d_shader; int vertex_declaration; } ;
struct d3d8_device {int wined3d_device; } ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef int D3DVSD_TOKENTYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 scalar_t__ const FUNC_0 () ;
 scalar_t__ const VAR_5 ;
 scalar_t__ const VAR_6 ;
 int VAR_7 ;
 scalar_t__ const VAR_8 ;
 scalar_t__ const VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct d3d8_device*,scalar_t__ const*,scalar_t__,int *) ;
 int VAR_12 ;
 int FUNC_6 (scalar_t__ const*,int ) ;
 int FUNC_7 (scalar_t__ const*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,struct wined3d_shader_desc*,struct d3d8_vertex_shader*,int *,int *) ;

HRESULT FUNC_11(struct d3d8_vertex_shader *VAR_13, struct d3d8_device *VAR_14,
        const DWORD *VAR_15, const DWORD *VAR_16, DWORD VAR_17, DWORD VAR_18)
{
    const DWORD *VAR_19 = VAR_15;
    HRESULT VAR_20;


    while (FUNC_0() != *VAR_19)
    {
        D3DVSD_TOKENTYPE VAR_21 = ((*VAR_19 & VAR_5) >> VAR_6);

        if (VAR_21 == VAR_7 && !(VAR_21 & 0x10000000))
        {
            DWORD VAR_22 = ((*VAR_19 & VAR_3) >> VAR_4);
            DWORD VAR_23 = ((*VAR_19 & VAR_8) >> VAR_9);

            if (VAR_23 == VAR_1 && VAR_22 != VAR_2 && !VAR_16)
            {
                FUNC_3("Attempt to use a non-FLOAT3 normal with the fixed-function function\n");
                return VAR_0;
            }
        }
        VAR_19 += FUNC_7(VAR_19);
    }

    VAR_20 = FUNC_5(VAR_14, VAR_15, VAR_17, &VAR_13->vertex_declaration);
    if (FUNC_1(VAR_20))
    {
        FUNC_3("Failed to create vertex declaration, hr %#x.\n", VAR_20);
        return VAR_20;
    }

    if (VAR_16)
    {
        struct wined3d_shader_desc VAR_24;

        if (VAR_18)
            FUNC_2("Usage %#x not implemented.\n", VAR_18);

        VAR_24.byte_code = VAR_16;
        VAR_24.byte_code_size = ~(size_t)0;
        VAR_24.format = VAR_11;
        VAR_24.input_signature.element_count = 0;
        VAR_24.output_signature.element_count = 0;
        VAR_24.patch_constant_signature.element_count = 0;
        VAR_24.max_version = 1;

        FUNC_8();
        VAR_20 = FUNC_10(VAR_14->wined3d_device, &VAR_24, VAR_13,
                &VAR_12, &VAR_13->wined3d_shader);
        FUNC_9();
        if (FUNC_1(VAR_20))
        {
            FUNC_3("Failed to create wined3d vertex shader, hr %#x.\n", VAR_20);
            FUNC_4(VAR_13->vertex_declaration);
            return VAR_20;
        }

        FUNC_6(VAR_15, VAR_13->wined3d_shader);
    }

    return VAR_10;
}
