
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_name_seq {scalar_t__ lower; scalar_t__ upper; } ;



int FUNC_0(struct tipc_name_seq *VAR_0, u32 VAR_1,
      u32 VAR_2)
{
 if (VAR_1 < VAR_0->lower)
  VAR_1 = VAR_0->lower;
 if (VAR_2 > VAR_0->upper)
  VAR_2 = VAR_0->upper;
 if (VAR_1 > VAR_2)
  return 0;
 return 1;
}
