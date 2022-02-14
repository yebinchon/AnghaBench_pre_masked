
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int dummy; } ;
struct evsel {int name; } ;
struct event_key {int dummy; } ;


 int FUNC_0 (struct evsel*,struct perf_sample*,struct event_key*) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct evsel *VAR_1,
         struct perf_sample *VAR_2, struct event_key *VAR_3)
{
 if (!FUNC_1(VAR_1->name, VAR_0[2])) {
  FUNC_0(VAR_1, VAR_2, VAR_3);
  return 1;
 }

 return 0;
}
