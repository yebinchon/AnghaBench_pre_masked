
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int queued_events; int internal_events; int lock; } ;
struct vo {struct vo_internal* in; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vo*) ;
 int FUNC_3 (struct vo*) ;

void FUNC_4(struct vo *VAR_1, int VAR_2)
{
    struct vo_internal *VAR_3 = VAR_1->in;
    FUNC_0(&VAR_3->lock);
    if ((VAR_3->queued_events & VAR_2 & VAR_0) != (VAR_2 & VAR_0))
        FUNC_2(VAR_1);
    if (VAR_2)
        FUNC_3(VAR_1);
    VAR_3->queued_events |= VAR_2;
    VAR_3->internal_events |= VAR_2;
    FUNC_1(&VAR_3->lock);
}
