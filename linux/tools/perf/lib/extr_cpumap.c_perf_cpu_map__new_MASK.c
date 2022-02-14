
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int,char*,unsigned long) ;
 struct perf_cpu_map* FUNC_1 () ;
 struct perf_cpu_map* FUNC_2 () ;
 struct perf_cpu_map* FUNC_3 (int,int*) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (char const) ;
 struct perf_cpu_map* FUNC_6 () ;
 int* FUNC_7 (int*,int) ;
 unsigned long FUNC_8 (char const*,char**,int ) ;

struct perf_cpu_map *FUNC_9(const char *VAR_2)
{
 struct perf_cpu_map *VAR_3 = ((void*)0);
 unsigned long VAR_4, VAR_5 = 0;
 char *VAR_6 = ((void*)0);
 int VAR_7, VAR_8 = 0;
 int *VAR_9 = ((void*)0), *VAR_10;
 int VAR_11 = 0;

 if (!VAR_2)
  return FUNC_2();






 if (!FUNC_5(*VAR_2) && *VAR_2 != '\0')
  goto out;

 while (FUNC_5(*VAR_2)) {
  VAR_6 = ((void*)0);
  VAR_4 = FUNC_8(VAR_2, &VAR_6, 0);
  if (VAR_4 >= VAR_0
      || (*VAR_6 != '\0' && *VAR_6 != ',' && *VAR_6 != '-'))
   goto invalid;

  if (*VAR_6 == '-') {
   VAR_2 = ++VAR_6;
   VAR_6 = ((void*)0);
   VAR_5 = FUNC_8(VAR_2, &VAR_6, 0);

   if (VAR_5 >= VAR_0 || (*VAR_6 != '\0' && *VAR_6 != ','))
    goto invalid;

   if (VAR_5 < VAR_4)
    goto invalid;
  } else {
   VAR_5 = VAR_4;
  }

  FUNC_0(VAR_5 >= VAR_1, "Perf can support %d CPUs. "
        "Consider raising MAX_NR_CPUS\n", VAR_1);

  for (; VAR_4 <= VAR_5; VAR_4++) {

   for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    if (VAR_9[VAR_7] == (int)VAR_4)
     goto invalid;

   if (VAR_8 == VAR_11) {
    VAR_11 += VAR_1;
    VAR_10 = FUNC_7(VAR_9, VAR_11 * sizeof(int));
    if (VAR_10 == ((void*)0))
     goto invalid;
    VAR_9 = VAR_10;
   }
   VAR_9[VAR_8++] = (int)VAR_4;
  }
  if (*VAR_6)
   ++VAR_6;

  VAR_2 = VAR_6;
 }

 if (VAR_8 > 0)
  VAR_3 = FUNC_3(VAR_8, VAR_9);
 else if (*VAR_2 != '\0')
  VAR_3 = FUNC_1();
 else
  VAR_3 = FUNC_6();
invalid:
 FUNC_4(VAR_9);
out:
 return VAR_3;
}
