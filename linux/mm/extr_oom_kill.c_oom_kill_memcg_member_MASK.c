
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct TYPE_2__ {scalar_t__ oom_score_adj; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct task_struct*,void*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_1, void *VAR_2)
{
 if (VAR_1->signal->oom_score_adj != VAR_0 &&
     !FUNC_2(VAR_1)) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1, VAR_2);
 }
 return 0;
}
