
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
typedef int u64 ;
struct evsel {int dummy; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 struct evsel* FUNC_0 (struct evlist*,union perf_event*) ;
 int FUNC_1 (struct evsel*,union perf_event*,int *) ;

int FUNC_2(struct evlist *VAR_1,
     union perf_event *VAR_2,
     u64 *VAR_3)
{
 struct evsel *VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_4)
  return -VAR_0;
 return FUNC_1(VAR_4, VAR_2, VAR_3);
}
