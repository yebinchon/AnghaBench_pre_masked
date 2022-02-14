
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__ glsl_version; } ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static inline BOOL FUNC_1(const struct wined3d_gl_info *VAR_0)
{




    return VAR_0->glsl_version < FUNC_0(4, 40);
}
