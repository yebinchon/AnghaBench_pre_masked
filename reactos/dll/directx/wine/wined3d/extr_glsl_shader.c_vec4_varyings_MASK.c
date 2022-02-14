
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int glsl_varyings; } ;
struct wined3d_gl_info {int quirks; TYPE_1__ limits; } ;
typedef int DWORD ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(DWORD VAR_1, const struct wined3d_gl_info *VAR_2)
{
    unsigned int VAR_3 = VAR_2->limits.glsl_varyings / 4;

    if(VAR_1 > 3) return VAR_3;


    if (VAR_2->quirks & VAR_0) VAR_3 -= 1;
    return VAR_3;
}
