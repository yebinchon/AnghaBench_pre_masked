
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {int branch_sample_type; } ;
struct TYPE_2__ {struct perf_event_attr attr; } ;
struct evsel {TYPE_1__ core; } ;
struct callchain_param {scalar_t__ record_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct evsel*,int ) ;

__attribute__((used)) static void
FUNC_1(struct evsel *VAR_8,
       struct callchain_param *VAR_9)
{
 struct perf_event_attr *VAR_10 = &VAR_8->core.attr;

 FUNC_0(VAR_8, VAR_1);
 if (VAR_9->record_mode == VAR_3) {
  FUNC_0(VAR_8, VAR_0);
  VAR_10->branch_sample_type &= ~(VAR_5 |
           VAR_4);
 }
 if (VAR_9->record_mode == VAR_2) {
  FUNC_0(VAR_8, VAR_6);
  FUNC_0(VAR_8, VAR_7);
 }
}
