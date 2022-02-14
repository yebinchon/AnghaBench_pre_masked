
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sched_dl_entity {int dl_deadline; int runtime; int deadline; int dl_runtime; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static bool FUNC_1(struct sched_dl_entity *VAR_1,
          struct sched_dl_entity *VAR_2, u64 VAR_3)
{
 u64 VAR_4, VAR_5;
 VAR_4 = (VAR_2->dl_deadline >> VAR_0) * (VAR_1->runtime >> VAR_0);
 VAR_5 = ((VAR_1->deadline - VAR_3) >> VAR_0) *
  (VAR_2->dl_runtime >> VAR_0);

 return FUNC_0(VAR_5, VAR_4);
}
