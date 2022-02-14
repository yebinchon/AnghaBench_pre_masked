
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int opts; int compiler; } ;
typedef int shaderc_shader_kind ;
typedef int shaderc_compilation_result_t ;
typedef enum glsl_shader { ____Placeholder_glsl_shader } glsl_shader ;





 int FUNC_0 (int ,char const*,int ,int const,char*,char*,int ) ;
 int FUNC_1 (int ,char const*,int ,int const,char*,char*,int ) ;



 int FUNC_2 (char const*) ;

__attribute__((used)) static shaderc_compilation_result_t FUNC_3(struct priv *VAR_0,
                                            enum glsl_shader VAR_1,
                                            const char *VAR_2, bool VAR_3)
{
    static const shaderc_shader_kind VAR_4[] = {
        [131] = 128,
        [132] = 129,
        [133] = 130,
    };

    if (VAR_3) {
        return FUNC_1(VAR_0->compiler, VAR_2, FUNC_2(VAR_2),
                                        VAR_4[VAR_1], "input", "main", VAR_0->opts);
    } else {
        return FUNC_0(VAR_0->compiler, VAR_2, FUNC_2(VAR_2),
                                        VAR_4[VAR_1], "input", "main", VAR_0->opts);
    }
}
