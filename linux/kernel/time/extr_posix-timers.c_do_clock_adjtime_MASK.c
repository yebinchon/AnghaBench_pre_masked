
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k_clock {int (* clock_adj ) (int const,struct __kernel_timex*) ;} ;
struct __kernel_timex {int dummy; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct k_clock* FUNC_0 (int const) ;
 int FUNC_1 (int const,struct __kernel_timex*) ;

int FUNC_2(const clockid_t VAR_2, struct __kernel_timex * VAR_3)
{
 const struct k_clock *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4)
  return -VAR_0;
 if (!VAR_4->clock_adj)
  return -VAR_1;

 return VAR_4->clock_adj(VAR_2, VAR_3);
}
