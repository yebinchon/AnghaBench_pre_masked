
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum wined3d_shader_resource_type { ____Placeholder_wined3d_shader_resource_type } wined3d_shader_resource_type ;
struct TYPE_2__ {unsigned int coord_size; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_0(enum wined3d_shader_resource_type VAR_3,
        unsigned int *VAR_4, unsigned int *VAR_5)
{
    const BOOL VAR_6 = VAR_3 == VAR_0
            || VAR_3 == VAR_1;

    *VAR_4 = VAR_2[VAR_3].coord_size;
    *VAR_5 = *VAR_4;
    if (VAR_6)
        --(*VAR_5);
}
