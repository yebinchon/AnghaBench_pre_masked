
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {TYPE_2__* mm; TYPE_1__* signal; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ oom_score_adj; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 struct task_struct* FUNC_0 (struct task_struct*) ;
 long FUNC_1 (TYPE_2__*,int ) ;
 long FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 long FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

unsigned long FUNC_8(struct task_struct *VAR_4, unsigned long VAR_5)
{
 long VAR_6;
 long VAR_7;

 if (FUNC_5(VAR_4))
  return 0;

 VAR_4 = FUNC_0(VAR_4);
 if (!VAR_4)
  return 0;






 VAR_7 = (long)VAR_4->signal->oom_score_adj;
 if (VAR_7 == VAR_2 ||
   FUNC_7(VAR_0, &VAR_4->mm->flags) ||
   FUNC_3(VAR_4)) {
  FUNC_6(VAR_4);
  return 0;
 }





 VAR_6 = FUNC_2(VAR_4->mm) + FUNC_1(VAR_4->mm, VAR_1) +
  FUNC_4(VAR_4->mm) / VAR_3;
 FUNC_6(VAR_4);


 VAR_7 *= VAR_5 / 1000;
 VAR_6 += VAR_7;





 return VAR_6 > 0 ? VAR_6 : 1;
}
