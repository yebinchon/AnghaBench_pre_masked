
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_data_offer {int dummy; } ;
struct vo_wayland_state {int dnd_mime_score; int dnd_mime_type; TYPE_1__* vo; } ;
struct TYPE_2__ {int input_ctx; } ;


 int FUNC_0 (struct vo_wayland_state*,char*,int ) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vo_wayland_state*,char const*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, struct wl_data_offer *VAR_1,
                                    const char *VAR_2)
{
    struct vo_wayland_state *VAR_3 = VAR_0;
    int VAR_4 = FUNC_1(VAR_3->vo->input_ctx, VAR_2);
    if (VAR_4 > VAR_3->dnd_mime_score) {
        VAR_3->dnd_mime_score = VAR_4;
        FUNC_2(VAR_3->dnd_mime_type);
        VAR_3->dnd_mime_type = FUNC_3(VAR_3, VAR_2);
        FUNC_0(VAR_3, "Given DND offer with mime type %s\n", VAR_3->dnd_mime_type);
    }
}
