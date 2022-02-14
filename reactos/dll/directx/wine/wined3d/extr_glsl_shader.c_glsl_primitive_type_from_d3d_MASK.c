
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_primitive_type { ____Placeholder_wined3d_primitive_type } wined3d_primitive_type ;


 int FUNC_0 (char*,int ) ;







 int FUNC_1 (int) ;

__attribute__((used)) static const char *FUNC_2(enum wined3d_primitive_type VAR_0)
{
    switch (VAR_0)
    {
        case 131:
            return "points";

        case 134:
            return "lines";

        case 132:
            return "line_strip";

        case 130:
            return "triangles";

        case 128:
            return "triangle_strip";

        case 133:
            return "lines_adjacency";

        case 129:
            return "triangles_adjacency";

        default:
            FUNC_0("Unhandled primitive type %s.\n", FUNC_1(VAR_0));
            return "";
    }
}
