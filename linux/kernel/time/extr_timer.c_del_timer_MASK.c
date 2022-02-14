
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct timer_base {int lock; } ;


 int FUNC_0 (struct timer_list*) ;
 int FUNC_1 (struct timer_list*,struct timer_base*,int) ;
 struct timer_base* FUNC_2 (struct timer_list*,unsigned long*) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct timer_list*) ;

int FUNC_5(struct timer_list *VAR_0)
{
 struct timer_base *VAR_1;
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_0(VAR_0);

 if (FUNC_4(VAR_0)) {
  VAR_1 = FUNC_2(VAR_0, &VAR_2);
  VAR_3 = FUNC_1(VAR_0, VAR_1, 1);
  FUNC_3(&VAR_1->lock, VAR_2);
 }

 return VAR_3;
}
