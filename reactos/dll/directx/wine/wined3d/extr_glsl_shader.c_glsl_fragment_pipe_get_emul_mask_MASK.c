
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
typedef int DWORD ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static DWORD FUNC_0(const struct wined3d_gl_info *VAR_2)
{
    if (VAR_2->supported[VAR_1])
        return VAR_0;
    return 0;
}
