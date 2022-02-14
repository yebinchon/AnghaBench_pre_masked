
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct perf_sample {int * callchain; } ;
struct evsel {int dummy; } ;
struct callchain_cursor {int dummy; } ;
struct addr_location {int thread; } ;
struct TYPE_4__ {scalar_t__ parent; } ;
struct TYPE_3__ {scalar_t__ show_branchflag_count; scalar_t__ cumulate_callchain; scalar_t__ use_callchain; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,struct callchain_cursor*,struct evsel*,struct perf_sample*,struct symbol**,struct addr_location*,int) ;

int FUNC_1(struct perf_sample *VAR_2,
         struct callchain_cursor *VAR_3, struct symbol **VAR_4,
         struct evsel *VAR_5, struct addr_location *VAR_6,
         int VAR_7)
{
 if (VAR_2->callchain == ((void*)0) && !VAR_1.show_branchflag_count)
  return 0;

 if (VAR_1.use_callchain || VAR_1.cumulate_callchain ||
     VAR_0.parent || VAR_1.show_branchflag_count) {
  return FUNC_0(VAR_6->thread, VAR_3, VAR_5, VAR_2,
       VAR_4, VAR_6, VAR_7);
 }
 return 0;
}
