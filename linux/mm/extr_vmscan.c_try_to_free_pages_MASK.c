
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zonelist {int dummy; } ;
struct scan_control {int order; scalar_t__ priority; int may_writepage; int may_unmap; int may_swap; int gfp_mask; int reclaim_state; int * nodemask; int reclaim_idx; int nr_to_reclaim; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct zonelist*,struct scan_control*) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,struct zonelist*,int *) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (unsigned long) ;

unsigned long FUNC_8(struct zonelist *VAR_7, int VAR_8,
    gfp_t VAR_9, nodemask_t *VAR_10)
{
 unsigned long VAR_11;
 struct scan_control VAR_12 = {
  .nr_to_reclaim = VAR_4,
  .gfp_mask = FUNC_1(VAR_9),
  .reclaim_idx = FUNC_3(VAR_9),
  .order = VAR_8,
  .nodemask = VAR_10,
  .priority = VAR_0,
  .may_writepage = !VAR_6,
  .may_unmap = 1,
  .may_swap = 1,
 };





 FUNC_0(VAR_2 > VAR_3);
 FUNC_0(VAR_0 > VAR_3);
 FUNC_0(VAR_1 > VAR_3);






 if (FUNC_5(VAR_12.gfp_mask, VAR_7, VAR_10))
  return 1;

 FUNC_4(VAR_5, &VAR_12.reclaim_state);
 FUNC_6(VAR_8, VAR_12.gfp_mask);

 VAR_11 = FUNC_2(VAR_7, &VAR_12);

 FUNC_7(VAR_11);
 FUNC_4(VAR_5, ((void*)0));

 return VAR_11;
}
