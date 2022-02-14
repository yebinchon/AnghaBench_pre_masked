
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct perf_thread_map {int dummy; } ;
struct perf_event_attr {unsigned int config; int disabled; int type; } ;
struct TYPE_3__ {int exclude_kernel; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;


 int VAR_0 ;
 int FUNC_0 (struct evsel*) ;
 struct evsel* FUNC_1 (struct perf_event_attr*) ;
 int FUNC_2 (struct evsel*,int *,struct perf_thread_map*) ;
 int FUNC_3 (struct perf_thread_map*) ;
 struct perf_thread_map* FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(u8 VAR_1, unsigned VAR_2)
{
 bool VAR_3 = 1;
 int VAR_4;
 struct evsel *VAR_5;
 struct perf_event_attr VAR_6 = {
  .type = VAR_1,
  .config = VAR_2,
  .disabled = 1,
 };
 struct perf_thread_map *VAR_7 = FUNC_4(0);

 if (VAR_7 == ((void*)0))
  return 0;

 VAR_5 = FUNC_1(&VAR_6);
 if (VAR_5) {
  VAR_4 = FUNC_2(VAR_5, ((void*)0), VAR_7);
  VAR_3 = VAR_4 >= 0;

  if (VAR_4 == -VAR_0) {







   VAR_5->core.attr.exclude_kernel = 1;
   VAR_3 = FUNC_2(VAR_5, ((void*)0), VAR_7) >= 0;
  }
  FUNC_0(VAR_5);
 }

 FUNC_3(VAR_7);
 return VAR_3;
}
