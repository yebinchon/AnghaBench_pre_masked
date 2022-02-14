
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sfb_sched_data {scalar_t__ penalty_rate; unsigned long penalty_burst; int tokens_avail; scalar_t__ token_time; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_2, struct sfb_sched_data *VAR_3)
{
 if (VAR_3->penalty_rate == 0 || VAR_3->penalty_burst == 0)
  return 1;

 if (VAR_3->tokens_avail < 1) {
  unsigned long VAR_4 = FUNC_0(10UL * VAR_0, VAR_1 - VAR_3->token_time);

  VAR_3->tokens_avail = (VAR_4 * VAR_3->penalty_rate) / VAR_0;
  if (VAR_3->tokens_avail > VAR_3->penalty_burst)
   VAR_3->tokens_avail = VAR_3->penalty_burst;
  VAR_3->token_time = VAR_1;
  if (VAR_3->tokens_avail < 1)
   return 1;
 }

 VAR_3->tokens_avail--;
 return 0;
}
