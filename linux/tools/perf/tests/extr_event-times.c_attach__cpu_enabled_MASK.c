
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int dummy; } ;
struct evsel {int dummy; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct evsel* FUNC_0 (struct evlist*) ;
 struct perf_cpu_map* FUNC_1 (char*) ;
 int FUNC_2 (struct perf_cpu_map*) ;
 int FUNC_3 (struct evsel*,struct perf_cpu_map*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct evlist *VAR_4)
{
 struct evsel *VAR_5 = FUNC_0(VAR_4);
 struct perf_cpu_map *VAR_6;
 int VAR_7;

 FUNC_4("attaching to CPU 0 as enabled\n");

 VAR_6 = FUNC_1("0");
 if (VAR_6 == ((void*)0)) {
  FUNC_4("failed to call perf_cpu_map__new\n");
  return -1;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_6);
 if (VAR_7 == -VAR_0)
  return VAR_3;

 FUNC_2(VAR_6);
 return VAR_7 ? VAR_1 : VAR_2;
}
