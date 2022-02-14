
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int cpu_id; int flags; } ;
struct pkg_data {int dummy; } ;
struct core_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ FUNC_2 (int,int ,unsigned long long*) ;
 int VAR_9 ;
 unsigned int VAR_10 ;

int FUNC_3(struct thread_data *VAR_11, struct core_data *VAR_12, struct pkg_data *VAR_13)
{
 unsigned long long VAR_14;
 unsigned int VAR_15, VAR_16;
 int VAR_17;

 if (!(VAR_7 || VAR_8))
  return 0;

 VAR_17 = VAR_11->cpu_id;


 if (!(VAR_11->flags & VAR_1))
  return 0;

 if (FUNC_0(VAR_17)) {
  FUNC_1(VAR_9, "Could not migrate to CPU %d\n", VAR_17);
  return -1;
 }

 if (VAR_8 && (VAR_11->flags & VAR_0)) {
  if (FUNC_2(VAR_17, VAR_3, &VAR_14))
   return 0;

  VAR_15 = (VAR_14 >> 16) & 0x7F;
  FUNC_1(VAR_9, "cpu%d: MSR_IA32_PACKAGE_THERM_STATUS: 0x%08llx (%d C)\n",
   VAR_17, VAR_14, VAR_10 - VAR_15);

  if (FUNC_2(VAR_17, VAR_2, &VAR_14))
   return 0;

  VAR_15 = (VAR_14 >> 16) & 0x7F;
  VAR_16 = (VAR_14 >> 8) & 0x7F;
  FUNC_1(VAR_9, "cpu%d: MSR_IA32_PACKAGE_THERM_INTERRUPT: 0x%08llx (%d C, %d C)\n",
   VAR_17, VAR_14, VAR_10 - VAR_15, VAR_10 - VAR_16);
 }


 if (VAR_7 && VAR_6) {
  unsigned int VAR_18;

  if (FUNC_2(VAR_17, VAR_5, &VAR_14))
   return 0;

  VAR_15 = (VAR_14 >> 16) & 0x7F;
  VAR_18 = (VAR_14 >> 27) & 0xF;
  FUNC_1(VAR_9, "cpu%d: MSR_IA32_THERM_STATUS: 0x%08llx (%d C +/- %d)\n",
   VAR_17, VAR_14, VAR_10 - VAR_15, VAR_18);

  if (FUNC_2(VAR_17, VAR_4, &VAR_14))
   return 0;

  VAR_15 = (VAR_14 >> 16) & 0x7F;
  VAR_16 = (VAR_14 >> 8) & 0x7F;
  FUNC_1(VAR_9, "cpu%d: MSR_IA32_THERM_INTERRUPT: 0x%08llx (%d C, %d C)\n",
   VAR_17, VAR_14, VAR_10 - VAR_15, VAR_10 - VAR_16);
 }

 return 0;
}
