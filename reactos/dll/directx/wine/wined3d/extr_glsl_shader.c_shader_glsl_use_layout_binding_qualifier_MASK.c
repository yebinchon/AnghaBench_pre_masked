
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct wined3d_gl_info const*) ;

__attribute__((used)) static BOOL FUNC_1(const struct wined3d_gl_info *VAR_1)
{
    return VAR_1->supported[VAR_0] && FUNC_0(VAR_1);
}
