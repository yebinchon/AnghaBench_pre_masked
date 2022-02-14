
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int dummy; } ;
struct evsel {int dummy; } ;
struct event_key {void* info; void* key; } ;


 void* FUNC_0 (struct evsel*,struct perf_sample*,char*) ;

__attribute__((used)) static void FUNC_1(struct evsel *VAR_0,
     struct perf_sample *VAR_1,
     struct event_key *VAR_2)
{
 VAR_2->key = FUNC_0(VAR_0, VAR_1, "port");
 VAR_2->info = FUNC_0(VAR_0, VAR_1, "rw");
}
