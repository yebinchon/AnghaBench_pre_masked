
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int * supported; } ;
struct wined3d_blitter {struct wined3d_blitter* next; int * ops; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,struct wined3d_blitter*) ;
 struct wined3d_blitter* FUNC_1 (int) ;
 int VAR_1 ;

void FUNC_2(struct wined3d_blitter **VAR_2, const struct wined3d_gl_info *VAR_3)
{
    struct wined3d_blitter *VAR_4;

    if (!VAR_3->supported[VAR_0])
        return;

    if (!(VAR_4 = FUNC_1(sizeof(*VAR_4))))
        return;

    FUNC_0("Created blitter %p.\n", VAR_4);

    VAR_4->ops = &VAR_1;
    VAR_4->next = *VAR_2;
    *VAR_2 = VAR_4;
}
