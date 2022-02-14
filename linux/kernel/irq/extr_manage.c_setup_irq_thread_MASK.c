
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct sched_param {int sched_priority; } ;
struct irqaction {int thread_flags; int thread; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int VAR_1 ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_2 ;
 int FUNC_2 (struct task_struct*) ;
 int VAR_3 ;
 struct task_struct* FUNC_3 (int ,struct irqaction*,char*,unsigned int,int ) ;
 int FUNC_4 (struct task_struct*,int ,struct sched_param*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct irqaction *VAR_4, unsigned int VAR_5, bool VAR_6)
{
 struct task_struct *VAR_7;
 struct sched_param VAR_8 = {
  .sched_priority = VAR_1/2,
 };

 if (!VAR_6) {
  VAR_7 = FUNC_3(VAR_3, VAR_4, "irq/%d-%s", VAR_5,
       VAR_4->name);
 } else {
  VAR_7 = FUNC_3(VAR_3, VAR_4, "irq/%d-s-%s", VAR_5,
       VAR_4->name);
  VAR_8.sched_priority -= 1;
 }

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_4(VAR_7, VAR_2, &VAR_8);






 VAR_4->thread = FUNC_2(VAR_7);
 FUNC_5(VAR_0, &VAR_4->thread_flags);
 return 0;
}
