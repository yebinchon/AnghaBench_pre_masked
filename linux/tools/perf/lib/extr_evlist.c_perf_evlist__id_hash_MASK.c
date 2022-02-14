
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_sample_id {int node; int id; struct perf_evsel* evsel; } ;
struct perf_evsel {int dummy; } ;
struct perf_evlist {int * heads; } ;


 int VAR_0 ;
 struct perf_sample_id* FUNC_0 (struct perf_evsel*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct perf_evlist *VAR_1,
     struct perf_evsel *VAR_2,
     int VAR_3, int VAR_4, u64 VAR_5)
{
 int VAR_6;
 struct perf_sample_id *VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);

 VAR_7->id = VAR_5;
 VAR_7->evsel = VAR_2;
 VAR_6 = FUNC_1(VAR_7->id, VAR_0);
 FUNC_2(&VAR_7->node, &VAR_1->heads[VAR_6]);
}
