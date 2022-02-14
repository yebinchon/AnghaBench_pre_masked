
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_counters {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct xt_counters* FUNC_0 (unsigned int) ;

struct xt_counters *FUNC_1(unsigned int VAR_2)
{
 struct xt_counters *VAR_3;

 if (VAR_2 == 0 || VAR_2 > VAR_0 / sizeof(*VAR_3))
  return ((void*)0);

 VAR_2 *= sizeof(*VAR_3);
 if (VAR_2 > VAR_1)
  return ((void*)0);

 return FUNC_0(VAR_2);
}
