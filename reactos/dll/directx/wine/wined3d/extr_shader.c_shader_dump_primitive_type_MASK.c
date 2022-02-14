
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_primitive_type {int type; int patch_vertex_count; } ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct wined3d_string_buffer *VAR_0,
        const struct wined3d_shader_primitive_type *VAR_1)
{
    switch (VAR_1->type)
    {
        case 128:
            FUNC_0(VAR_0, "undefined");
            break;
        case 134:
            FUNC_0(VAR_0, "pointlist");
            break;
        case 139:
            FUNC_0(VAR_0, "linelist");
            break;
        case 137:
            FUNC_0(VAR_0, "linestrip");
            break;
        case 132:
            FUNC_0(VAR_0, "trianglelist");
            break;
        case 130:
            FUNC_0(VAR_0, "trianglestrip");
            break;
        case 133:
            FUNC_0(VAR_0, "trianglefan");
            break;
        case 138:
            FUNC_0(VAR_0, "linelist_adj");
            break;
        case 136:
            FUNC_0(VAR_0, "linestrip_adj");
            break;
        case 131:
            FUNC_0(VAR_0, "trianglelist_adj");
            break;
        case 129:
            FUNC_0(VAR_0, "trianglestrip_adj");
            break;
        case 135:
            FUNC_0(VAR_0, "patch%u", VAR_1->patch_vertex_count);
            break;
        default:
            FUNC_0(VAR_0, "<unrecognized_primitive_type %#x>", VAR_1->type);
            break;
    }
}
