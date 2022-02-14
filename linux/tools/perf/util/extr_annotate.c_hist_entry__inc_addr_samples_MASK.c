
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_sample {int dummy; } ;
struct TYPE_2__ {int map; int sym; } ;
struct hist_entry {TYPE_1__ ms; } ;
struct evsel {int dummy; } ;


 int FUNC_0 (int ,int ,struct evsel*,int ,struct perf_sample*) ;

int FUNC_1(struct hist_entry *VAR_0, struct perf_sample *VAR_1,
     struct evsel *VAR_2, u64 VAR_3)
{
 return FUNC_0(VAR_0->ms.sym, VAR_0->ms.map, VAR_2, VAR_3, VAR_1);
}
