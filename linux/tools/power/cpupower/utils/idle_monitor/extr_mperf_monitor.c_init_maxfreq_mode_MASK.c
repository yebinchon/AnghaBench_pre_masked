
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int caps; scalar_t__ vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,unsigned long*,int*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,unsigned long long*) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_10;
 unsigned long long VAR_11;
 unsigned long VAR_12;

 if (!(VAR_7.caps & VAR_0))
  goto use_sysfs;

 if (VAR_7.vendor == VAR_4 ||
     VAR_7.vendor == VAR_5) {
  VAR_10 = FUNC_2(0, VAR_3, &VAR_11);




  if (VAR_10 != 0) {
   FUNC_1("TSC read 0x%x failed - assume TSC working\n",
          VAR_3);
   return 0;
  } else if (1 & (VAR_11 >> 24)) {
   VAR_8 = VAR_2;
   return 0;
  } else { }
 } else if (VAR_7.vendor == VAR_6) {




  VAR_8 = VAR_2;
  return 0;
 }
use_sysfs:
 if (FUNC_0(0, &VAR_12, &VAR_9)) {
  FUNC_1("Cannot retrieve max freq from cpufreq kernel "
         "subsystem\n");
  return -1;
 }
 VAR_8 = VAR_1;
 VAR_9 /= 1000;
 return 0;
}
