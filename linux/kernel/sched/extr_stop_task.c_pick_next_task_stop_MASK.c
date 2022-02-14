
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rq_flags {int dummy; } ;
struct rq {struct task_struct* stop; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rq*) ;
 int FUNC_2 (struct rq*,struct task_struct*) ;

__attribute__((used)) static struct task_struct *
FUNC_3(struct rq *VAR_0, struct task_struct *VAR_1, struct rq_flags *VAR_2)
{
 FUNC_0(VAR_1 || VAR_2);

 if (!FUNC_1(VAR_0))
  return ((void*)0);

 FUNC_2(VAR_0, VAR_0->stop);
 return VAR_0->stop;
}
