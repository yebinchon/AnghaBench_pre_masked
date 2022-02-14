
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct TYPE_5__ {int egl_surface; int egl_display; scalar_t__ gl; } ;
struct priv {int skip_osd; scalar_t__ display_synced; TYPE_2__* renderer; TYPE_1__ egl; struct mp_image* next_image; int renderer_enabled; } ;
struct mp_image {scalar_t__* planes; } ;
struct TYPE_7__ {struct mp_image* user_data; } ;
struct TYPE_6__ {int ** input; } ;
typedef int MMAL_PORT_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (struct mp_image*) ;
 int FUNC_4 (struct vo*) ;

__attribute__((used)) static void FUNC_5(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (!VAR_1->renderer_enabled)
        return;

    struct mp_image *VAR_2 = VAR_1->next_image;
    VAR_1->next_image = ((void*)0);


    if (!VAR_1->skip_osd && VAR_1->egl.gl)
        FUNC_1(VAR_1->egl.egl_display, VAR_1->egl.egl_surface);
    VAR_1->skip_osd = 0;

    if (VAR_2) {
        MMAL_PORT_T *VAR_3 = VAR_1->renderer->input[0];
        MMAL_BUFFER_HEADER_T *VAR_4 = (void *)VAR_2->planes[3];


        VAR_4->user_data = VAR_2;

        if (FUNC_2(VAR_3, VAR_4)) {
            FUNC_0(VAR_0, "could not queue picture!\n");
            FUNC_3(VAR_2);
        }
    }

    if (VAR_1->display_synced)
        FUNC_4(VAR_0);
}
