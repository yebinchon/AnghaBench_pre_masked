
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
typedef int smp_call_func_t ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct cpumask const*,int ) ;
 unsigned int FUNC_3 (struct cpumask const*,struct cpumask const*) ;
 unsigned int FUNC_4 (unsigned int,struct cpumask const*,struct cpumask const*) ;
 struct cpumask* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned int,struct cpumask const*) ;
 unsigned int FUNC_7 () ;
 unsigned int VAR_1 ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned int,int ,void*,int) ;

int FUNC_10(const struct cpumask *VAR_2,
     smp_call_func_t VAR_3, void *VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 const struct cpumask *VAR_7;
 int VAR_8;


 VAR_6 = FUNC_7();
 if (FUNC_6(VAR_6, VAR_2))
  goto call;


 VAR_7 = FUNC_5(FUNC_1(VAR_6));
 for (VAR_6 = FUNC_3(VAR_7, VAR_2); VAR_6 < VAR_1;
      VAR_6 = FUNC_4(VAR_6, VAR_7, VAR_2)) {
  if (FUNC_0(VAR_6))
   goto call;
 }


 VAR_6 = FUNC_2(VAR_2, VAR_0);
call:
 VAR_8 = FUNC_9(VAR_6, VAR_3, VAR_4, VAR_5);
 FUNC_8();
 return VAR_8;
}
