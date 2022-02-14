
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int dummy; } ;
struct evsel {int dummy; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct evsel* FUNC_0 (struct evlist*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct evsel*,struct perf_thread_map*) ;
 int FUNC_3 (struct perf_thread_map*) ;
 int FUNC_4 (char*) ;
 struct perf_thread_map* FUNC_5 (int,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct evlist *VAR_3)
{
 struct evsel *VAR_4 = FUNC_0(VAR_3);
 struct perf_thread_map *VAR_5;
 int VAR_6;

 FUNC_4("attaching to current thread as enabled\n");

 VAR_5 = FUNC_5(-1, FUNC_1(), VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_4("failed to call thread_map__new\n");
  return -1;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_5);

 FUNC_3(VAR_5);
 return VAR_6 == 0 ? VAR_1 : VAR_0;
}
