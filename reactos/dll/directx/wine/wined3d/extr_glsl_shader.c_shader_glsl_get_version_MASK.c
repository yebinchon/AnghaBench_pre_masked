
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__ glsl_version; } ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static unsigned int FUNC_1(const struct wined3d_gl_info *VAR_0)
{
    if (VAR_0->glsl_version >= FUNC_0(4, 40))
        return 440;
    else if (VAR_0->glsl_version >= FUNC_0(1, 50))
        return 150;
    else if (VAR_0->glsl_version >= FUNC_0(1, 30))
        return 130;
    else
        return 120;
}
