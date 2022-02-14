
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_shader_rel_op { ____Placeholder_wined3d_shader_rel_op } wined3d_shader_rel_op ;


 int FUNC_0 (char*,int) ;







__attribute__((used)) static const char *FUNC_1(enum wined3d_shader_rel_op VAR_0)
{
    switch (VAR_0)
    {
        case 131: return "GT";
        case 133: return "EQ";
        case 132: return "GE";
        case 129: return "LT";
        case 128: return "NE";
        case 130: return "LE";
        default:
            FUNC_0("Unrecognized operator %#x.\n", VAR_0);
            return "(\?\?)";
    }
}
