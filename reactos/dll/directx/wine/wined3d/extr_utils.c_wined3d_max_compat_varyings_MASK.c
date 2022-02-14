
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;


 int VAR_0 ;
 size_t VAR_1 ;

unsigned int FUNC_0(const struct wined3d_gl_info *VAR_2)
{


    return VAR_2->supported[VAR_1] ? VAR_0 * 4 : (VAR_0 + 2) * 4 + 1;
}
