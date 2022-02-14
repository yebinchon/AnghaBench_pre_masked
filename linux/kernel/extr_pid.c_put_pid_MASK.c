
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid_namespace {int pid_cachep; } ;
struct pid {size_t level; int count; TYPE_1__* numbers; } ;
struct TYPE_2__ {struct pid_namespace* ns; } ;


 int FUNC_0 (int ,struct pid*) ;
 int FUNC_1 (struct pid_namespace*) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct pid *VAR_0)
{
 struct pid_namespace *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->numbers[VAR_0->level].ns;
 if (FUNC_2(&VAR_0->count)) {
  FUNC_0(VAR_1->pid_cachep, VAR_0);
  FUNC_1(VAR_1);
 }
}
