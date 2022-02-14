
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int sample_type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {int sample_size; TYPE_2__ core; } ;
typedef enum perf_event_sample_format { ____Placeholder_perf_event_sample_format } perf_event_sample_format ;


 int FUNC_0 (struct evsel*) ;

void FUNC_1(struct evsel *VAR_0,
        enum perf_event_sample_format VAR_1)
{
 if (VAR_0->core.attr.sample_type & VAR_1) {
  VAR_0->core.attr.sample_type &= ~VAR_1;
  VAR_0->sample_size -= sizeof(u64);
  FUNC_0(VAR_0);
 }
}
