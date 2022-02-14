
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
union perf_event {TYPE_1__ header; } ;
struct perf_sample {int dummy; } ;
struct TYPE_5__ {scalar_t__ config; } ;
struct TYPE_6__ {TYPE_2__ attr; } ;
struct evsel {TYPE_3__ core; } ;
struct evlist {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct evsel* FUNC_0 (struct evlist*,union perf_event*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct perf_sample*) ;
 int FUNC_3 (struct perf_sample*) ;

void FUNC_4(struct evlist *VAR_2, union perf_event *VAR_3,
      struct perf_sample *VAR_4)
{
 struct evsel *VAR_5;

 if (VAR_3->header.type != VAR_1)
  return;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0) ||
     VAR_5->core.attr.config != VAR_0)
  return;


 if (!FUNC_3(VAR_4)) {
  FUNC_1("Invalid counter set data encountered\n");
  return;
 }
 FUNC_2(VAR_4);
}
