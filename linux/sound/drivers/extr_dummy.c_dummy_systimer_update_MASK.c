
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_systimer_pcm {unsigned long base_time; unsigned long rate; scalar_t__ frac_pos; scalar_t__ frac_buffer_size; unsigned long frac_period_rest; scalar_t__ frac_period_size; int elapsed; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dummy_systimer_pcm *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = VAR_0 - VAR_1->base_time;
 if (!VAR_2)
  return;
 VAR_1->base_time += VAR_2;
 VAR_2 *= VAR_1->rate;
 VAR_1->frac_pos += VAR_2;
 while (VAR_1->frac_pos >= VAR_1->frac_buffer_size)
  VAR_1->frac_pos -= VAR_1->frac_buffer_size;
 while (VAR_1->frac_period_rest <= VAR_2) {
  VAR_1->elapsed++;
  VAR_1->frac_period_rest += VAR_1->frac_period_size;
 }
 VAR_1->frac_period_rest -= VAR_2;
}
