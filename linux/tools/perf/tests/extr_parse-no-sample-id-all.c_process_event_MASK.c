
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
union perf_event {TYPE_1__ header; } ;
struct perf_sample {int dummy; } ;
struct evlist {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,union perf_event*,struct evlist**) ;
 scalar_t__ FUNC_1 (struct evlist*,union perf_event*,struct perf_sample*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct evlist **VAR_2, union perf_event *VAR_3)
{
 struct perf_sample VAR_4;

 if (VAR_3->header.type == VAR_0) {
  if (FUNC_0(((void*)0), VAR_3, VAR_2)) {
   FUNC_2("perf_event__process_attr failed\n");
   return -1;
  }
  return 0;
 }

 if (VAR_3->header.type >= VAR_1)
  return -1;

 if (!*VAR_2)
  return -1;

 if (FUNC_1(*VAR_2, VAR_3, &VAR_4)) {
  FUNC_2("perf_evlist__parse_sample failed\n");
  return -1;
 }

 return 0;
}
