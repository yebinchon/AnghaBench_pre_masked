
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_shader_cache {int dummy; } ;


 int FUNC_0 (char*,char const*,char const*,...) ;

__attribute__((used)) static void FUNC_1(struct gl_shader_cache *VAR_0, const char *VAR_1, const char *VAR_2)
{







    FUNC_0("vec4 %s = vec4(-0.5, 0.1666, 0.3333, -0.3333) * %s"
                " + vec4(1, 0, -0.5, 0.5);\n", VAR_1, VAR_2);
    FUNC_0("%s = %s * %s + vec4(0, 0, -0.5, 0.5);\n", VAR_1, VAR_1, VAR_2);
    FUNC_0("%s = %s * %s + vec4(-0.6666, 0, 0.8333, 0.1666);\n", VAR_1, VAR_1, VAR_2);
    FUNC_0("%s.xy *= vec2(1, 1) / vec2(%s.z, %s.w);\n", VAR_1, VAR_1, VAR_1);
    FUNC_0("%s.xy += vec2(1.0 + %s, 1.0 - %s);\n", VAR_1, VAR_2, VAR_2);
}
