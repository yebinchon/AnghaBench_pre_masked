
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct aa_task_ctx {int dummy; } ;


 int FUNC_0 (struct aa_task_ctx*,struct aa_task_ctx*) ;
 struct task_struct* VAR_0 ;
 struct aa_task_ctx* FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_1,
          unsigned long VAR_2)
{
 struct aa_task_ctx *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3, FUNC_1(VAR_0));

 return 0;
}
