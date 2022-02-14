
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_rendertarget_info {int dummy; } ;
struct wined3d_fbo_entry_key {int * objects; scalar_t__ rb_namespace; } ;
struct wined3d_context {TYPE_1__* gl_info; } ;
struct TYPE_4__ {unsigned int buffers; } ;
struct TYPE_3__ {TYPE_2__ limits; } ;
typedef int DWORD ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct wined3d_context const*,struct wined3d_fbo_entry_key*,unsigned int,struct wined3d_rendertarget_info const*,int ) ;
 int FUNC_2 (int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_context *VAR_0,
        struct wined3d_fbo_entry_key *VAR_1, const struct wined3d_rendertarget_info *VAR_2,
        const struct wined3d_rendertarget_info *VAR_3, DWORD VAR_4, DWORD VAR_5)
{
    unsigned int VAR_6 = VAR_0->gl_info->limits.buffers;
    unsigned int VAR_7;

    VAR_1->rb_namespace = 0;
    FUNC_1(VAR_0, VAR_1, 0, VAR_3, VAR_5);

    for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
        FUNC_1(VAR_0, VAR_1, VAR_7 + 1, &VAR_2[VAR_7], VAR_4);

    FUNC_2(&VAR_1->objects[VAR_6 + 1], 0, (FUNC_0(VAR_1->objects) - VAR_6 - 1) * sizeof(*VAR_1->objects));
}
