
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pkg_ctdp_level_info {int core_cpumask; int core_cpumask_size; scalar_t__ cpu_count; } ;


 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ,char*,char*,int) ;
 int FUNC_7 (int,int ,struct isst_pkg_ctdp_level_info*) ;
 int FUNC_8 (int,int ) ;
 int VAR_1 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_11(int VAR_4, void *VAR_5, void *VAR_6, void *VAR_7,
      void *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_8(VAR_4, VAR_3);
 if (VAR_9)
  FUNC_9("set_tdp_level_for_cpu");
 else {
  FUNC_6(VAR_4, VAR_1, "perf-profile", "set_tdp_level",
        VAR_9);
  if (VAR_0) {
   struct isst_pkg_ctdp_level_info VAR_10;
   int VAR_11 = FUNC_4(VAR_4);
   int VAR_12 = FUNC_3(VAR_4);

   FUNC_2(VAR_2, "Option is set to online/offline\n");
   VAR_10.core_cpumask_size =
    FUNC_1(&VAR_10.core_cpumask);
   FUNC_7(VAR_4, VAR_3, &VAR_10);
   if (VAR_10.cpu_count) {
    int VAR_13, VAR_14 = FUNC_5();
    for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
     if (VAR_11 != FUNC_4(VAR_13) || VAR_12 != FUNC_3(VAR_13))
      continue;
     if (FUNC_0(VAR_13, VAR_10.core_cpumask_size, VAR_10.core_cpumask)) {
      FUNC_2(VAR_2, "online cpu %d\n", VAR_13);
      FUNC_10(VAR_13, 1);
     } else {
      FUNC_2(VAR_2, "offline cpu %d\n", VAR_13);
      FUNC_10(VAR_13, 0);
     }
    }
   }
  }
 }
}
