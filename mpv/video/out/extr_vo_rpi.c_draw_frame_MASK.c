
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct vo_frame {int display_synced; scalar_t__ repeat; int redraw; int current; } ;
struct vo {int params; struct priv* priv; } ;
struct TYPE_9__ {scalar_t__ gl; } ;
struct priv {int skip_osd; struct mp_image* next_image; TYPE_2__* swpool; int display_synced; TYPE_1__ egl; int osd_pts; int renderer_enabled; } ;
struct mp_image {scalar_t__ imgfmt; int member_0; void** planes; int pts; } ;
typedef struct mp_image mp_image_t ;
struct TYPE_11__ {int length; } ;
struct TYPE_10__ {int queue; } ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vo*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct mp_image*,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (struct mp_image*,struct mp_image*) ;
 struct mp_image* FUNC_6 (int *,TYPE_3__*,int ) ;
 struct mp_image* FUNC_7 (int ) ;
 int FUNC_8 (struct mp_image*,scalar_t__) ;
 int FUNC_9 (struct mp_image*) ;
 int FUNC_10 (struct vo*) ;

__attribute__((used)) static void FUNC_11(struct vo *VAR_2, struct vo_frame *VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;

    if (!VAR_4->renderer_enabled)
        return;

    mp_image_t *VAR_5 = ((void*)0);
    if (!VAR_3->redraw && !VAR_3->repeat)
        VAR_5 = FUNC_7(VAR_3->current);

    FUNC_9(VAR_4->next_image);
    VAR_4->next_image = ((void*)0);

    if (VAR_5)
        VAR_4->osd_pts = VAR_5->pts;



    VAR_4->skip_osd = !VAR_3->redraw && VAR_3->repeat;

    if (!VAR_4->skip_osd && VAR_4->egl.gl)
        FUNC_10(VAR_2);

    VAR_4->display_synced = VAR_3->display_synced;

    if (VAR_5 && VAR_5->imgfmt != VAR_0) {
        MMAL_BUFFER_HEADER_T *VAR_6 = FUNC_4(VAR_4->swpool->queue);
        if (!VAR_6) {
            FUNC_9(VAR_5);
            FUNC_0(VAR_2, "Can't allocate buffer.\n");
            return;
        }
        FUNC_3(VAR_6);

        struct mp_image *VAR_7 = FUNC_6(((void*)0), VAR_6,
                                                           VAR_1);
        if (!VAR_7) {
            FUNC_2(VAR_6);
            FUNC_9(VAR_5);
            FUNC_0(VAR_2, "Out of memory.\n");
            return;
        }

        FUNC_8(VAR_7, VAR_0);
        VAR_7->planes[3] = (void *)VAR_6;

        struct mp_image VAR_8 = {0};
        VAR_6->length = FUNC_1(&VAR_8, VAR_6, VAR_2->params);
        FUNC_5(&VAR_8, VAR_5);

        FUNC_9(VAR_5);
        VAR_5 = VAR_7;
    }

    VAR_4->next_image = VAR_5;
}
