
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct smpboot_thread_data {unsigned int cpu; struct smp_hotplug_thread* ht; } ;
struct smp_hotplug_thread {int (* create ) (unsigned int) ;int store; int thread_comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct smpboot_thread_data*) ;
 struct task_struct* FUNC_6 (int ,struct smpboot_thread_data*,unsigned int,int ) ;
 int FUNC_7 (struct task_struct*) ;
 struct smpboot_thread_data* FUNC_8 (int,int ,int ) ;
 struct task_struct** FUNC_9 (int ,unsigned int) ;
 int VAR_3 ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (struct task_struct*,int ) ;

__attribute__((used)) static int
FUNC_12(struct smp_hotplug_thread *VAR_4, unsigned int VAR_5)
{
 struct task_struct *VAR_6 = *FUNC_9(VAR_4->store, VAR_5);
 struct smpboot_thread_data *VAR_7;

 if (VAR_6)
  return 0;

 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_1, FUNC_3(VAR_5));
 if (!VAR_7)
  return -VAR_0;
 VAR_7->cpu = VAR_5;
 VAR_7->ht = VAR_4;

 VAR_6 = FUNC_6(VAR_3, VAR_7, VAR_5,
        VAR_4->thread_comm);
 if (FUNC_0(VAR_6)) {
  FUNC_5(VAR_7);
  return FUNC_1(VAR_6);
 }




 FUNC_7(VAR_6);
 FUNC_4(VAR_6);
 *FUNC_9(VAR_4->store, VAR_5) = VAR_6;
 if (VAR_4->create) {






  if (!FUNC_11(VAR_6, VAR_2))
   FUNC_2(1);
  else
   VAR_4->create(VAR_5);
 }
 return 0;
}
