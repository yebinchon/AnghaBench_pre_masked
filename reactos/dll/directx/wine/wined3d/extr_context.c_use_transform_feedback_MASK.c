
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {struct wined3d_shader** shader; } ;
struct TYPE_4__ {int element_count; } ;
struct TYPE_5__ {TYPE_1__ so_desc; } ;
struct TYPE_6__ {TYPE_2__ gs; } ;
struct wined3d_shader {TYPE_3__ u; } ;
typedef int BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(const struct wined3d_state *VAR_2)
{
    const struct wined3d_shader *VAR_3;
    if (!(VAR_3 = VAR_2->shader[VAR_1]))
        return VAR_0;
    return VAR_3->u.gs.so_desc.element_count;
}
