
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sched_dl_entity {int deadline; int runtime; int dl_density; } ;
struct rq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct rq*) ;

__attribute__((used)) static void
FUNC_3(struct sched_dl_entity *VAR_1, struct rq *VAR_2)
{
 u64 VAR_3 = VAR_1->deadline - FUNC_2(VAR_2);







 FUNC_0(FUNC_1(VAR_1->deadline, FUNC_2(VAR_2)));

 VAR_1->runtime = (VAR_1->dl_density * VAR_3) >> VAR_0;
}
