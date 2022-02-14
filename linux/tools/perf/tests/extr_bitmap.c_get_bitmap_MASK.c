
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int nr; int * map; } ;


 unsigned long* FUNC_0 (int) ;
 struct perf_cpu_map* FUNC_1 (char const*) ;
 int FUNC_2 (struct perf_cpu_map*) ;
 int FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static unsigned long *FUNC_4(const char *VAR_0, int VAR_1)
{
 struct perf_cpu_map *VAR_2 = FUNC_1(VAR_0);
 unsigned long *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 && VAR_3) {
  for (VAR_4 = 0; VAR_4 < VAR_2->nr; VAR_4++)
   FUNC_3(VAR_2->map[VAR_4], VAR_3);
 }

 if (VAR_2)
  FUNC_2(VAR_2);
 return VAR_3;
}
