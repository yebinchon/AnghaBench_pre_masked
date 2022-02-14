
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {scalar_t__ dl_deadline; scalar_t__ dl_period; } ;



__attribute__((used)) static inline bool FUNC_0(struct sched_dl_entity *VAR_0)
{
 return VAR_0->dl_deadline == VAR_0->dl_period;
}
