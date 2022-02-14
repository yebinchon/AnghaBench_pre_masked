
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int dummy; } ;
struct evsel {int dummy; } ;
struct event_key {int exit_reasons; int key; } ;


 int FUNC_0 (struct evsel*,struct perf_sample*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct evsel *VAR_1,
        struct perf_sample *VAR_2,
        struct event_key *VAR_3)
{
 VAR_3->key = FUNC_0(VAR_1, VAR_2, "code");
 VAR_3->exit_reasons = VAR_0;
}
