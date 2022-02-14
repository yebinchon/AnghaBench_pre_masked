
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_context {int dummy; } ;
struct wined3d_blitter {TYPE_1__* ops; struct wined3d_blitter* next; } ;
struct TYPE_2__ {int (* blitter_destroy ) (struct wined3d_blitter*,struct wined3d_context*) ;} ;


 int FUNC_0 (struct wined3d_blitter*) ;
 int FUNC_1 (struct wined3d_blitter*,struct wined3d_context*) ;

__attribute__((used)) static void FUNC_2(struct wined3d_blitter *VAR_0, struct wined3d_context *VAR_1)
{
    struct wined3d_blitter *VAR_2;

    if ((VAR_2 = VAR_0->next))
        VAR_2->ops->blitter_destroy(VAR_2, VAR_1);

    FUNC_0(VAR_0);
}
