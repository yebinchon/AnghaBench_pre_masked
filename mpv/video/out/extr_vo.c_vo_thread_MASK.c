
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_internal {scalar_t__ wakeup_pts; int want_redraw; int request_redraw; int send_reset; int paused; int dr_helper; int * current_frame; int lock; scalar_t__ terminate; int dispatch; } ;
struct vo {int want_redraw; TYPE_1__* driver; struct vo_internal* in; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {int (* uninit ) (struct vo*) ;int (* control ) (struct vo*,int ,int *) ;scalar_t__ (* preinit ) (struct vo*) ;scalar_t__ get_image; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct vo*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,struct vo*) ;
 int FUNC_5 (struct vo*) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct vo*,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct vo*) ;
 int FUNC_13 (struct vo*) ;
 scalar_t__ FUNC_14 (struct vo*) ;
 int FUNC_15 (struct vo*,int ,int *) ;
 int FUNC_16 (struct vo*,int ,int *) ;
 int FUNC_17 (struct vo*,int ,int *) ;
 int FUNC_18 (struct vo*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct vo*) ;
 int FUNC_21 (struct vo*,int ) ;
 int FUNC_22 (struct vo*,scalar_t__) ;
 int FUNC_23 (struct vo*) ;

__attribute__((used)) static void *FUNC_24(void *VAR_6)
{
    struct vo *VAR_7 = VAR_6;
    struct vo_internal *VAR_8 = VAR_7->in;
    bool VAR_9 = 0;

    FUNC_9("vo");

    if (VAR_7->driver->get_image) {
        VAR_8->dr_helper = FUNC_4(VAR_8->dispatch, VAR_5, VAR_7);
        FUNC_3(VAR_8->dr_helper);
    }

    int VAR_10 = VAR_7->driver->preinit(VAR_7) ? -1 : 0;
    FUNC_7(VAR_7, VAR_10);
    if (VAR_10 < 0)
        goto done;

    FUNC_12(VAR_7);
    FUNC_20(VAR_7);
    FUNC_21(VAR_7, VAR_4);

    while (1) {
        FUNC_6(VAR_7->in->dispatch, 0);
        if (VAR_8->terminate)
            break;
        VAR_7->driver->control(VAR_7, VAR_0, ((void*)0));
        bool VAR_11 = FUNC_13(VAR_7);
        int64_t VAR_12 = FUNC_8();
        int64_t VAR_13 = VAR_12 + (VAR_11 ? 0 : (int64_t)1e9);

        FUNC_10(&VAR_8->lock);
        if (VAR_8->wakeup_pts) {
            if (VAR_8->wakeup_pts > VAR_12) {
                VAR_13 = FUNC_0(VAR_13, VAR_8->wakeup_pts);
            } else {
                VAR_8->wakeup_pts = 0;
                FUNC_23(VAR_7);
            }
        }
        if (VAR_7->want_redraw && !VAR_8->want_redraw) {
            VAR_7->want_redraw = 0;
            VAR_8->want_redraw = 1;
            FUNC_23(VAR_7);
        }
        bool VAR_14 = VAR_8->request_redraw;
        bool VAR_15 = VAR_8->send_reset;
        VAR_8->send_reset = 0;
        bool VAR_16 = VAR_8->paused != VAR_9;
        VAR_9 = VAR_8->paused;
        FUNC_11(&VAR_8->lock);

        if (VAR_15)
            VAR_7->driver->control(VAR_7, VAR_2, ((void*)0));
        if (VAR_16)
            VAR_7->driver->control(VAR_7, VAR_9 ? VAR_1 : VAR_3, ((void*)0));
        if (VAR_13 > VAR_12 && VAR_14) {
            FUNC_2(VAR_7);
            continue;
        }
        if (VAR_7->want_redraw)
            VAR_13 = 0;

        FUNC_22(VAR_7, VAR_13);
    }
    FUNC_5(VAR_7);
    FUNC_19(VAR_8->current_frame);
    VAR_8->current_frame = ((void*)0);
    VAR_7->driver->uninit(VAR_7);
done:
    FUNC_1(&VAR_8->dr_helper);
    return ((void*)0);
}
