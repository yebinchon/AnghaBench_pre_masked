
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct smp_hotplug_thread {int selfparking; int store; } ;


 int FUNC_0 (struct task_struct*) ;
 struct task_struct** FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct smp_hotplug_thread *VAR_0, unsigned int VAR_1)
{
 struct task_struct *VAR_2 = *FUNC_1(VAR_0->store, VAR_1);

 if (!VAR_0->selfparking)
  FUNC_0(VAR_2);
}
