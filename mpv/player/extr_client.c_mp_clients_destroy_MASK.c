
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {TYPE_1__* clients; } ;
struct TYPE_2__ {scalar_t__ num_clients; int lock; scalar_t__ render_context; int gl_cb_ctx; } ;


 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(struct MPContext *VAR_0)
{
    if (!VAR_0->clients)
        return;
    FUNC_3(VAR_0->clients->num_clients == 0);

    FUNC_1(&VAR_0->clients->gl_cb_ctx);



    if (VAR_0->clients->render_context) {
        FUNC_0(VAR_0, "Broken API use: mpv_render_context_free() not called.\n");
        FUNC_2();
    }

    FUNC_4(&VAR_0->clients->lock);
    FUNC_5(VAR_0->clients);
    VAR_0->clients = ((void*)0);
}
