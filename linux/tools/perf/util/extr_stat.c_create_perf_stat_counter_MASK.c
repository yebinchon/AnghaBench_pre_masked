
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target {int dummy; } ;
struct perf_stat_config {int initial_delay; scalar_t__ identifier; int no_inherit; } ;
struct perf_event_attr {int read_format; int inherit; int disabled; int enable_on_exec; int sample_type; scalar_t__ sample_period; } ;
struct TYPE_2__ {int nr_members; int threads; struct perf_event_attr attr; } ;
struct evsel {TYPE_1__ core; struct evsel* leader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct evsel*) ;
 scalar_t__ FUNC_1 (struct evsel*) ;
 int FUNC_2 (struct evsel*,int ) ;
 int FUNC_3 (struct evsel*,int ) ;
 scalar_t__ FUNC_4 (struct target*) ;
 int FUNC_5 (struct target*) ;
 scalar_t__ FUNC_6 (struct target*) ;

int FUNC_7(struct evsel *VAR_5,
        struct perf_stat_config *VAR_6,
        struct target *VAR_7)
{
 struct perf_event_attr *VAR_8 = &VAR_5->core.attr;
 struct evsel *VAR_9 = VAR_5->leader;

 VAR_8->read_format = VAR_2 |
       VAR_3;






 if (VAR_9->core.nr_members > 1)
  VAR_8->read_format |= VAR_1|VAR_0;

 VAR_8->inherit = !VAR_6->no_inherit;





 VAR_8->sample_period = 0;

 if (VAR_6->identifier)
  VAR_8->sample_type = VAR_4;






 if (FUNC_1(VAR_5)) {
  VAR_8->disabled = 1;





  if (FUNC_6(VAR_7) && !VAR_6->initial_delay)
   VAR_8->enable_on_exec = 1;
 }

 if (FUNC_4(VAR_7) && !FUNC_5(VAR_7))
  return FUNC_2(VAR_5, FUNC_0(VAR_5));

 return FUNC_3(VAR_5, VAR_5->core.threads);
}
