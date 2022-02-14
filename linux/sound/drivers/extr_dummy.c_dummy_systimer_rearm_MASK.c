
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_systimer_pcm {int frac_period_rest; int rate; int timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct dummy_systimer_pcm *VAR_1)
{
 FUNC_0(&VAR_1->timer, VAR_0 +
  (VAR_1->frac_period_rest + VAR_1->rate - 1) / VAR_1->rate);
}
