
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clocksource {int max_cycles; int mask; int maxadj; int shift; int mult; int max_idle_ns; } ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct clocksource *VAR_0)
{
 VAR_0->max_idle_ns = FUNC_0(VAR_0->mult, VAR_0->shift,
      VAR_0->maxadj, VAR_0->mask,
      &VAR_0->max_cycles);
}
