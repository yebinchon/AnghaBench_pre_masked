
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_domain {unsigned long dirty_limit_tstamp; int lock; } ;
struct dirty_throttle_control {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct wb_domain* FUNC_0 (struct dirty_throttle_control*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;
 int FUNC_5 (struct dirty_throttle_control*) ;

__attribute__((used)) static void FUNC_6(struct dirty_throttle_control *VAR_1,
        unsigned long VAR_2)
{
 struct wb_domain *VAR_3 = FUNC_0(VAR_1);




 if (FUNC_4(VAR_2, VAR_3->dirty_limit_tstamp + VAR_0))
  return;

 FUNC_1(&VAR_3->lock);
 if (FUNC_3(VAR_2, VAR_3->dirty_limit_tstamp + VAR_0)) {
  FUNC_5(VAR_1);
  VAR_3->dirty_limit_tstamp = VAR_2;
 }
 FUNC_2(&VAR_3->lock);
}
