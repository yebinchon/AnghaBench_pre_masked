
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,int*) ;

__attribute__((used)) static __u64 FUNC_3(void)
{
 __u64 VAR_0 = 5000;
 FILE *VAR_1;

 VAR_1 = FUNC_1("/proc/sys/kernel/perf_event_max_sample_rate", "r");
 if (VAR_1 == ((void*)0))
  return VAR_0;
 FUNC_2(VAR_1, "%llu", &VAR_0);
 FUNC_0(VAR_1);
 return VAR_0;
}
