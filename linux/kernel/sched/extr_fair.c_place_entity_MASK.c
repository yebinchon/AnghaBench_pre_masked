
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct sched_entity {int vruntime; } ;
struct cfs_rq {unsigned long min_vruntime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cfs_rq*,struct sched_entity*) ;
 unsigned long VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct cfs_rq *VAR_3, struct sched_entity *VAR_4, int VAR_5)
{
 u64 VAR_6 = VAR_3->min_vruntime;







 if (VAR_5 && FUNC_1(VAR_1))
  VAR_6 += FUNC_2(VAR_3, VAR_4);


 if (!VAR_5) {
  unsigned long VAR_7 = VAR_2;





  if (FUNC_1(VAR_0))
   VAR_7 >>= 1;

  VAR_6 -= VAR_7;
 }


 VAR_4->vruntime = FUNC_0(VAR_4->vruntime, VAR_6);
}
