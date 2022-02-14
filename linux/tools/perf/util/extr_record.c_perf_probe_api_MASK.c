
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int* map; } ;
typedef int setup_probe_fn_t ;


 int VAR_0 ;
 struct perf_cpu_map* FUNC_0 (int *) ;
 int FUNC_1 (struct perf_cpu_map*) ;
 int FUNC_2 (int ,int,char const*) ;

__attribute__((used)) static bool FUNC_3(setup_probe_fn_t VAR_1)
{
 const char *VAR_2[] = {"cycles:u", "instructions:u", "cpu-clock:u", ((void*)0)};
 struct perf_cpu_map *VAR_3;
 int VAR_4, VAR_5, VAR_6 = 0;

 VAR_3 = FUNC_0(((void*)0));
 if (!VAR_3)
  return 0;
 VAR_4 = VAR_3->map[0];
 FUNC_1(VAR_3);

 do {
  VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_2[VAR_6++]);
  if (!VAR_5)
   return 1;
 } while (VAR_5 == -VAR_0 && VAR_2[VAR_6]);

 return 0;
}
