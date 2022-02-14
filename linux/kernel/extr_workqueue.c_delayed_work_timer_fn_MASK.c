
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct delayed_work {int work; int wq; int cpu; } ;


 int FUNC_0 (int ,int ,int *) ;
 struct delayed_work* VAR_0 ;
 struct delayed_work* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_1 ;

void FUNC_2(struct timer_list *VAR_2)
{
 struct delayed_work *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);


 FUNC_0(VAR_3->cpu, VAR_3->wq, &VAR_3->work);
}
