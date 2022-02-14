
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int type; unsigned int major; int minor; } ;
struct wined3d_shader_reg_maps {TYPE_4__ shader_version; } ;
struct wined3d_shader_frontend {int (* shader_init ) (int ,int ,int *) ;} ;
struct wined3d_shader {int output_signature; int input_signature; int frontend_data; int functionLength; int function; struct wined3d_shader_frontend* frontend; TYPE_2__* device; struct wined3d_shader_reg_maps reg_maps; } ;
struct TYPE_7__ {unsigned int vs_version; unsigned int hs_version; unsigned int ds_version; unsigned int gs_version; unsigned int ps_version; unsigned int cs_version; } ;
struct wined3d_d3d_info {TYPE_3__ limits; } ;
typedef enum wined3d_shader_type { ____Placeholder_wined3d_shader_type } wined3d_shader_type ;
struct TYPE_6__ {TYPE_1__* adapter; } ;
struct TYPE_5__ {struct wined3d_d3d_info d3d_info; } ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,struct wined3d_shader*,int ,int,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,unsigned int,...) ;
 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_5 (struct wined3d_shader*,struct wined3d_shader_frontend const*,struct wined3d_shader_reg_maps*,int *,int *,int ) ;
 int FUNC_6 (struct wined3d_shader_frontend const*,int ) ;
 int FUNC_7 (int ,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_8(struct wined3d_shader *VAR_3, DWORD VAR_4,
        enum wined3d_shader_type VAR_5, unsigned int VAR_6)
{
    struct wined3d_shader_reg_maps *VAR_7 = &VAR_3->reg_maps;
    const struct wined3d_shader_frontend *VAR_8;
    HRESULT VAR_9;
    unsigned int VAR_10;
    const struct wined3d_d3d_info *VAR_11 = &VAR_3->device->adapter->d3d_info;

    FUNC_2("shader %p, float_const_count %u, type %#x, max_version %u.\n",
            VAR_3, VAR_4, VAR_5, VAR_6);

    VAR_8 = VAR_3->frontend;
    if (!(VAR_3->frontend_data = VAR_8->shader_init(VAR_3->function,
            VAR_3->functionLength, &VAR_3->output_signature)))
    {
        FUNC_1("Failed to initialize frontend.\n");
        return VAR_0;
    }


    if (FUNC_3(VAR_2))
        FUNC_6(VAR_8, VAR_3->frontend_data);


    if (FUNC_0(VAR_9 = FUNC_5(VAR_3, VAR_8, VAR_7, &VAR_3->input_signature,
            &VAR_3->output_signature, VAR_4)))
        return VAR_9;

    if (VAR_7->shader_version.type != VAR_5)
    {
        FUNC_4("Wrong shader type %d.\n", VAR_7->shader_version.type);
        return VAR_0;
    }
    if (VAR_7->shader_version.major > VAR_6)
    {
        FUNC_4("Shader version %d not supported by this D3D API version.\n", VAR_7->shader_version.major);
        return VAR_0;
    }
    switch (VAR_5)
    {
        case 128:
            VAR_10 = VAR_11->limits.vs_version;
            break;
        case 130:
            VAR_10 = VAR_11->limits.hs_version;
            break;
        case 132:
            VAR_10 = VAR_11->limits.ds_version;
            break;
        case 131:
            VAR_10 = VAR_11->limits.gs_version;
            break;
        case 129:
            VAR_10 = VAR_11->limits.ps_version;
            break;
        case 133:
            VAR_10 = VAR_11->limits.cs_version;
            break;
        default:
            FUNC_1("No backend version-checking for this shader type.\n");
            VAR_10 = 0;
    }
    if (VAR_7->shader_version.major > VAR_10)
    {
        FUNC_4("Shader version %d.%d not supported by your GPU with the current shader backend.\n",
                VAR_7->shader_version.major, VAR_7->shader_version.minor);
        return VAR_0;
    }

    return VAR_1;
}
