
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 struct perf_cpu_map* FUNC_0 (char*) ;
 int FUNC_1 (struct perf_cpu_map*) ;
 int FUNC_2 (char*,int,char*,char const*,char const*) ;
 char* FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(const char *VAR_2)
{
 char VAR_3[VAR_1];
 struct perf_cpu_map *VAR_4;
 const char *VAR_5 = FUNC_3();

 FUNC_2(VAR_3, VAR_1, VAR_0, VAR_5, VAR_2);
 VAR_4 = FUNC_0(VAR_3);
 FUNC_1(VAR_4);

 return !!VAR_4;
}
