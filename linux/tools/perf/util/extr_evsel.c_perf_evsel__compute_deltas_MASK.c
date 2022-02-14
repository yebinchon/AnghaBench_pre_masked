
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_counts_values {scalar_t__ run; scalar_t__ ena; scalar_t__ val; } ;
struct evsel {TYPE_1__* prev_raw_counts; } ;
struct TYPE_2__ {struct perf_counts_values aggr; } ;


 struct perf_counts_values* FUNC_0 (TYPE_1__*,int,int) ;

void FUNC_1(struct evsel *VAR_0, int VAR_1, int VAR_2,
    struct perf_counts_values *VAR_3)
{
 struct perf_counts_values VAR_4;

 if (!VAR_0->prev_raw_counts)
  return;

 if (VAR_1 == -1) {
  VAR_4 = VAR_0->prev_raw_counts->aggr;
  VAR_0->prev_raw_counts->aggr = *VAR_3;
 } else {
  VAR_4 = *FUNC_0(VAR_0->prev_raw_counts, VAR_1, VAR_2);
  *FUNC_0(VAR_0->prev_raw_counts, VAR_1, VAR_2) = *VAR_3;
 }

 VAR_3->val = VAR_3->val - VAR_4.val;
 VAR_3->ena = VAR_3->ena - VAR_4.ena;
 VAR_3->run = VAR_3->run - VAR_4.run;
}
