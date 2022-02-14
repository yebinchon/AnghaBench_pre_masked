
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
union perf_event {TYPE_2__ header; } ;
struct perf_sample {int raw_size; scalar_t__ raw_data; } ;
struct TYPE_3__ {int attr; } ;
struct evsel {TYPE_1__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_8 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(union perf_event *VAR_9,
           struct perf_sample *VAR_10,
           struct evsel *VAR_11)
{
 VAR_8;

 if (!FUNC_3("process_event", 0))
  return;

 VAR_0;
 VAR_5;
 FUNC_0(VAR_6);
 FUNC_1(FUNC_5(FUNC_4((const char *)VAR_9, VAR_9->header.size)));
 FUNC_1(FUNC_5(FUNC_4((const char *)&VAR_11->core.attr, sizeof(VAR_11->core.attr))));
 FUNC_1(FUNC_5(FUNC_4((const char *)VAR_10, sizeof(*VAR_10))));
 FUNC_1(FUNC_5(FUNC_4((const char *)VAR_10->raw_data, VAR_10->raw_size)));
 VAR_4;
 FUNC_2("process_event", VAR_2);
 VAR_7;
 VAR_4;
 VAR_1;
 VAR_3;
}
