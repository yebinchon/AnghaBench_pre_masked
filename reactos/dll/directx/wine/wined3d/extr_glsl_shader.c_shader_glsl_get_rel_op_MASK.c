
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
        case 131: return ">";
        case 133: return "==";
        case 132: return ">=";
        case 129: return "<";
        case 128: return "!=";
        case 130: return "<=";
        default:
            FUNC_0("Unrecognized operator %#x.\n", VAR_0);
            return "(\?\?)";
    }
}
