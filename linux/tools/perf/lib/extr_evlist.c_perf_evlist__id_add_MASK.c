
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_evsel {int ids; int * id; } ;
struct perf_evlist {int dummy; } ;


 int FUNC_0 (struct perf_evlist*,struct perf_evsel*,int,int,int ) ;

void FUNC_1(struct perf_evlist *VAR_0,
    struct perf_evsel *VAR_1,
    int VAR_2, int VAR_3, u64 VAR_4)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_1->id[VAR_1->ids++] = VAR_4;
}
