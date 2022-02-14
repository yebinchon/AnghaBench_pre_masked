
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_data_device {int dummy; } ;
struct vo_wayland_state {int dnd_mime_type; int dnd_offer; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct wl_data_device *VAR_1,
                                      uint32_t VAR_2, wl_fixed_t VAR_3, wl_fixed_t VAR_4)
{
    struct vo_wayland_state *VAR_5 = VAR_0;

    FUNC_0(VAR_5->dnd_offer, VAR_2, VAR_5->dnd_mime_type);
}
