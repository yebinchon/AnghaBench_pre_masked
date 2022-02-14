
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int nr_cpus_allowed; int rt; } ;
struct rq {int dummy; } ;


 int FUNC_0 (struct rq*,struct task_struct*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct rq*) ;
 int FUNC_3 (struct rq*) ;
 int FUNC_4 (int ,struct rq*,int) ;

__attribute__((used)) static void FUNC_5(struct rq *VAR_0, struct task_struct *VAR_1)
{
 FUNC_3(VAR_0);

 FUNC_4(FUNC_2(VAR_0), VAR_0, 1);





 if (FUNC_1(&VAR_1->rt) && VAR_1->nr_cpus_allowed > 1)
  FUNC_0(VAR_0, VAR_1);
}
