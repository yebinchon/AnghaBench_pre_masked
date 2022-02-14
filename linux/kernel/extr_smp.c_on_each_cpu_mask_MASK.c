
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
typedef int (* smp_call_func_t ) (void*) ;


 scalar_t__ FUNC_0 (int,struct cpumask const*) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (struct cpumask const*,int (*) (void*),void*,int) ;

void FUNC_6(const struct cpumask *VAR_0, smp_call_func_t VAR_1,
   void *VAR_2, bool VAR_3)
{
 int VAR_4 = FUNC_1();

 FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4, VAR_0)) {
  unsigned long VAR_5;
  FUNC_3(VAR_5);
  VAR_1(VAR_2);
  FUNC_2(VAR_5);
 }
 FUNC_4();
}
