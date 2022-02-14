
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ on_rq; int dl; } ;
struct rq {int dl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rq*,struct task_struct*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct rq*) ;

__attribute__((used)) static void FUNC_5(struct rq *VAR_3, struct task_struct *VAR_4, int VAR_5)
{
 FUNC_4(VAR_3);
 FUNC_0(VAR_3, VAR_4, VAR_5);

 if (VAR_4->on_rq == VAR_2 || VAR_5 & VAR_0) {
  FUNC_2(&VAR_4->dl, &VAR_3->dl);
  FUNC_1(&VAR_4->dl, &VAR_3->dl);
 }
 if (VAR_5 & VAR_1)
  FUNC_3(VAR_4);
}
