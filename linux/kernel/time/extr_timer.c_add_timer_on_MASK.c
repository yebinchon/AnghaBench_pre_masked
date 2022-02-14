
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int flags; int function; } ;
struct timer_base {int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct timer_list*) ;
 int FUNC_3 (struct timer_base*) ;
 struct timer_base* FUNC_4 (int,int) ;
 int FUNC_5 (struct timer_base*,struct timer_list*) ;
 struct timer_base* FUNC_6 (struct timer_list*,unsigned long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (struct timer_list*) ;

void FUNC_11(struct timer_list *VAR_2, int VAR_3)
{
 struct timer_base *VAR_4, *VAR_5;
 unsigned long VAR_6;

 FUNC_0(FUNC_10(VAR_2) || !VAR_2->function);

 VAR_4 = FUNC_4(VAR_2->flags, VAR_3);






 VAR_5 = FUNC_6(VAR_2, &VAR_6);
 if (VAR_5 != VAR_4) {
  VAR_2->flags |= VAR_1;

  FUNC_8(&VAR_5->lock);
  VAR_5 = VAR_4;
  FUNC_7(&VAR_5->lock);
  FUNC_1(VAR_2->flags,
      (VAR_2->flags & ~VAR_0) | VAR_3);
 }
 FUNC_3(VAR_5);

 FUNC_2(VAR_2);
 FUNC_5(VAR_5, VAR_2);
 FUNC_9(&VAR_5->lock, VAR_6);
}
