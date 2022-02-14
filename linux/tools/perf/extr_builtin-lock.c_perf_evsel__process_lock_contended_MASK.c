
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_sample {int dummy; } ;
struct evsel {int dummy; } ;
struct TYPE_2__ {int (* contended_event ) (struct evsel*,struct perf_sample*) ;} ;


 int FUNC_0 (struct evsel*,struct perf_sample*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct evsel *VAR_1,
           struct perf_sample *VAR_2)
{
 if (VAR_0->contended_event)
  return VAR_0->contended_event(VAR_1, VAR_2);
 return 0;
}
