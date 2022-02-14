
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwp_max; int hwp_min; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int,int,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_3(int VAR_5)
{
 if (!VAR_1)
  return 0;

 if (!FUNC_1())
  return 0;

 if (FUNC_0("/sys/devices/system/cpu/cpu0/cpufreq", VAR_0))
  return 0;

 if (VAR_4)
  FUNC_2(0, VAR_5, VAR_2.hwp_min);

 if (VAR_3)
  FUNC_2(1, VAR_5, VAR_2.hwp_max);

 return 0;
}
