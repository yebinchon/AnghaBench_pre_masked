
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_domain {scalar_t__ period_time; int period_timer; int completions; } ;
struct fprop_local_percpu {int dummy; } ;


 int FUNC_0 (int *,struct fprop_local_percpu*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct wb_domain *VAR_1,
       struct fprop_local_percpu *VAR_2,
       unsigned int VAR_3)
{
 FUNC_0(&VAR_1->completions, VAR_2,
          VAR_3);

 if (FUNC_2(!VAR_1->period_time)) {






  VAR_1->period_time = FUNC_3(VAR_0);
  FUNC_1(&VAR_1->period_timer, VAR_1->period_time);
 }
}
