
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct scan_control {int reclaim_idx; int order; } ;
typedef enum compact_result { ____Placeholder_compact_result } compact_result ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct zone*,int ,int ,int ) ;
 unsigned long FUNC_2 (struct zone*) ;
 int FUNC_3 (struct zone*,int ,unsigned long,int ) ;

__attribute__((used)) static inline bool FUNC_4(struct zone *VAR_2, struct scan_control *VAR_3)
{
 unsigned long VAR_4;
 enum compact_result VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3->order, 0, VAR_3->reclaim_idx);
 if (VAR_5 == VAR_1)

  return 1;
 if (VAR_5 == VAR_0)

  return 0;
 VAR_4 = FUNC_2(VAR_2) + FUNC_0(VAR_3->order);

 return FUNC_3(VAR_2, 0, VAR_4, VAR_3->reclaim_idx);
}
