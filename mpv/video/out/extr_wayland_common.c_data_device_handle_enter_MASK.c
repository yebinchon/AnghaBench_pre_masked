
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_data_offer {int dummy; } ;
struct wl_data_device {int dummy; } ;
struct vo_wayland_state {int dnd_mime_type; struct wl_data_offer* dnd_offer; } ;


 int FUNC_0 (struct vo_wayland_state*,char*) ;
 int FUNC_1 (struct vo_wayland_state*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct wl_data_offer*,int ,int ) ;
 int FUNC_3 (struct wl_data_offer*,int,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, struct wl_data_device *VAR_3,
                                     uint32_t VAR_4, struct wl_surface *VAR_5,
                                     wl_fixed_t VAR_6, wl_fixed_t VAR_7,
                                     struct wl_data_offer *VAR_8)
{
    struct vo_wayland_state *VAR_9 = VAR_2;
    if (VAR_9->dnd_offer != VAR_8) {
        FUNC_0(VAR_9, "DND offer ID mismatch!\n");
        return;
    }

    FUNC_3(VAR_8, VAR_0 |
                                  VAR_1,
                                  VAR_0);

    FUNC_2(VAR_8, VAR_4, VAR_9->dnd_mime_type);

    FUNC_1(VAR_9, "Accepting DND offer with mime type %s\n", VAR_9->dnd_mime_type);
}
