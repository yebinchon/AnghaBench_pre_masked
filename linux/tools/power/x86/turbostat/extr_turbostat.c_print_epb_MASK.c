
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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ FUNC_2 (int,int ,unsigned long long*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(struct thread_data *VAR_5, struct core_data *VAR_6, struct pkg_data *VAR_7)
{
 unsigned long long VAR_8;
 char *VAR_9;
 int VAR_10;

 if (!VAR_3)
  return 0;

 VAR_10 = VAR_5->cpu_id;


 if (!(VAR_5->flags & VAR_1) || !(VAR_5->flags & VAR_0))
  return 0;

 if (FUNC_0(VAR_10)) {
  FUNC_1(VAR_4, "Could not migrate to CPU %d\n", VAR_10);
  return -1;
 }

 if (FUNC_2(VAR_10, VAR_2, &VAR_8))
  return 0;

 switch (VAR_8 & 0xF) {
 case 129:
  VAR_9 = "performance";
  break;
 case 130:
  VAR_9 = "balanced";
  break;
 case 128:
  VAR_9 = "powersave";
  break;
 default:
  VAR_9 = "custom";
  break;
 }
 FUNC_1(VAR_4, "cpu%d: MSR_IA32_ENERGY_PERF_BIAS: 0x%08llx (%s)\n", VAR_10, VAR_8, VAR_9);

 return 0;
}
