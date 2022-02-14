
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet_timewait_sock {int tw_kill; int tw_timer; TYPE_1__* tw_dr; } ;
struct TYPE_2__ {int tw_count; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;

void FUNC_4(struct inet_timewait_sock *VAR_2, int VAR_3, bool VAR_4)
{
 VAR_2->tw_kill = VAR_3 <= 4*VAR_0;
 if (!VAR_4) {
  FUNC_0(FUNC_2(&VAR_2->tw_timer, VAR_1 + VAR_3));
  FUNC_1(&VAR_2->tw_dr->tw_count);
 } else {
  FUNC_3(&VAR_2->tw_timer, VAR_1 + VAR_3);
 }
}
