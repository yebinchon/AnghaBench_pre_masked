
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_domain {unsigned long dirty_limit; } ;
struct dirty_throttle_control {unsigned long thresh; int dirty; } ;


 struct wb_domain* FUNC_0 (struct dirty_throttle_control*) ;
 unsigned long FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct dirty_throttle_control *VAR_0)
{
 struct wb_domain *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2 = VAR_0->thresh;
 unsigned long VAR_3 = VAR_1->dirty_limit;




 if (VAR_3 < VAR_2) {
  VAR_3 = VAR_2;
  goto update;
 }






 VAR_2 = FUNC_1(VAR_2, VAR_0->dirty);
 if (VAR_3 > VAR_2) {
  VAR_3 -= (VAR_3 - VAR_2) >> 5;
  goto update;
 }
 return;
update:
 VAR_1->dirty_limit = VAR_3;
}
