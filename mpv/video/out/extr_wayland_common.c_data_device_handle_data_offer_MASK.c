
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_data_offer {int dummy; } ;
struct wl_data_device {int dummy; } ;
struct vo_wayland_state {struct wl_data_offer* dnd_offer; } ;


 int VAR_0 ;
 int FUNC_0 (struct wl_data_offer*,int *,struct vo_wayland_state*) ;
 int FUNC_1 (struct wl_data_offer*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct wl_data_device *VAR_2,
                                          struct wl_data_offer *VAR_3)
{
    struct vo_wayland_state *VAR_4 = VAR_1;
    if (VAR_4->dnd_offer)
        FUNC_1(VAR_4->dnd_offer);

    VAR_4->dnd_offer = VAR_3;
    FUNC_0(VAR_3, &VAR_0, VAR_4);
}
