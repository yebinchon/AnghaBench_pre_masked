
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_data_device {int dummy; } ;
struct vo_wayland_state {int dnd_fd; int dnd_mime_type; int dnd_offer; } ;


 int FUNC_0 (struct vo_wayland_state*,char*) ;
 int FUNC_1 (struct vo_wayland_state*,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, struct wl_data_device *VAR_2)
{
    struct vo_wayland_state *VAR_3 = VAR_1;

    int VAR_4[2];

    if (FUNC_3(VAR_4, VAR_0) == -1) {
        FUNC_0(VAR_3, "Failed to create dnd pipe!\n");
        return;
    }

    FUNC_1(VAR_3, "Receiving DND offer with mime %s\n", VAR_3->dnd_mime_type);

    FUNC_4(VAR_3->dnd_offer, VAR_3->dnd_mime_type, VAR_4[1]);
    FUNC_2(VAR_4[1]);

    VAR_3->dnd_fd = VAR_4[0];
}
