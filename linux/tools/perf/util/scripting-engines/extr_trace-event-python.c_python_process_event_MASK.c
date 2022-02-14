
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct tables {int dbe; int db_export_mode; } ;
struct perf_sample {int dummy; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct addr_location {int dummy; } ;



 int FUNC_0 (int *,union perf_event*,struct perf_sample*,struct evsel*,struct addr_location*) ;
 int FUNC_1 (struct perf_sample*,struct evsel*,struct addr_location*) ;
 int FUNC_2 (struct perf_sample*,struct evsel*,struct addr_location*) ;
 struct tables VAR_0 ;

__attribute__((used)) static void FUNC_3(union perf_event *VAR_1,
     struct perf_sample *VAR_2,
     struct evsel *VAR_3,
     struct addr_location *VAR_4)
{
 struct tables *VAR_5 = &VAR_0;

 switch (VAR_3->core.attr.type) {
 case 128:
  FUNC_2(VAR_2, VAR_3, VAR_4);
  break;

 default:
  if (VAR_5->db_export_mode)
   FUNC_0(&VAR_5->dbe, VAR_1, VAR_2, VAR_3, VAR_4);
  else
   FUNC_1(VAR_2, VAR_3, VAR_4);
 }
}
