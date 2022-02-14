
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_state {int * textures; } ;
struct wined3d_context {size_t* tex_unit_map; size_t lowest_disabled_stage; TYPE_2__* gl_info; } ;
struct TYPE_3__ {size_t textures; } ;
struct TYPE_4__ {TYPE_1__ limits; } ;
typedef size_t DWORD ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (size_t,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (struct wined3d_context*,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;

void FUNC_4(struct wined3d_context *VAR_2, const struct wined3d_state *VAR_3, DWORD VAR_4)
{
    DWORD VAR_5 = VAR_4 - FUNC_0(0);
    DWORD VAR_6 = VAR_2->tex_unit_map[VAR_5];




    if (VAR_6 == VAR_1 || VAR_6 >= VAR_2->gl_info->limits.textures)
        return;
    if (VAR_5 >= VAR_2->lowest_disabled_stage)
        return;
    if (FUNC_2(VAR_2, FUNC_1(VAR_5, VAR_0)))
        return;

    FUNC_3(VAR_3->textures[VAR_5], VAR_2->gl_info);
}
