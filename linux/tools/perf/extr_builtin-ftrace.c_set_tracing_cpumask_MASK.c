
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {scalar_t__ nr; } ;


 int FUNC_0 (struct perf_cpu_map*,scalar_t__) ;
 int FUNC_1 (struct perf_cpu_map*,char*,size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct perf_cpu_map *VAR_0)
{
 char *VAR_1;
 size_t VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_0->nr - 1);
 VAR_2 = VAR_4 / 4 + 2;
 VAR_2 += VAR_4 / 32;

 VAR_1 = FUNC_3(VAR_2);
 if (VAR_1 == ((void*)0)) {
  FUNC_4("failed to allocate cpu mask\n");
  return -1;
 }

 FUNC_1(VAR_0, VAR_1, VAR_2);

 VAR_3 = FUNC_5("tracing_cpumask", VAR_1);

 FUNC_2(VAR_1);
 return VAR_3;
}
