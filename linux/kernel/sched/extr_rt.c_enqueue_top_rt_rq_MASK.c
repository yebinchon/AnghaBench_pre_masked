
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_rq {int rt_queued; int rt_nr_running; } ;
struct rq {struct rt_rq rt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rq*,int ) ;
 int FUNC_2 (struct rq*,int ) ;
 struct rq* FUNC_3 (struct rt_rq*) ;
 scalar_t__ FUNC_4 (struct rt_rq*) ;

__attribute__((used)) static void
FUNC_5(struct rt_rq *VAR_0)
{
 struct rq *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(&VAR_1->rt != VAR_0);

 if (VAR_0->rt_queued)
  return;

 if (FUNC_4(VAR_0))
  return;

 if (VAR_0->rt_nr_running) {
  FUNC_1(VAR_1, VAR_0->rt_nr_running);
  VAR_0->rt_queued = 1;
 }


 FUNC_2(VAR_1, 0);
}
