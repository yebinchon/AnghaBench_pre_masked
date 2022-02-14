
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static BOOL FUNC_0(const struct wined3d_gl_info *VAR_3)
{
    return VAR_3->supported[VAR_1] || VAR_3->supported[VAR_2] || VAR_3->supported[VAR_0];
}
