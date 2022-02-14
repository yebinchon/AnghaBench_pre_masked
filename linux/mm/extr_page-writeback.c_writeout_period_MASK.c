
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_domain {int period_time; int period_timer; int completions; } ;
struct timer_list {int dummy; } ;


 int VAR_0 ;
 struct wb_domain* VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 struct wb_domain* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct wb_domain *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 int VAR_6 = (VAR_2 - VAR_5->period_time) /
       VAR_0;

 if (FUNC_0(&VAR_5->completions, VAR_6 + 1)) {
  VAR_5->period_time = FUNC_3(VAR_5->period_time +
    VAR_6 * VAR_0);
  FUNC_2(&VAR_5->period_timer, VAR_5->period_time);
 } else {




  VAR_5->period_time = 0;
 }
}
