
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_data_offer {int dummy; } ;
struct vo_wayland_state {scalar_t__ dnd_action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vo_wayland_state*,char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(void *VAR_3, struct wl_data_offer *VAR_4, uint32_t VAR_5)
{
    struct vo_wayland_state *VAR_6 = VAR_3;
    VAR_6->dnd_action = VAR_5 & VAR_2 ?
                     VAR_1 : VAR_0;
    FUNC_0(VAR_6, "DND action is %s\n",
               VAR_6->dnd_action == VAR_1 ? "DND_REPLACE" : "DND_APPEND");
}
