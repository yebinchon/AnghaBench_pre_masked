
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum glsl_shader { ____Placeholder_glsl_shader } glsl_shader ;






__attribute__((used)) static const char *FUNC_0(enum glsl_shader VAR_0)
{
    switch (VAR_0) {
    case 128: return "vertex";
    case 129: return "fragment";
    case 130: return "compute";
    default: return "unknown";
    }
}
