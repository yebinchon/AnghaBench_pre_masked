
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
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,int ,unsigned long long*) ;
 int VAR_8 ;

int FUNC_3(struct thread_data *VAR_9, struct core_data *VAR_10, struct pkg_data *VAR_11)
{
 unsigned long long VAR_12;
 int VAR_13;

 VAR_13 = VAR_9->cpu_id;


 if (!(VAR_9->flags & VAR_1) || !(VAR_9->flags & VAR_0))
  return 0;

 if (FUNC_0(VAR_13)) {
  FUNC_1(VAR_8, "Could not migrate to CPU %d\n", VAR_13);
  return -1;
 }

 if (VAR_5) {
  FUNC_2(VAR_13, VAR_2, &VAR_12);
  FUNC_1(VAR_8, "cpu%d: MSR_CORE_PERF_LIMIT_REASONS, 0x%08llx", VAR_13, VAR_12);
  FUNC_1(VAR_8, " (Active: %s%s%s%s%s%s%s%s%s%s%s%s%s%s)",
   (VAR_12 & 1 << 15) ? "bit15, " : "",
   (VAR_12 & 1 << 14) ? "bit14, " : "",
   (VAR_12 & 1 << 13) ? "Transitions, " : "",
   (VAR_12 & 1 << 12) ? "MultiCoreTurbo, " : "",
   (VAR_12 & 1 << 11) ? "PkgPwrL2, " : "",
   (VAR_12 & 1 << 10) ? "PkgPwrL1, " : "",
   (VAR_12 & 1 << 9) ? "CorePwr, " : "",
   (VAR_12 & 1 << 8) ? "Amps, " : "",
   (VAR_12 & 1 << 6) ? "VR-Therm, " : "",
   (VAR_12 & 1 << 5) ? "Auto-HWP, " : "",
   (VAR_12 & 1 << 4) ? "Graphics, " : "",
   (VAR_12 & 1 << 2) ? "bit2, " : "",
   (VAR_12 & 1 << 1) ? "ThermStatus, " : "",
   (VAR_12 & 1 << 0) ? "PROCHOT, " : "");
  FUNC_1(VAR_8, " (Logged: %s%s%s%s%s%s%s%s%s%s%s%s%s%s)\n",
   (VAR_12 & 1 << 31) ? "bit31, " : "",
   (VAR_12 & 1 << 30) ? "bit30, " : "",
   (VAR_12 & 1 << 29) ? "Transitions, " : "",
   (VAR_12 & 1 << 28) ? "MultiCoreTurbo, " : "",
   (VAR_12 & 1 << 27) ? "PkgPwrL2, " : "",
   (VAR_12 & 1 << 26) ? "PkgPwrL1, " : "",
   (VAR_12 & 1 << 25) ? "CorePwr, " : "",
   (VAR_12 & 1 << 24) ? "Amps, " : "",
   (VAR_12 & 1 << 22) ? "VR-Therm, " : "",
   (VAR_12 & 1 << 21) ? "Auto-HWP, " : "",
   (VAR_12 & 1 << 20) ? "Graphics, " : "",
   (VAR_12 & 1 << 18) ? "bit18, " : "",
   (VAR_12 & 1 << 17) ? "ThermStatus, " : "",
   (VAR_12 & 1 << 16) ? "PROCHOT, " : "");

 }
 if (VAR_6) {
  FUNC_2(VAR_13, VAR_3, &VAR_12);
  FUNC_1(VAR_8, "cpu%d: MSR_GFX_PERF_LIMIT_REASONS, 0x%08llx", VAR_13, VAR_12);
  FUNC_1(VAR_8, " (Active: %s%s%s%s%s%s%s%s)",
   (VAR_12 & 1 << 0) ? "PROCHOT, " : "",
   (VAR_12 & 1 << 1) ? "ThermStatus, " : "",
   (VAR_12 & 1 << 4) ? "Graphics, " : "",
   (VAR_12 & 1 << 6) ? "VR-Therm, " : "",
   (VAR_12 & 1 << 8) ? "Amps, " : "",
   (VAR_12 & 1 << 9) ? "GFXPwr, " : "",
   (VAR_12 & 1 << 10) ? "PkgPwrL1, " : "",
   (VAR_12 & 1 << 11) ? "PkgPwrL2, " : "");
  FUNC_1(VAR_8, " (Logged: %s%s%s%s%s%s%s%s)\n",
   (VAR_12 & 1 << 16) ? "PROCHOT, " : "",
   (VAR_12 & 1 << 17) ? "ThermStatus, " : "",
   (VAR_12 & 1 << 20) ? "Graphics, " : "",
   (VAR_12 & 1 << 22) ? "VR-Therm, " : "",
   (VAR_12 & 1 << 24) ? "Amps, " : "",
   (VAR_12 & 1 << 25) ? "GFXPwr, " : "",
   (VAR_12 & 1 << 26) ? "PkgPwrL1, " : "",
   (VAR_12 & 1 << 27) ? "PkgPwrL2, " : "");
 }
 if (VAR_7) {
  FUNC_2(VAR_13, VAR_4, &VAR_12);
  FUNC_1(VAR_8, "cpu%d: MSR_RING_PERF_LIMIT_REASONS, 0x%08llx", VAR_13, VAR_12);
  FUNC_1(VAR_8, " (Active: %s%s%s%s%s%s)",
   (VAR_12 & 1 << 0) ? "PROCHOT, " : "",
   (VAR_12 & 1 << 1) ? "ThermStatus, " : "",
   (VAR_12 & 1 << 6) ? "VR-Therm, " : "",
   (VAR_12 & 1 << 8) ? "Amps, " : "",
   (VAR_12 & 1 << 10) ? "PkgPwrL1, " : "",
   (VAR_12 & 1 << 11) ? "PkgPwrL2, " : "");
  FUNC_1(VAR_8, " (Logged: %s%s%s%s%s%s)\n",
   (VAR_12 & 1 << 16) ? "PROCHOT, " : "",
   (VAR_12 & 1 << 17) ? "ThermStatus, " : "",
   (VAR_12 & 1 << 22) ? "VR-Therm, " : "",
   (VAR_12 & 1 << 24) ? "Amps, " : "",
   (VAR_12 & 1 << 26) ? "PkgPwrL1, " : "",
   (VAR_12 & 1 << 27) ? "PkgPwrL2, " : "");
 }
 return 0;
}
