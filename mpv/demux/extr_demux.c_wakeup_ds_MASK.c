
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demux_stream {int need_wakeup; TYPE_1__* in; int wakeup_cb_ctx; int (* wakeup_cb ) (int ) ;} ;
struct TYPE_2__ {int wakeup; int wakeup_cb_ctx; int (* wakeup_cb ) (int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct demux_stream *VAR_0)
{
    if (VAR_0->need_wakeup) {
        if (VAR_0->wakeup_cb) {
            VAR_0->wakeup_cb(VAR_0->wakeup_cb_ctx);
        } else if (VAR_0->in->wakeup_cb) {
            VAR_0->in->wakeup_cb(VAR_0->in->wakeup_cb_ctx);
        }
        VAR_0->need_wakeup = 0;
        FUNC_0(&VAR_0->in->wakeup);
    }
}
