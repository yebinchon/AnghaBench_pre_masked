
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {scalar_t__ window; scalar_t__ rootwin; scalar_t__ colormap; scalar_t__* wakeup_pipe; int screensaver_sem; int screensaver_thread; int screensaver_terminate; scalar_t__ screensaver_thread_running; scalar_t__ display; scalar_t__ xim; scalar_t__ xic; int input_ctx; } ;
struct vo {struct vo_x11_state* x11; } ;


 int FUNC_0 (struct vo_x11_state*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct vo_x11_state*,int) ;
 int FUNC_15 (struct vo_x11_state*) ;
 int * VAR_2 ;

void FUNC_16(struct vo *VAR_3)
{
    struct vo_x11_state *VAR_4 = VAR_3->x11;
    if (!VAR_4)
        return;

    FUNC_10(VAR_4->input_ctx, VAR_0);

    FUNC_14(VAR_4, 1);

    if (VAR_4->window != VAR_1 && VAR_4->window != VAR_4->rootwin) {
        FUNC_7(VAR_4->display, VAR_4->window);
        FUNC_4(VAR_4->display, VAR_4->window);
    }
    if (VAR_4->xic)
        FUNC_3(VAR_4->xic);
    if (VAR_4->colormap != VAR_1)
        FUNC_5(VAR_3->x11->display, VAR_4->colormap);

    FUNC_0(VAR_4, "uninit ...\n");
    if (VAR_4->xim)
        FUNC_2(VAR_4->xim);
    if (VAR_4->display) {
        FUNC_6(((void*)0));
        VAR_2 = ((void*)0);
        FUNC_1(VAR_4->display);
    }

    if (VAR_4->screensaver_thread_running) {
        FUNC_8(&VAR_4->screensaver_terminate, 1);
        FUNC_13(&VAR_4->screensaver_sem);
        FUNC_11(VAR_4->screensaver_thread, ((void*)0));
        FUNC_12(&VAR_4->screensaver_sem);
    }

    if (VAR_4->wakeup_pipe[0] >= 0) {
        FUNC_9(VAR_4->wakeup_pipe[0]);
        FUNC_9(VAR_4->wakeup_pipe[1]);
    }

    FUNC_15(VAR_4);
    VAR_3->x11 = ((void*)0);
}
