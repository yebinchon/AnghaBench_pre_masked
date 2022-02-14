
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_data_device {int dummy; } ;
struct vo_wayland_state {int dnd_fd; scalar_t__ dnd_mime_score; int * dnd_mime_type; int * dnd_offer; } ;


 int FUNC_0 (struct vo_wayland_state*,char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct wl_data_device *VAR_1)
{
    struct vo_wayland_state *VAR_2 = VAR_0;

    if (VAR_2->dnd_offer) {
        if (VAR_2->dnd_fd != -1)
            return;
        FUNC_2(VAR_2->dnd_offer);
        VAR_2->dnd_offer = ((void*)0);
    }

    FUNC_0(VAR_2, "Releasing DND offer with mime type %s\n", VAR_2->dnd_mime_type);

    FUNC_1(VAR_2->dnd_mime_type);
    VAR_2->dnd_mime_type = ((void*)0);
    VAR_2->dnd_mime_score = 0;
}
