
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sum_mgr {int mgr_lock; int mgr; } ;
struct TYPE_2__ {int msr; } ;
struct sum {int * idx; TYPE_1__ rsc; } ;


 int FUNC_0 (struct sum*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct sum*) ;

__attribute__((used)) static int FUNC_5(struct sum_mgr *VAR_0, struct sum *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(&VAR_0->mgr_lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1->rsc.msr; VAR_3++)
  FUNC_1(&VAR_0->mgr, 1, VAR_1->idx[VAR_3]);

 FUNC_3(&VAR_0->mgr_lock, VAR_2);
 FUNC_4(VAR_1);
 FUNC_0(VAR_1);

 return 0;
}
