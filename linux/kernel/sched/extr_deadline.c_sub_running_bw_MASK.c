
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {int dl_bw; } ;
struct dl_rq {int dummy; } ;


 int FUNC_0 (int ,struct dl_rq*) ;
 int FUNC_1 (struct sched_dl_entity*) ;

__attribute__((used)) static inline
void FUNC_2(struct sched_dl_entity *VAR_0, struct dl_rq *VAR_1)
{
 if (!FUNC_1(VAR_0))
  FUNC_0(VAR_0->dl_bw, VAR_1);
}
