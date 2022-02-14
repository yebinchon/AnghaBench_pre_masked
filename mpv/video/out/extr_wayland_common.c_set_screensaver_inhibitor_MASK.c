
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zwp_idle_inhibit_manager_v1 {int dummy; } ;
struct vo_wayland_state {int * idle_inhibitor; int surface; struct zwp_idle_inhibit_manager_v1* idle_inhibit_manager; } ;


 int FUNC_0 (struct vo_wayland_state*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (struct zwp_idle_inhibit_manager_v1*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vo_wayland_state *VAR_2, int VAR_3)
{
    if (!VAR_2->idle_inhibit_manager)
        return VAR_0;
    if (VAR_3 == (!!VAR_2->idle_inhibitor))
        return VAR_1;
    if (VAR_3) {
        FUNC_0(VAR_2, "Enabling idle inhibitor\n");
        struct zwp_idle_inhibit_manager_v1 *VAR_4 = VAR_2->idle_inhibit_manager;
        VAR_2->idle_inhibitor = FUNC_1(VAR_4, VAR_2->surface);
    } else {
        FUNC_0(VAR_2, "Disabling the idle inhibitor\n");
        FUNC_2(VAR_2->idle_inhibitor);
        VAR_2->idle_inhibitor = ((void*)0);
    }
    return VAR_1;
}
