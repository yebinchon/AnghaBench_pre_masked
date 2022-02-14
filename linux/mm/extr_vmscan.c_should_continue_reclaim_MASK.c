
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct scan_control {int reclaim_idx; int order; } ;
struct pglist_data {struct zone* node_zones; } ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct zone*,int ,int ,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct scan_control*) ;
 int FUNC_4 (struct zone*) ;
 unsigned long FUNC_5 (struct pglist_data*,int ) ;

__attribute__((used)) static inline bool FUNC_6(struct pglist_data *VAR_2,
     unsigned long VAR_3,
     struct scan_control *VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 int VAR_7;


 if (!FUNC_3(VAR_4))
  return 0;
 if (!VAR_3)
  return 0;


 for (VAR_7 = 0; VAR_7 <= VAR_4->reclaim_idx; VAR_7++) {
  struct zone *VAR_8 = &VAR_2->node_zones[VAR_7];
  if (!FUNC_4(VAR_8))
   continue;

  switch (FUNC_1(VAR_8, VAR_4->order, 0, VAR_4->reclaim_idx)) {
  case 128:
  case 129:
   return 0;
  default:

   ;
  }
 }





 VAR_5 = FUNC_0(VAR_4->order);
 VAR_6 = FUNC_5(VAR_2, VAR_1);
 if (FUNC_2() > 0)
  VAR_6 += FUNC_5(VAR_2, VAR_0);

 return VAR_6 > VAR_5;
}
