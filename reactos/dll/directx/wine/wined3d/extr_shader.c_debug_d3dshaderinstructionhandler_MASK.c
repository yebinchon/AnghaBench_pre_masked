
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum WINED3D_SHADER_INSTRUCTION_HANDLER { ____Placeholder_WINED3D_SHADER_INSTRUCTION_HANDLER } WINED3D_SHADER_INSTRUCTION_HANDLER ;


 int FUNC_0 (char const**) ;
 char const** VAR_0 ;
 char const* FUNC_1 (char*,int) ;

const char *FUNC_2(enum WINED3D_SHADER_INSTRUCTION_HANDLER VAR_1)
{
    if (VAR_1 >= FUNC_0(VAR_0))
        return FUNC_1("UNRECOGNIZED(%#x)", VAR_1);

    return VAR_0[VAR_1];
}
