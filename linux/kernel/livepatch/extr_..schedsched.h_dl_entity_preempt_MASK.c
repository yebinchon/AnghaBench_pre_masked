
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {int deadline; } ;


 scalar_t__ FUNC_0 (struct sched_dl_entity*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_2(struct sched_dl_entity *VAR_0, struct sched_dl_entity *VAR_1)
{
 return FUNC_0(VAR_0) ||
        FUNC_1(VAR_0->deadline, VAR_1->deadline);
}
