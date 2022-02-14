
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_material_color_source { ____Placeholder_wined3d_material_color_source } wined3d_material_color_source ;


 int FUNC_0 (char*,int) ;




__attribute__((used)) static const char *FUNC_1(enum wined3d_material_color_source VAR_0, const char *VAR_1)
{
    switch (VAR_0)
    {
        case 128:
            return VAR_1;
        case 130:
            return "ffp_attrib_diffuse";
        case 129:
            return "ffp_attrib_specular";
        default:
            FUNC_0("Invalid material color source %#x.\n", VAR_0);
            return "<invalid>";
    }
}
