
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_type {int base_type; int sampler_dim; } ;


 int FUNC_0 (char*,int) ;
__attribute__((used)) static const char *FUNC_1(const struct hlsl_type *VAR_0)
{
    const char *VAR_1 = "(unknown)";

    switch (VAR_0->base_type)
    {
        case 132: VAR_1 = "float"; break;
        case 131: VAR_1 = "half"; break;
        case 133: VAR_1 = "double"; break;
        case 130: VAR_1 = "int"; break;
        case 128: VAR_1 = "uint"; break;
        case 134: VAR_1 = "bool"; break;
        case 129:
            switch (VAR_0->sampler_dim)
            {
                case 135: VAR_1 = "sampler"; break;
                case 139: VAR_1 = "sampler1D"; break;
                case 138: VAR_1 = "sampler2D"; break;
                case 137: VAR_1 = "sampler3D"; break;
                case 136: VAR_1 = "samplerCUBE"; break;
            }
            break;
        default:
            FUNC_0("Unhandled case %u\n", VAR_0->base_type);
    }
    return VAR_1;
}
