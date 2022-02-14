
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int flags; int cpu_id; } ;
struct pkg_data {int dummy; } ;
struct core_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ FUNC_2 (int ,int ,unsigned long long*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

int FUNC_3(struct thread_data *VAR_12, struct core_data *VAR_13, struct pkg_data *VAR_14)
{
 unsigned long long VAR_15;
 unsigned int VAR_16;
 int VAR_17;


 if (!(VAR_5 || VAR_7))
  return 0;


 if (!(VAR_12->flags & VAR_1) || !(VAR_12->flags & VAR_0))
  return 0;

 VAR_17 = VAR_12->cpu_id;
 if (FUNC_0(VAR_17)) {
  FUNC_1(VAR_8, "Could not migrate to CPU %d\n", VAR_17);
  return -1;
 }

 if (VAR_11 != 0) {
  VAR_10 = VAR_11;
  FUNC_1(VAR_8, "cpu%d: Using cmdline TCC Target (%d C)\n",
   VAR_17, VAR_10);
  return 0;
 }


 if (!VAR_6)
  goto guess;

 if (FUNC_2(VAR_4, VAR_2, &VAR_15))
  goto guess;

 VAR_16 = (VAR_15 >> 16) & 0xFF;

 if (!VAR_9)
  FUNC_1(VAR_8, "cpu%d: MSR_IA32_TEMPERATURE_TARGET: 0x%08llx (%d C)\n",
   VAR_17, VAR_15, VAR_16);

 if (!VAR_16)
  goto guess;

 VAR_10 = VAR_16;

 return 0;

guess:
 VAR_10 = VAR_3;
 FUNC_1(VAR_8, "cpu%d: Guessing tjMax %d C, Please use -T to specify\n",
  VAR_17, VAR_10);

 return 0;
}
