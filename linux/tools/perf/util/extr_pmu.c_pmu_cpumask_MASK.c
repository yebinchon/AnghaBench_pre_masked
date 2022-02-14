
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int dummy; } ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 struct perf_cpu_map* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char const*,char const*,char const*) ;
 char* FUNC_2 () ;

__attribute__((used)) static struct perf_cpu_map *FUNC_3(const char *VAR_3)
{
 char VAR_4[VAR_2];
 struct perf_cpu_map *VAR_5;
 const char *VAR_6 = FUNC_2();
 const char *VAR_7[] = {
  VAR_1,
  VAR_0,
  ((void*)0)
 };
 const char **VAR_8;

 if (!VAR_6)
  return ((void*)0);

 for (VAR_8 = VAR_7; *VAR_8; VAR_8++) {
  FUNC_1(VAR_4, VAR_2, *VAR_8, VAR_6, VAR_3);
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return ((void*)0);
}
