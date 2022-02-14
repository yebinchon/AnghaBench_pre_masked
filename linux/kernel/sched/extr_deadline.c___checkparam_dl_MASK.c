
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_attr {int sched_flags; unsigned long long sched_deadline; unsigned long long sched_runtime; unsigned long long sched_period; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;

bool FUNC_0(const struct sched_attr *VAR_2)
{

 if (VAR_2->sched_flags & VAR_1)
  return 1;


 if (VAR_2->sched_deadline == 0)
  return 0;





 if (VAR_2->sched_runtime < (1ULL << VAR_0))
  return 0;





 if (VAR_2->sched_deadline & (1ULL << 63) ||
     VAR_2->sched_period & (1ULL << 63))
  return 0;


 if ((VAR_2->sched_period != 0 &&
      VAR_2->sched_period < VAR_2->sched_deadline) ||
     VAR_2->sched_deadline < VAR_2->sched_runtime)
  return 0;

 return 1;
}
