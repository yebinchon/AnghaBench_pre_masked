
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lost; } ;
union perf_event {TYPE_2__ lost_samples; } ;
struct perf_top {int lost_total; int lost; } ;
struct TYPE_3__ {int total_lost_samples; } ;
struct hists {TYPE_1__ stats; } ;
struct evsel {int dummy; } ;


 struct hists* FUNC_0 (struct evsel*) ;

__attribute__((used)) static void
FUNC_1(struct perf_top *VAR_0,
          union perf_event *VAR_1,
          struct evsel *VAR_2)
{
 struct hists *VAR_3 = FUNC_0(VAR_2);

 VAR_0->lost += VAR_1->lost_samples.lost;
 VAR_0->lost_total += VAR_1->lost_samples.lost;
 VAR_3->stats.total_lost_samples += VAR_1->lost_samples.lost;
}
