
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wake_q_head {int dummy; } ;
struct cpu_stopper {int thread; int works; } ;
struct cpu_stop_work {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct wake_q_head*,int ) ;

__attribute__((used)) static void FUNC_2(struct cpu_stopper *VAR_0,
     struct cpu_stop_work *VAR_1,
     struct wake_q_head *VAR_2)
{
 FUNC_0(&VAR_1->list, &VAR_0->works);
 FUNC_1(VAR_2, VAR_0->thread);
}
