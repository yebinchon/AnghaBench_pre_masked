
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swait_queue_head {int lock; } ;
struct swait_queue {int dummy; } ;


 int FUNC_0 (struct swait_queue_head*,struct swait_queue*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;

void FUNC_4(struct swait_queue_head *VAR_0, struct swait_queue *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(VAR_2);
 FUNC_2(&VAR_0->lock, VAR_3);
}
