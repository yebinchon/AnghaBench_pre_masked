
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_wayland_state {int xdg_toplevel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct vo_wayland_state *VAR_2, char *VAR_3)
{
    if (!VAR_2->xdg_toplevel)
        return VAR_0;
    FUNC_0(VAR_2->xdg_toplevel, VAR_3);
    return VAR_1;
}
