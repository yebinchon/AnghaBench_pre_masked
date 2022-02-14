
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_hwdec {struct priv* priv; } ;
struct TYPE_8__ {int * image; int fb; } ;
struct TYPE_7__ {int fb; int * image; } ;
struct TYPE_6__ {int fb; int * image; } ;
struct priv {TYPE_4__ current_frame; TYPE_3__ last_frame; TYPE_2__ old_frame; TYPE_1__* ctx; int log; } ;
struct drm_frame {int * image; int fb; } ;
struct TYPE_5__ {int fd; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int **,int *) ;

__attribute__((used)) static void FUNC_3(struct ra_hwdec *VAR_0, struct drm_frame *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;







    if (VAR_2->ctx) {
        FUNC_0(VAR_2->log, VAR_2->ctx->fd, &VAR_2->old_frame.fb);
    }

    FUNC_2(&VAR_2->old_frame.image, VAR_2->last_frame.image);
    VAR_2->old_frame.fb = VAR_2->last_frame.fb;

    FUNC_2(&VAR_2->last_frame.image, VAR_2->current_frame.image);
    VAR_2->last_frame.fb = VAR_2->current_frame.fb;

    if (VAR_1) {
        VAR_2->current_frame.fb = VAR_1->fb;
        FUNC_2(&VAR_2->current_frame.image, VAR_1->image);
    } else {
        FUNC_1(&VAR_2->current_frame.fb, 0, sizeof(VAR_2->current_frame.fb));
        FUNC_2(&VAR_2->current_frame.image, ((void*)0));
    }
}
