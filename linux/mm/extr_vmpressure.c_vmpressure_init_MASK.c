
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmpressure {int work; int events; int events_lock; int sr_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct vmpressure *VAR_1)
{
 FUNC_3(&VAR_1->sr_lock);
 FUNC_2(&VAR_1->events_lock);
 FUNC_0(&VAR_1->events);
 FUNC_1(&VAR_1->work, VAR_0);
}
