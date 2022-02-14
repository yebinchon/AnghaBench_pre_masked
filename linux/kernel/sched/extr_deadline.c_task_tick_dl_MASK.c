
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ runtime; } ;
struct task_struct {TYPE_1__ dl; } ;
struct rq {int dl; } ;


 scalar_t__ FUNC_0 (struct rq*) ;
 scalar_t__ FUNC_1 (struct task_struct*,int *) ;
 int FUNC_2 (struct rq*) ;
 int FUNC_3 (struct rq*,struct task_struct*) ;
 int FUNC_4 (struct rq*) ;
 int FUNC_5 (int ,struct rq*,int) ;

__attribute__((used)) static void FUNC_6(struct rq *VAR_0, struct task_struct *VAR_1, int VAR_2)
{
 FUNC_4(VAR_0);

 FUNC_5(FUNC_2(VAR_0), VAR_0, 1);





 if (FUNC_0(VAR_0) && VAR_2 && VAR_1->dl.runtime > 0 &&
     FUNC_1(VAR_1, &VAR_0->dl))
  FUNC_3(VAR_0, VAR_1);
}
