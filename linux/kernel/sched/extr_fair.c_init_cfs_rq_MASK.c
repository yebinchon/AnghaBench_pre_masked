
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int lock; } ;
struct cfs_rq {TYPE_1__ removed; scalar_t__ min_vruntime; scalar_t__ min_vruntime_copy; int tasks_timeline; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct cfs_rq *VAR_1)
{
 VAR_1->tasks_timeline = VAR_0;
 VAR_1->min_vruntime = (u64)(-(1LL << 20));

 VAR_1->min_vruntime_copy = VAR_1->min_vruntime;




}
