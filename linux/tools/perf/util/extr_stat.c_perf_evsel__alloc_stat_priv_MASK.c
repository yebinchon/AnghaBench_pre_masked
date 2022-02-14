
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat_evsel {int dummy; } ;
struct evsel {int * stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct evsel*) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct evsel *VAR_1)
{
 VAR_1->stats = FUNC_1(sizeof(struct perf_stat_evsel));
 if (VAR_1->stats == ((void*)0))
  return -VAR_0;
 FUNC_0(VAR_1);
 return 0;
}
