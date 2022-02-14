
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sched_dl_entity {scalar_t__ dl_period; scalar_t__ dl_deadline; scalar_t__ deadline; } ;



__attribute__((used)) static inline u64 FUNC_0(struct sched_dl_entity *VAR_0)
{
 return VAR_0->deadline - VAR_0->dl_deadline + VAR_0->dl_period;
}
