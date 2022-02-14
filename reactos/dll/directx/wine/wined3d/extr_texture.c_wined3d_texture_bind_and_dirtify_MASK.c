
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture {int dummy; } ;
struct wined3d_context {size_t active_texture; scalar_t__* rev_tex_unit_map; } ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 size_t FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct wined3d_context*,int ) ;
 int FUNC_3 (struct wined3d_context*,int ) ;
 int FUNC_4 (struct wined3d_texture*,struct wined3d_context*,int ) ;

void FUNC_5(struct wined3d_texture *VAR_3,
        struct wined3d_context *VAR_4, BOOL VAR_5)
{
    if (VAR_4->active_texture < FUNC_0(VAR_4->rev_tex_unit_map))
    {
        DWORD VAR_6 = VAR_4->rev_tex_unit_map[VAR_4->active_texture];
        if (VAR_6 != VAR_2)
            FUNC_3(VAR_4, FUNC_1(VAR_6));
    }


    FUNC_2(VAR_4, VAR_0);
    FUNC_3(VAR_4, VAR_1);

    FUNC_4(VAR_3, VAR_4, VAR_5);
}
