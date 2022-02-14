
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_blitter {int * next; int * ops; } ;


 int FUNC_0 (char*,struct wined3d_blitter*) ;
 int VAR_0 ;
 struct wined3d_blitter* FUNC_1 (int) ;

struct wined3d_blitter *FUNC_2(void)
{
    struct wined3d_blitter *VAR_1;

    if (!(VAR_1 = FUNC_1(sizeof(*VAR_1))))
        return ((void*)0);

    FUNC_0("Created blitter %p.\n", VAR_1);

    VAR_1->ops = &VAR_0;
    VAR_1->next = ((void*)0);

    return VAR_1;
}
