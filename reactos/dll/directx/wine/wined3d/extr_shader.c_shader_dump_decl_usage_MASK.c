
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_version {int major; scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ reg; } ;
struct wined3d_shader_semantic {int resource_type; int resource_data_type; int usage; int usage_idx; TYPE_2__ reg; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_2 (struct wined3d_string_buffer*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct wined3d_string_buffer *VAR_4,
        const struct wined3d_shader_semantic *VAR_5, unsigned int VAR_6,
        const struct wined3d_shader_version *VAR_7)
{
    FUNC_1(VAR_4, "dcl");

    if (VAR_5->reg.reg.type == VAR_1)
    {
        switch (VAR_5->resource_type)
        {
            case 134:
                FUNC_1(VAR_4, "_2d");
                break;

            case 130:
                FUNC_1(VAR_4, "_3d");
                break;

            case 129:
                FUNC_1(VAR_4, "_cube");
                break;

            default:
                FUNC_1(VAR_4, "_unknown_resource_type(%#x)", VAR_5->resource_type);
                break;
        }
    }
    else if (VAR_5->reg.reg.type == VAR_0 || VAR_5->reg.reg.type == VAR_2)
    {
        if (VAR_5->reg.reg.type == VAR_0)
            FUNC_1(VAR_4, "_resource_");
        else
            FUNC_1(VAR_4, "_uav_");
        switch (VAR_5->resource_type)
        {
            case 137:
                FUNC_1(VAR_4, "buffer");
                break;

            case 136:
                FUNC_1(VAR_4, "texture1d");
                break;

            case 134:
                FUNC_1(VAR_4, "texture2d");
                break;

            case 132:
                FUNC_1(VAR_4, "texture2dms");
                break;

            case 130:
                FUNC_1(VAR_4, "texture3d");
                break;

            case 129:
                FUNC_1(VAR_4, "texturecube");
                break;

            case 135:
                FUNC_1(VAR_4, "texture1darray");
                break;

            case 133:
                FUNC_1(VAR_4, "texture2darray");
                break;

            case 131:
                FUNC_1(VAR_4, "texture2dmsarray");
                break;

            case 128:
                FUNC_1(VAR_4, "texturecubearray");
                break;

            default:
                FUNC_1(VAR_4, "unknown");
                break;
        }
        if (VAR_5->reg.reg.type == VAR_2)
            FUNC_2(VAR_4, VAR_6);
        switch (VAR_5->resource_data_type)
        {
            case 156:
                FUNC_1(VAR_4, " (float)");
                break;

            case 155:
                FUNC_1(VAR_4, " (int)");
                break;

            case 153:
                FUNC_1(VAR_4, " (uint)");
                break;

            case 152:
                FUNC_1(VAR_4, " (unorm)");
                break;

            case 154:
                FUNC_1(VAR_4, " (snorm)");
                break;

            default:
                FUNC_1(VAR_4, " (unknown)");
                break;
        }
    }
    else
    {

        if (VAR_7->major < 3 && VAR_7->type == VAR_3)
            return;
        else
            FUNC_1(VAR_4, "_");

        switch (VAR_5->usage)
        {
            case 144:
                FUNC_1(VAR_4, "position%u", VAR_5->usage_idx);
                break;

            case 150:
                FUNC_1(VAR_4, "blend");
                break;

            case 149:
                FUNC_1(VAR_4, "weight");
                break;

            case 145:
                FUNC_1(VAR_4, "normal%u", VAR_5->usage_idx);
                break;

            case 142:
                FUNC_1(VAR_4, "psize");
                break;

            case 148:
                if (!VAR_5->usage_idx)
                    FUNC_1(VAR_4, "color");
                else
                    FUNC_1(VAR_4, "specular%u", (VAR_5->usage_idx - 1));
                break;

            case 138:
                FUNC_1(VAR_4, "texture%u", VAR_5->usage_idx);
                break;

            case 140:
                FUNC_1(VAR_4, "tangent");
                break;

            case 151:
                FUNC_1(VAR_4, "binormal");
                break;

            case 139:
                FUNC_1(VAR_4, "tessfactor");
                break;

            case 143:
                FUNC_1(VAR_4, "positionT%u", VAR_5->usage_idx);
                break;

            case 146:
                FUNC_1(VAR_4, "fog");
                break;

            case 147:
                FUNC_1(VAR_4, "depth");
                break;

            case 141:
                FUNC_1(VAR_4, "sample");
                break;

            default:
                FUNC_1(VAR_4, "<unknown_semantic(%#x)>", VAR_5->usage);
                FUNC_0("Unrecognised semantic usage %#x.\n", VAR_5->usage);
        }
    }
}
