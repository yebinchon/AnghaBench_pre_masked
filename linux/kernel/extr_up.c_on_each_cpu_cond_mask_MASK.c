
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
typedef int (* smp_call_func_t ) (void*) ;
typedef int gfp_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(bool (*VAR_0)(int VAR_1, void *VAR_2),
      smp_call_func_t VAR_3, void *VAR_4, bool VAR_5,
      gfp_t VAR_6, const struct cpumask *VAR_7)
{
 unsigned long VAR_8;

 FUNC_2();
 if (VAR_0(0, VAR_4)) {
  FUNC_1(VAR_8);
  VAR_3(VAR_4);
  FUNC_0(VAR_8);
 }
 FUNC_3();
}
