
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct held_lock* held_locks; } ;
struct lockdep_map {int dummy; } ;
struct held_lock {scalar_t__ irq_context; } ;


 scalar_t__ FUNC_0 (struct held_lock*,struct lockdep_map*) ;

__attribute__((used)) static struct held_lock *FUNC_1(struct task_struct *VAR_0,
     struct lockdep_map *VAR_1,
     unsigned int VAR_2, int *VAR_3)
{
 struct held_lock *VAR_4, *VAR_5, *VAR_6;
 int VAR_7;

 VAR_7 = VAR_2 - 1;
 VAR_5 = VAR_0->held_locks + VAR_7;
 VAR_4 = VAR_5;
 if (FUNC_0(VAR_5, VAR_1))
  goto out;

 VAR_4 = ((void*)0);
 for (VAR_7--, VAR_6 = VAR_5--;
      VAR_7 >= 0;
      VAR_7--, VAR_6 = VAR_5--) {



  if (VAR_6->irq_context != VAR_5->irq_context) {
   VAR_4 = ((void*)0);
   break;
  }
  if (FUNC_0(VAR_5, VAR_1)) {
   VAR_4 = VAR_5;
   break;
  }
 }

out:
 *VAR_3 = VAR_7;
 return VAR_4;
}
