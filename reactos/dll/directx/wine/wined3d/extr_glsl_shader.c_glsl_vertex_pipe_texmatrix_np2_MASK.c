
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture {int flags; } ;
struct wined3d_state {struct wined3d_texture** textures; } ;
struct wined3d_context {unsigned int lastWasPow2Texture; int constant_update_mask; } ;
typedef size_t DWORD ;
typedef int BOOL ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct wined3d_context *VAR_3,
        const struct wined3d_state *VAR_4, DWORD VAR_5)
{
    DWORD VAR_6 = VAR_5 - FUNC_0(0);
    const struct wined3d_texture *VAR_7 = VAR_4->textures[VAR_6];
    BOOL VAR_8;

    if (!VAR_7)
        return;

    if (VAR_6 >= VAR_0)
        return;

    if ((VAR_8 = !(VAR_7->flags & VAR_2))
            || VAR_3->lastWasPow2Texture & (1u << VAR_6))
    {
        if (VAR_8)
            VAR_3->lastWasPow2Texture |= 1u << VAR_6;
        else
            VAR_3->lastWasPow2Texture &= ~(1u << VAR_6);

        VAR_3->constant_update_mask |= VAR_1;
    }
}
