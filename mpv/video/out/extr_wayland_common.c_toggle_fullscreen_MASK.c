
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_wayland_state {int xdg_toplevel; scalar_t__ fullscreen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vo_wayland_state *VAR_2)
{
    if (!VAR_2->xdg_toplevel)
        return VAR_0;
    if (VAR_2->fullscreen)
        FUNC_1(VAR_2->xdg_toplevel);
    else
        FUNC_0(VAR_2->xdg_toplevel, ((void*)0));
    return VAR_1;
}
