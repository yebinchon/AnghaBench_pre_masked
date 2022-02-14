
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int log; struct priv* priv; } ;
struct TYPE_2__ {int log; } ;
struct priv {int renderer; int display_cond; int display_mutex; TYPE_1__ egl; scalar_t__ layer; scalar_t__ osd_layer; scalar_t__ video_layer; scalar_t__ background_layer; } ;


 int VAR_0 ;
 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (struct vo*) ;
 int VAR_1 ;
 int FUNC_7 (struct vo*) ;
 scalar_t__ FUNC_8 (struct vo*) ;
 int FUNC_9 (int ,struct vo*) ;

__attribute__((used)) static int FUNC_10(struct vo *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    VAR_3->background_layer = VAR_3->layer;
    VAR_3->video_layer = VAR_3->layer + 1;
    VAR_3->osd_layer = VAR_3->layer + 2;

    VAR_3->egl.log = VAR_2->log;

    FUNC_1();

    if (FUNC_3()) {
        FUNC_0(VAR_2, "Could not initialize MMAL.\n");
        return -1;
    }

    FUNC_5(&VAR_3->display_mutex, ((void*)0));
    FUNC_4(&VAR_3->display_cond, ((void*)0));

    if (FUNC_6(VAR_2) < 0)
        goto fail;

    if (FUNC_8(VAR_2) < 0)
        goto fail;

    if (FUNC_2(VAR_0, &VAR_3->renderer))
    {
        FUNC_0(VAR_2, "Could not create MMAL renderer.\n");
        goto fail;
    }

    FUNC_9(VAR_1, VAR_2);

    return 0;

fail:
    FUNC_7(VAR_2);
    return -1;
}
