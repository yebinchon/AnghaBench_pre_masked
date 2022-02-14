
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_gl_resource_type { ____Placeholder_wined3d_gl_resource_type } wined3d_gl_resource_type ;
__attribute__((used)) static const char *FUNC_0(enum wined3d_gl_resource_type VAR_0)
{
    switch(VAR_0)
    {
        case 132:
            return "1D";
        case 131:
            return "2D";
        case 130:
            return "3D";
        case 129:
            return "CUBE";
        case 128:
            return "RECT";
        default:
            return "unexpected_resource_type";
    }
}
