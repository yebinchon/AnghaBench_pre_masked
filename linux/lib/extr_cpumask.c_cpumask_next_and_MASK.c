
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;


 int FUNC_0 (struct cpumask const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_0 ;

int FUNC_3(int VAR_1, const struct cpumask *VAR_2,
       const struct cpumask *VAR_3)
{

 if (VAR_1 != -1)
  FUNC_1(VAR_1);
 return FUNC_2(FUNC_0(VAR_2), FUNC_0(VAR_3),
  VAR_0, VAR_1 + 1);
}
