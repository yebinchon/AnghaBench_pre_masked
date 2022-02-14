
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct perf_cpu_map {int dummy; } ;
struct cpu_topology {void* thread_siblings; void* die_siblings; void* core_siblings; } ;


 long VAR_0 ;
 int FUNC_0 (struct cpu_topology*,int) ;
 void* FUNC_1 (int,int) ;
 long FUNC_2 () ;
 int FUNC_3 (struct perf_cpu_map*,int) ;
 int FUNC_4 (struct cpu_topology*) ;
 int FUNC_5 () ;
 struct perf_cpu_map* FUNC_6 (int *) ;
 int FUNC_7 (struct perf_cpu_map*) ;
 int FUNC_8 (char*) ;

struct cpu_topology *FUNC_9(void)
{
 struct cpu_topology *VAR_1 = ((void*)0);
 void *VAR_2;
 u32 VAR_3, VAR_4, VAR_5;
 size_t VAR_6;
 long VAR_7;
 int VAR_8 = -1;
 struct perf_cpu_map *VAR_9;
 bool VAR_10 = FUNC_5();

 VAR_7 = FUNC_2();


 VAR_9 = FUNC_6(((void*)0));
 if (VAR_9 == ((void*)0)) {
  FUNC_8("failed to get system cpumap\n");
  return ((void*)0);
 }

 VAR_3 = (u32)(VAR_7 & VAR_0);

 VAR_6 = VAR_3 * sizeof(char *);
 if (VAR_10)
  VAR_5 = 3;
 else
  VAR_5 = 2;
 VAR_2 = FUNC_1(1, sizeof(*VAR_1) + VAR_5 * VAR_6);
 if (!VAR_2)
  goto out_free;

 VAR_1 = VAR_2;
 VAR_2 += sizeof(*VAR_1);
 VAR_1->core_siblings = VAR_2;
 VAR_2 += VAR_6;
 if (VAR_10) {
  VAR_1->die_siblings = VAR_2;
  VAR_2 += VAR_6;
 }
 VAR_1->thread_siblings = VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (!FUNC_3(VAR_9, VAR_4))
   continue;

  VAR_8 = FUNC_0(VAR_1, VAR_4);
  if (VAR_8 < 0)
   break;
 }

out_free:
 FUNC_7(VAR_9);
 if (VAR_8) {
  FUNC_4(VAR_1);
  VAR_1 = ((void*)0);
 }
 return VAR_1;
}
