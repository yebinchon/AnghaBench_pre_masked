
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct task_struct {int dummy; } ;
struct sched_param {int sched_priority; } ;
struct kthread_create_info {int (* threadfn ) (void*) ;int node; struct task_struct* result; int * done; int list; void* data; } ;
typedef int name ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct task_struct*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct kthread_create_info*) ;
 struct kthread_create_info* FUNC_4 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct task_struct*,int ,struct sched_param const*) ;
 int FUNC_7 (struct task_struct*,int ) ;
 int FUNC_8 (struct task_struct*,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,int,char const*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int **,int *) ;

struct task_struct *FUNC_17(int (*VAR_10)(void *VAR_11),
          void *VAR_12, int VAR_13,
          const char VAR_14[],
          va_list VAR_15)
{
 FUNC_0(VAR_6);
 struct task_struct *VAR_16;
 struct kthread_create_info *VAR_17 = FUNC_4(sizeof(*VAR_17),
           VAR_2);

 if (!VAR_17)
  return FUNC_1(-VAR_1);
 VAR_17->threadfn = VAR_10;
 VAR_17->data = VAR_12;
 VAR_17->node = VAR_13;
 VAR_17->done = &VAR_6;

 FUNC_9(&VAR_8);
 FUNC_5(&VAR_17->list, &VAR_7);
 FUNC_10(&VAR_8);

 FUNC_15(VAR_9);





 if (FUNC_11(FUNC_14(&VAR_6))) {





  if (FUNC_16(&VAR_17->done, ((void*)0)))
   return FUNC_1(-VAR_0);




  FUNC_13(&VAR_6);
 }
 VAR_16 = VAR_17->result;
 if (!FUNC_2(VAR_16)) {
  static const struct sched_param VAR_18 = { .sched_priority = 0 };
  char VAR_19[VAR_4];





  FUNC_12(VAR_19, sizeof(VAR_19), VAR_14, VAR_15);
  FUNC_8(VAR_16, VAR_19);




  FUNC_6(VAR_16, VAR_3, &VAR_18);
  FUNC_7(VAR_16, VAR_5);
 }
 FUNC_3(VAR_17);
 return VAR_16;
}
