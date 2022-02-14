
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
typedef enum hk_flags { ____Placeholder_hk_flags } hk_flags ;


 struct cpumask const* VAR_0 ;
 int VAR_1 ;
 struct cpumask const* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

const struct cpumask *FUNC_1(enum hk_flags VAR_4)
{
 if (FUNC_0(&VAR_3))
  if (VAR_1 & VAR_4)
   return VAR_2;
 return VAR_0;
}
