
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {scalar_t__ vruntime; } ;
typedef scalar_t__ s64 ;



__attribute__((used)) static inline int FUNC_0(struct sched_entity *VAR_0,
    struct sched_entity *VAR_1)
{
 return (s64)(VAR_0->vruntime - VAR_1->vruntime) < 0;
}
