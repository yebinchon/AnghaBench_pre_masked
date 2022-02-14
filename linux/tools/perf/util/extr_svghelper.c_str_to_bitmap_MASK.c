
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int nr; int* map; } ;
typedef int cpumask_t ;


 int FUNC_0 (int *) ;
 struct perf_cpu_map* FUNC_1 (char*) ;
 int FUNC_2 (struct perf_cpu_map*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, cpumask_t *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 struct perf_cpu_map *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_0);
 if (!VAR_5)
  return -1;

 for (VAR_3 = 0; VAR_3 < VAR_5->nr; VAR_3++) {
  VAR_6 = VAR_5->map[VAR_3];
  if (VAR_6 >= VAR_2) {
   VAR_4 = -1;
   break;
  }

  FUNC_3(VAR_6, FUNC_0(VAR_1));
 }

 FUNC_2(VAR_5);

 return VAR_4;
}
