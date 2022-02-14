
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace {int max_stack; int host; } ;
struct perf_sample {int dummy; } ;
struct TYPE_3__ {int sample_max_stack; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct callchain_cursor {int dummy; } ;
struct addr_location {int thread; } ;


 int FUNC_0 (struct addr_location*) ;
 scalar_t__ FUNC_1 (int ,struct addr_location*,struct perf_sample*) ;
 int FUNC_2 (int ,struct callchain_cursor*,struct evsel*,struct perf_sample*,int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct trace *VAR_0, struct evsel *VAR_1,
        struct perf_sample *VAR_2,
        struct callchain_cursor *VAR_3)
{
 struct addr_location VAR_4;
 int VAR_5 = VAR_1->core.attr.sample_max_stack ?
   VAR_1->core.attr.sample_max_stack :
   VAR_0->max_stack;
 int VAR_6;

 if (FUNC_1(VAR_0->host, &VAR_4, VAR_2) < 0)
  return -1;

 VAR_6 = FUNC_2(VAR_4.thread, VAR_3, VAR_1, VAR_2, ((void*)0), ((void*)0), VAR_5);
 FUNC_0(&VAR_4);
 return VAR_6;
}
