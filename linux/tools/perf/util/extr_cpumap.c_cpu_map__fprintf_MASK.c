
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct perf_cpu_map*,char*,int) ;
 size_t FUNC_1 (int *,char*,char*) ;

size_t FUNC_2(struct perf_cpu_map *VAR_1, FILE *VAR_2)
{

 char VAR_3[1024];

 FUNC_0(VAR_1, VAR_3, sizeof(VAR_3));
 return FUNC_1(VAR_2, "%s\n", VAR_3);

}
