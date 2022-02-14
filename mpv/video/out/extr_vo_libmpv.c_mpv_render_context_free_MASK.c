
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int control_lock; int lock; int update_lock; int video_wait; int update_cond; struct TYPE_11__* dispatch; struct TYPE_11__* dr; struct TYPE_11__* renderer; struct TYPE_11__* priv; TYPE_1__* fns; int vo; int in_use; int client_api; } ;
typedef TYPE_2__ mpv_render_context ;
struct TYPE_10__ {int (* destroy ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,TYPE_2__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;

void FUNC_13(mpv_render_context *VAR_1)
{
    if (!VAR_1)
        return;



    FUNC_6(VAR_1->client_api, VAR_1, 0);

    if (FUNC_1(&VAR_1->in_use)) {






        FUNC_4(VAR_1->client_api);

        while (FUNC_1(&VAR_1->in_use)) {
            FUNC_5(VAR_1->dispatch, VAR_0);
        }
    }

    FUNC_9(&VAR_1->lock);





    FUNC_10(&VAR_1->lock);

    FUNC_0(!FUNC_1(&VAR_1->in_use));
    FUNC_0(!VAR_1->vo);



    if (VAR_1->dr)
        FUNC_2(VAR_1->dr);


    FUNC_5(VAR_1->dispatch, 0);

    FUNC_3(VAR_1, 1);

    if (VAR_1->renderer) {
        VAR_1->renderer->fns->destroy(VAR_1->renderer);
        FUNC_12(VAR_1->renderer->priv);
        FUNC_12(VAR_1->renderer);
    }
    FUNC_12(VAR_1->dr);
    FUNC_12(VAR_1->dispatch);

    FUNC_7(&VAR_1->update_cond);
    FUNC_7(&VAR_1->video_wait);
    FUNC_8(&VAR_1->update_lock);
    FUNC_8(&VAR_1->lock);
    FUNC_8(&VAR_1->control_lock);

    FUNC_12(VAR_1);
}
