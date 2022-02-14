
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned long long VAR_20 ;
 unsigned long long VAR_21 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_22 ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ FUNC_2 (int,int ,unsigned long long*) ;
 int VAR_23 ;
 int FUNC_3 (int,unsigned long long,char*) ;
 int VAR_24 ;
 unsigned long long VAR_25 ;
 unsigned long long VAR_26 ;

int FUNC_4(struct thread_data *VAR_27, struct core_data *VAR_28, struct pkg_data *VAR_29)
{
 unsigned long long VAR_30;
 const char *VAR_31;
 int VAR_32;

 if (!VAR_22)
  return 0;


 if (!(VAR_27->flags & VAR_1) || !(VAR_27->flags & VAR_0))
  return 0;

 VAR_32 = VAR_27->cpu_id;
 if (FUNC_0(VAR_32)) {
  FUNC_1(VAR_23, "Could not migrate to CPU %d\n", VAR_32);
  return -1;
 }

 if (VAR_22 & VAR_12) {
  VAR_31 = "MSR_RAPL_PWR_UNIT";
  if (FUNC_2(VAR_32, VAR_11, &VAR_30))
   return -1;
 } else {
  VAR_31 = "MSR_RAPL_POWER_UNIT";
  if (FUNC_2(VAR_32, VAR_10, &VAR_30))
   return -1;
 }

 FUNC_1(VAR_23, "cpu%d: %s: 0x%08llx (%llu Watts, %d Joules, %llu sec.)\n", VAR_32, VAR_31, VAR_30,
  VAR_25, VAR_24, VAR_26);

 if (VAR_22 & VAR_19) {

  if (FUNC_2(VAR_32, VAR_4, &VAR_30))
                 return -5;


  FUNC_1(VAR_23, "cpu%d: MSR_PKG_POWER_INFO: 0x%08llx (%.0llu W TDP, RAPL %.0llu - %.0llu W, %llu sec.)\n",
   VAR_32, VAR_30,
   ((VAR_30 >> 0) & VAR_20) * VAR_25,
   ((VAR_30 >> 16) & VAR_20) * VAR_25,
   ((VAR_30 >> 32) & VAR_20) * VAR_25,
   ((VAR_30 >> 48) & VAR_21) * VAR_26);

 }
 if (VAR_22 & VAR_18) {

  if (FUNC_2(VAR_32, VAR_5, &VAR_30))
   return -9;

  FUNC_1(VAR_23, "cpu%d: MSR_PKG_POWER_LIMIT: 0x%08llx (%slocked)\n",
   VAR_32, VAR_30, (VAR_30 >> 63) & 1 ? "" : "UN");

  FUNC_3(VAR_32, VAR_30, "PKG Limit #1");
  FUNC_1(VAR_23, "cpu%d: PKG Limit #2: %sabled (%llu Watts, %f* sec, clamp %sabled)\n",
   VAR_32,
   ((VAR_30 >> 47) & 1) ? "EN" : "DIS",
   ((VAR_30 >> 32) & 0x7FFF) * VAR_25,
   (1.0 + (((VAR_30 >> 54) & 0x3)/4.0)) * (1 << ((VAR_30 >> 49) & 0x1F)) * VAR_26,
   ((VAR_30 >> 48) & 1) ? "EN" : "DIS");
 }

 if (VAR_22 & VAR_16) {
  if (FUNC_2(VAR_32, VAR_2, &VAR_30))
                 return -6;

  FUNC_1(VAR_23, "cpu%d: MSR_DRAM_POWER_INFO,: 0x%08llx (%.0llu W TDP, RAPL %.0llu - %.0llu W, %llu sec.)\n",
   VAR_32, VAR_30,
   ((VAR_30 >> 0) & VAR_20) * VAR_25,
   ((VAR_30 >> 16) & VAR_20) * VAR_25,
   ((VAR_30 >> 32) & VAR_20) * VAR_25,
   ((VAR_30 >> 48) & VAR_21) * VAR_26);
 }
 if (VAR_22 & VAR_15) {
  if (FUNC_2(VAR_32, VAR_3, &VAR_30))
   return -9;
  FUNC_1(VAR_23, "cpu%d: MSR_DRAM_POWER_LIMIT: 0x%08llx (%slocked)\n",
    VAR_32, VAR_30, (VAR_30 >> 31) & 1 ? "" : "UN");

  FUNC_3(VAR_32, VAR_30, "DRAM Limit");
 }
 if (VAR_22 & VAR_14) {
  if (FUNC_2(VAR_32, VAR_6, &VAR_30))
   return -7;

  FUNC_1(VAR_23, "cpu%d: MSR_PP0_POLICY: %lld\n", VAR_32, VAR_30 & 0xF);
 }
 if (VAR_22 & VAR_13) {
  if (FUNC_2(VAR_32, VAR_7, &VAR_30))
   return -9;
  FUNC_1(VAR_23, "cpu%d: MSR_PP0_POWER_LIMIT: 0x%08llx (%slocked)\n",
    VAR_32, VAR_30, (VAR_30 >> 31) & 1 ? "" : "UN");
  FUNC_3(VAR_32, VAR_30, "Cores Limit");
 }
 if (VAR_22 & VAR_17) {
  if (FUNC_2(VAR_32, VAR_8, &VAR_30))
   return -8;

  FUNC_1(VAR_23, "cpu%d: MSR_PP1_POLICY: %lld\n", VAR_32, VAR_30 & 0xF);

  if (FUNC_2(VAR_32, VAR_9, &VAR_30))
   return -9;
  FUNC_1(VAR_23, "cpu%d: MSR_PP1_POWER_LIMIT: 0x%08llx (%slocked)\n",
    VAR_32, VAR_30, (VAR_30 >> 31) & 1 ? "" : "UN");
  FUNC_3(VAR_32, VAR_30, "GFX Limit");
 }
 return 0;
}
