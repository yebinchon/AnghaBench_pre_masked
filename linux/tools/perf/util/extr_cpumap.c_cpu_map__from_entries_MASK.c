
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct perf_cpu_map {int* map; } ;
struct cpu_map_entries {unsigned int nr; scalar_t__* cpu; } ;


 struct perf_cpu_map* FUNC_0 (unsigned int) ;

__attribute__((used)) static struct perf_cpu_map *FUNC_1(struct cpu_map_entries *VAR_0)
{
 struct perf_cpu_map *VAR_1;

 VAR_1 = FUNC_0(VAR_0->nr);
 if (VAR_1) {
  unsigned VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0->nr; VAR_2++) {





   if (VAR_0->cpu[VAR_2] == (u16) -1)
    VAR_1->map[VAR_2] = -1;
   else
    VAR_1->map[VAR_2] = (int) VAR_0->cpu[VAR_2];
  }
 }

 return VAR_1;
}
