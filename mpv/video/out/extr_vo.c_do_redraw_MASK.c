
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_internal {int request_redraw; int dropped_frame; int lock; int current_frame; } ;
struct vo_frame {int redraw; int repeat; int still; int duration; scalar_t__ current; scalar_t__ pts; int member_0; } ;
struct vo {TYPE_1__* driver; int config_ok; struct vo_internal* in; } ;
struct TYPE_2__ {int caps; int (* control ) (struct vo*,int ,int *) ;int (* flip_page ) (struct vo*) ;int (* draw_image ) (struct vo*,int ) ;int (* draw_frame ) (struct vo*,struct vo_frame*) ;int untimed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vo*,struct vo_frame*) ;
 int FUNC_4 (struct vo*,int ,int *) ;
 int FUNC_5 (struct vo*,int ) ;
 int FUNC_6 (struct vo*) ;
 int FUNC_7 (struct vo_frame*) ;
 struct vo_frame* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct vo *VAR_2)
{
    struct vo_internal *VAR_3 = VAR_2->in;

    if (!VAR_2->config_ok || (VAR_2->driver->caps & VAR_1))
        return;

    FUNC_1(&VAR_3->lock);
    VAR_3->request_redraw = 0;
    bool VAR_4 = VAR_3->dropped_frame;
    struct vo_frame *VAR_5 = ((void*)0);
    if (!VAR_2->driver->untimed)
        VAR_5 = FUNC_8(VAR_3->current_frame);
    if (VAR_5)
        VAR_3->dropped_frame = 0;
    struct vo_frame VAR_6 = {0};
    if (!VAR_5)
        VAR_5 = &VAR_6;
    VAR_5->redraw = !VAR_4;
    VAR_5->repeat = 0;
    VAR_5->still = 1;
    VAR_5->pts = 0;
    VAR_5->duration = -1;
    FUNC_2(&VAR_3->lock);

    if (VAR_2->driver->draw_frame) {
        VAR_2->driver->draw_frame(VAR_2, VAR_5);
    } else if ((VAR_4 || VAR_2->driver->control(VAR_2, VAR_0, ((void*)0)) < 1)
               && VAR_5->current)
    {
        VAR_2->driver->draw_image(VAR_2, FUNC_0(VAR_5->current));
    }

    VAR_2->driver->flip_page(VAR_2);

    if (VAR_5 != &VAR_6)
        FUNC_7(VAR_5);
}
