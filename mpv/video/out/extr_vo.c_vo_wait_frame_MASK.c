
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int lock; int wakeup; scalar_t__ rendering; scalar_t__ frame_queued; } ;
struct vo {struct vo_internal* in; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct vo *VAR_0)
{
    struct vo_internal *VAR_1 = VAR_0->in;
    FUNC_1(&VAR_1->lock);
    while (VAR_1->frame_queued || VAR_1->rendering)
        FUNC_0(&VAR_1->wakeup, &VAR_1->lock);
    FUNC_2(&VAR_1->lock);
}
