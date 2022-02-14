
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_entity {TYPE_1__* parent; scalar_t__ depth; } ;
struct cfs_rq {int dummy; } ;
struct TYPE_2__ {scalar_t__ depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfs_rq*,struct sched_entity*,int ) ;
 struct cfs_rq* FUNC_1 (struct sched_entity*) ;
 int FUNC_2 (struct sched_entity*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct cfs_rq*,struct sched_entity*,int ) ;
 int FUNC_5 (struct cfs_rq*,int) ;

__attribute__((used)) static void FUNC_6(struct sched_entity *VAR_2)
{
 struct cfs_rq *VAR_3 = FUNC_1(VAR_2);
 FUNC_4(VAR_3, VAR_2, FUNC_3(VAR_0) ? 0 : VAR_1);
 FUNC_0(VAR_3, VAR_2, 0);
 FUNC_5(VAR_3, 0);
 FUNC_2(VAR_2);
}
