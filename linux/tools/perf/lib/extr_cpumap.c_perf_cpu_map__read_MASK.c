
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 struct perf_cpu_map* FUNC_1 () ;
 struct perf_cpu_map* FUNC_2 (int,int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *,char*,int*,char*) ;
 int* FUNC_5 (int*,int) ;

struct perf_cpu_map *FUNC_6(FILE *VAR_1)
{
 struct perf_cpu_map *VAR_2 = ((void*)0);
 int VAR_3 = 0;
 int *VAR_4 = ((void*)0), *VAR_5;
 int VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9;
 char VAR_10;

 VAR_10 = 0;
 VAR_9 = -1;
 for (;;) {
  VAR_7 = FUNC_4(VAR_1, "%u%c", &VAR_8, &VAR_10);
  if (VAR_7 <= 0)
   break;
  if (VAR_9 >= 0) {
   int VAR_11 = VAR_3 + VAR_8 - VAR_9 - 1;

   FUNC_0(VAR_11 >= VAR_0, "Perf can support %d CPUs. "
         "Consider raising MAX_NR_CPUS\n", VAR_0);

   if (VAR_11 >= VAR_6) {
    VAR_6 = VAR_11 + VAR_0 / 2;
    VAR_5 = FUNC_5(VAR_4, VAR_6 * sizeof(int));
    if (VAR_5 == ((void*)0))
     goto out_free_tmp;
    VAR_4 = VAR_5;
   }

   while (++VAR_9 < VAR_8)
    VAR_4[VAR_3++] = VAR_9;
  }
  if (VAR_3 == VAR_6) {
   VAR_6 += VAR_0;
   VAR_5 = FUNC_5(VAR_4, VAR_6 * sizeof(int));
   if (VAR_5 == ((void*)0))
    goto out_free_tmp;
   VAR_4 = VAR_5;
  }

  VAR_4[VAR_3++] = VAR_8;
  if (VAR_7 == 2 && VAR_10 == '-')
   VAR_9 = VAR_8;
  else
   VAR_9 = -1;
  if (VAR_7 == 1 || VAR_10 == '\n')
   break;
 }

 if (VAR_3 > 0)
  VAR_2 = FUNC_2(VAR_3, VAR_4);
 else
  VAR_2 = FUNC_1();
out_free_tmp:
 FUNC_3(VAR_4);
 return VAR_2;
}
