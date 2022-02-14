
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int paused; int request_redraw; int lock; scalar_t__ dropped_frame; } ;
struct vo {struct vo_internal* in; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vo*) ;
 int FUNC_3 (struct vo*) ;
 int FUNC_4 (struct vo*) ;

void FUNC_5(struct vo *VAR_0, bool VAR_1)
{
    struct vo_internal *VAR_2 = VAR_0->in;
    FUNC_0(&VAR_2->lock);
    if (VAR_2->paused != VAR_1) {
        VAR_2->paused = VAR_1;
        if (VAR_2->paused && VAR_2->dropped_frame) {
            VAR_2->request_redraw = 1;
            FUNC_3(VAR_0);
        }
        FUNC_2(VAR_0);
        FUNC_4(VAR_0);
    }
    FUNC_1(&VAR_2->lock);
}
