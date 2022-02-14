
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
typedef int (* smp_call_func_t ) (void*) ;


 scalar_t__ FUNC_0 (int ,struct cpumask const*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(const struct cpumask *VAR_0,
        smp_call_func_t VAR_1, void *VAR_2, bool VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_0(0, VAR_0)) {
  FUNC_2(VAR_4);
  VAR_1(VAR_2);
  FUNC_1(VAR_4);
 }
}
