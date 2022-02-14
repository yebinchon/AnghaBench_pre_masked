
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace {scalar_t__ base_time; int full_time; } ;
struct perf_sample {scalar_t__ time; } ;
struct TYPE_3__ {int sample_type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct trace *VAR_1,
     struct evsel *VAR_2,
     struct perf_sample *VAR_3)
{
 if (VAR_1->base_time == 0 && !VAR_1->full_time &&
     (VAR_2->core.attr.sample_type & VAR_0))
  VAR_1->base_time = VAR_3->time;
}
