
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum WINED3D_SHADER_INSTRUCTION_HANDLER { ____Placeholder_WINED3D_SHADER_INSTRUCTION_HANDLER } WINED3D_SHADER_INSTRUCTION_HANDLER ;
__attribute__((used)) static unsigned int FUNC_0(enum WINED3D_SHADER_INSTRUCTION_HANDLER VAR_0, unsigned int VAR_1)
{
    switch (VAR_0)
    {
        case 128:
        case 130:
            return VAR_1 == 1 ? 3 : 0;

        case 129:
        case 131:
            return VAR_1 == 1 ? 2 : 0;

        case 132:
            return VAR_1 == 1 ? 1 : 0;

        default:
            return 0;
    }
}
