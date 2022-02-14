
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rq_flags {int dummy; } ;
struct rq {struct task_struct* idle; } ;


 int FUNC_0 (struct rq*,struct task_struct*) ;
 int FUNC_1 (struct rq*,struct task_struct*) ;

__attribute__((used)) static struct task_struct *
FUNC_2(struct rq *VAR_0, struct task_struct *VAR_1, struct rq_flags *VAR_2)
{
 struct task_struct *VAR_3 = VAR_0->idle;

 if (VAR_1)
  FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_3);

 return VAR_3;
}
