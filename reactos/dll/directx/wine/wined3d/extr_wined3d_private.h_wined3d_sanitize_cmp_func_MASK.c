
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_cmp_func { ____Placeholder_wined3d_cmp_func } wined3d_cmp_func ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline enum wined3d_cmp_func FUNC_0(enum wined3d_cmp_func VAR_2)
{
    if (VAR_2 < VAR_1 || VAR_2 > VAR_0)
        return VAR_0;
    return VAR_2;
}
