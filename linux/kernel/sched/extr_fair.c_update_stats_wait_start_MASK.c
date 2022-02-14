
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int wait_start; } ;
struct sched_entity {TYPE_1__ statistics; } ;
struct cfs_rq {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sched_entity*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct cfs_rq*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sched_entity*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static inline void
FUNC_9(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{
 u64 VAR_2, VAR_3;

 if (!FUNC_5())
  return;

 VAR_2 = FUNC_3(FUNC_4(VAR_0));
 VAR_3 = FUNC_6(VAR_1->statistics.wait_start);

 if (FUNC_1(VAR_1) && FUNC_8(FUNC_7(VAR_1)) &&
     FUNC_2(VAR_2 > VAR_3))
  VAR_2 -= VAR_3;

 FUNC_0(VAR_1->statistics.wait_start, VAR_2);
}
