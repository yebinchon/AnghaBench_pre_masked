
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;


 int FUNC_0 (int,struct cpumask*) ;
 int FUNC_1 (struct cpumask*) ;
 int FUNC_2 (int,struct cpumask const*) ;
 int FUNC_3 (int,struct cpumask*) ;
 int FUNC_4 (int,struct cpumask*) ;
 int VAR_0 ;
 struct cpumask* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct cpumask *VAR_1, struct cpumask *VAR_2,
    unsigned int VAR_3)
{
 const struct cpumask *VAR_4;
 int VAR_5, VAR_6;

 for ( ; VAR_3 > 0; ) {
  VAR_5 = FUNC_1(VAR_2);


  if (VAR_5 >= VAR_0)
   return;

  FUNC_0(VAR_5, VAR_2);
  FUNC_3(VAR_5, VAR_1);
  VAR_3--;


  VAR_4 = FUNC_5(VAR_5);
  for (VAR_6 = -1; VAR_3 > 0; ) {
   VAR_6 = FUNC_2(VAR_6, VAR_4);
   if (VAR_6 >= VAR_0)
    break;
   if (!FUNC_4(VAR_6, VAR_2))
    continue;
   FUNC_3(VAR_6, VAR_1);
   VAR_3--;
  }
 }
}
