
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_shader_register_type { ____Placeholder_wined3d_shader_register_type } wined3d_shader_register_type ;
typedef unsigned int UINT ;


 int FUNC_0 (char*,int) ;





__attribute__((used)) static unsigned int FUNC_1(enum wined3d_shader_register_type VAR_0, UINT VAR_1)
{
    switch (VAR_0)
    {
        case 131: return VAR_1;
        case 130: return 2048 + VAR_1;
        case 129: return 4096 + VAR_1;
        case 128: return 6144 + VAR_1;
        default:
            FUNC_0("Unsupported register type: %u.\n", VAR_0);
            return VAR_1;
    }
}
