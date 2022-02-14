
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_priv {struct mpv_render_context* ctx; } ;
struct vo {int hwdec_devs; int probing; TYPE_1__* global; struct vo_priv* priv; } ;
struct mpv_render_context {int need_resize; int need_update_external; int hwdec_devs; int lock; struct vo* vo; } ;
struct TYPE_2__ {int client_api; } ;


 int FUNC_0 (struct vo*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct vo*,int ,int *) ;
 struct mpv_render_context* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct vo *VAR_1)
{
    struct vo_priv *VAR_2 = VAR_1->priv;

    struct mpv_render_context *VAR_3 =
        FUNC_2(VAR_1->global->client_api);
    VAR_2->ctx = VAR_3;

    if (!VAR_3) {
        if (!VAR_1->probing)
            FUNC_0(VAR_1, "No render context set.\n");
        return -1;
    }

    FUNC_3(&VAR_3->lock);
    VAR_3->vo = VAR_1;
    VAR_3->need_resize = 1;
    VAR_3->need_update_external = 1;
    FUNC_4(&VAR_3->lock);

    VAR_1->hwdec_devs = VAR_3->hwdec_devs;
    FUNC_1(VAR_1, VAR_0, ((void*)0));

    return 0;
}
