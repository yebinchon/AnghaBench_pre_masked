
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int queued_events; int lock; } ;
struct vo {struct vo_internal* in; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct vo *VAR_0, int VAR_1)
{
    struct vo_internal *VAR_2 = VAR_0->in;
    FUNC_0(&VAR_2->lock);
    int VAR_3 = VAR_2->queued_events & VAR_1;
    VAR_2->queued_events &= ~(unsigned)VAR_3;
    FUNC_1(&VAR_2->lock);
    return VAR_3;
}
