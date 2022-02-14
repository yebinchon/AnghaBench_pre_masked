
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct wined3d_blitter {struct wined3d_blitter* next; int * ops; } ;


 int FUNC_0 (char*,struct wined3d_blitter*) ;
 int VAR_0 ;
 struct wined3d_blitter* FUNC_1 (int) ;

void FUNC_2(struct wined3d_blitter **VAR_1, const struct wined3d_gl_info *VAR_2)
{
    struct wined3d_blitter *VAR_3;

    if (!(VAR_3 = FUNC_1(sizeof(*VAR_3))))
        return;

    FUNC_0("Created blitter %p.\n", VAR_3);

    VAR_3->ops = &VAR_0;
    VAR_3->next = *VAR_1;
    *VAR_1 = VAR_3;
}
