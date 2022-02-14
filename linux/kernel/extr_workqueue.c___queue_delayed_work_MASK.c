
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct work_struct {int entry; } ;
struct timer_list {scalar_t__ function; scalar_t__ expires; } ;
struct delayed_work {int cpu; struct workqueue_struct* wq; struct work_struct work; struct timer_list timer; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,struct workqueue_struct*,struct work_struct*) ;
 int FUNC_2 (struct timer_list*) ;
 int FUNC_3 (struct timer_list*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct timer_list*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(int VAR_3, struct workqueue_struct *VAR_4,
    struct delayed_work *VAR_5, unsigned long VAR_6)
{
 struct timer_list *VAR_7 = &VAR_5->timer;
 struct work_struct *VAR_8 = &VAR_5->work;

 FUNC_0(!VAR_4);
 FUNC_0(VAR_7->function != VAR_1);
 FUNC_0(FUNC_5(VAR_7));
 FUNC_0(!FUNC_4(&VAR_8->entry));







 if (!VAR_6) {
  FUNC_1(VAR_3, VAR_4, &VAR_5->work);
  return;
 }

 VAR_5->wq = VAR_4;
 VAR_5->cpu = VAR_3;
 VAR_7->expires = VAR_2 + VAR_6;

 if (FUNC_6(VAR_3 != VAR_0))
  FUNC_3(VAR_7, VAR_3);
 else
  FUNC_2(VAR_7);
}
