
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_rq {scalar_t__ rt_queued; int rt_nr_running; } ;
struct rq {int nr_running; struct rt_rq rt; } ;


 int FUNC_0 (int) ;
 struct rq* FUNC_1 (struct rt_rq*) ;
 int FUNC_2 (struct rq*,int ) ;

__attribute__((used)) static void
FUNC_3(struct rt_rq *VAR_0)
{
 struct rq *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->rt != VAR_0);

 if (!VAR_0->rt_queued)
  return;

 FUNC_0(!VAR_1->nr_running);

 FUNC_2(VAR_1, VAR_0->rt_nr_running);
 VAR_0->rt_queued = 0;

}
