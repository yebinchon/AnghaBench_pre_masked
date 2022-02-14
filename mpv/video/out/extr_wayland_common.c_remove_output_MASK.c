
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_wayland_output {struct vo_wayland_output* model; struct vo_wayland_output* make; int link; int id; int wl; } ;


 int FUNC_0 (int ,char*,struct vo_wayland_output*,struct vo_wayland_output*,int ) ;
 int FUNC_1 (struct vo_wayland_output*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vo_wayland_output *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_0(VAR_0->wl, "Deregistering output %s %s (0x%x)\n", VAR_0->make,
               VAR_0->model, VAR_0->id);
    FUNC_2(&VAR_0->link);
    FUNC_1(VAR_0->make);
    FUNC_1(VAR_0->model);
    FUNC_1(VAR_0);
    return;
}
