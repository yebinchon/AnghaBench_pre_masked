
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_rq {int rt_nr_running; } ;
struct rq {int dummy; } ;


 int FUNC_0 (struct rt_rq*) ;
 int FUNC_1 (struct rq*) ;
 struct rq* FUNC_2 (struct rt_rq*) ;

__attribute__((used)) static inline void FUNC_3(struct rt_rq *VAR_0)
{
 struct rq *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_0->rt_nr_running)
  return;

 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
