
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct perf_cpu_map {int * map; scalar_t__ nr; } ;
struct numa_topology {int nr; int * nodes; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char**,size_t*,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct numa_topology*) ;
 struct perf_cpu_map* FUNC_6 (char*) ;
 int FUNC_7 (struct perf_cpu_map*) ;
 int FUNC_8 (char*,int,int ,int ) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 () ;
 struct numa_topology* FUNC_11 (int) ;

struct numa_topology *FUNC_12(void)
{
 struct perf_cpu_map *VAR_2 = ((void*)0);
 struct numa_topology *VAR_3 = ((void*)0);
 char VAR_4[VAR_0];
 char *VAR_5 = ((void*)0);
 size_t VAR_6 = 0;
 u32 VAR_7, VAR_8;
 FILE *VAR_9;
 char *VAR_10;

 FUNC_8(VAR_4, VAR_0, VAR_1,
    FUNC_10());

 VAR_9 = FUNC_1(VAR_4, "r");
 if (!VAR_9)
  return ((void*)0);

 if (FUNC_3(&VAR_5, &VAR_6, VAR_9) <= 0)
  goto out;

 VAR_10 = FUNC_9(VAR_5, '\n');
 if (VAR_10)
  *VAR_10 = '\0';

 VAR_2 = FUNC_6(VAR_5);
 if (!VAR_2)
  goto out;

 VAR_7 = (u32) VAR_2->nr;

 VAR_3 = FUNC_11(sizeof(*VAR_3) + sizeof(VAR_3->nodes[0])*VAR_7);
 if (!VAR_3)
  goto out;

 VAR_3->nr = VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (FUNC_4(&VAR_3->nodes[VAR_8], VAR_2->map[VAR_8])) {
   FUNC_5(VAR_3);
   VAR_3 = ((void*)0);
   break;
  }
 }

out:
 FUNC_2(VAR_5);
 FUNC_0(VAR_9);
 FUNC_7(VAR_2);
 return VAR_3;
}
