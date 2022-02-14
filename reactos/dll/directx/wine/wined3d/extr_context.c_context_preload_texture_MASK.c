
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture {int dummy; } ;
struct wined3d_state {int ** sampler_states; struct wined3d_texture** textures; } ;
struct wined3d_context {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct wined3d_texture*,struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_1(struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2, unsigned int VAR_3)
{
    struct wined3d_texture *VAR_4;

    if (!(VAR_4 = VAR_2->textures[VAR_3]))
        return;

    FUNC_0(VAR_4, VAR_1, VAR_2->sampler_states[VAR_3][VAR_0]);
}
