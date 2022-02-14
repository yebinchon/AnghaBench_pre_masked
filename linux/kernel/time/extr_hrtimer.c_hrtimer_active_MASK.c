
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_clock_base {struct hrtimer const* running; int seq; } ;
struct hrtimer {scalar_t__ state; int base; } ;


 scalar_t__ VAR_0 ;
 struct hrtimer_clock_base* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

bool FUNC_3(const struct hrtimer *VAR_1)
{
 struct hrtimer_clock_base *VAR_2;
 unsigned int VAR_3;

 do {
  VAR_2 = FUNC_0(VAR_1->base);
  VAR_3 = FUNC_1(&VAR_2->seq);

  if (VAR_1->state != VAR_0 ||
      VAR_2->running == VAR_1)
   return 1;

 } while (FUNC_2(&VAR_2->seq, VAR_3) ||
   VAR_2 != FUNC_0(VAR_1->base));

 return 0;
}
