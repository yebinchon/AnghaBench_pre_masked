
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int vruntime; scalar_t__ on_rq; } ;
struct cfs_rq {scalar_t__ min_vruntime; struct sched_entity* curr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_1 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_2 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_3 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_4 (struct cfs_rq*) ;
 int FUNC_5 (struct sched_entity*) ;
 int FUNC_6 (struct cfs_rq*) ;
 int FUNC_7 (struct cfs_rq*,struct sched_entity*,int ) ;
 int FUNC_8 (struct cfs_rq*) ;
 int FUNC_9 (struct cfs_rq*,struct sched_entity*,int) ;

__attribute__((used)) static void
FUNC_10(struct cfs_rq *VAR_4, struct sched_entity *VAR_5, int VAR_6)
{



 FUNC_6(VAR_4);
 FUNC_7(VAR_4, VAR_5, VAR_3);
 FUNC_3(VAR_4, VAR_5);

 FUNC_9(VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_4, VAR_5);

 if (VAR_5 != VAR_4->curr)
  FUNC_0(VAR_4, VAR_5);
 VAR_5->on_rq = 0;
 FUNC_1(VAR_4, VAR_5);







 if (!(VAR_6 & VAR_2))
  VAR_5->vruntime -= VAR_4->min_vruntime;


 FUNC_4(VAR_4);

 FUNC_5(VAR_5);







 if ((VAR_6 & (VAR_1 | VAR_0)) != VAR_1)
  FUNC_8(VAR_4);
}
