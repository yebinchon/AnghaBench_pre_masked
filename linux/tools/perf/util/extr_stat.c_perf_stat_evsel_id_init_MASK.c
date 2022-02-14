
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat_evsel {int id; } ;
struct evsel {struct perf_stat_evsel* stats; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct evsel*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct evsel *VAR_2)
{
 struct perf_stat_evsel *VAR_3 = VAR_2->stats;
 int VAR_4;



 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!FUNC_1(FUNC_0(VAR_2), VAR_1[VAR_4])) {
   VAR_3->id = VAR_4;
   break;
  }
 }
}
