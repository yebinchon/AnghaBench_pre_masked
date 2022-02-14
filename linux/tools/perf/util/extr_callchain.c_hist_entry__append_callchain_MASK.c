
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_sample {int period; int * callchain; } ;
struct hist_entry {int callchain; } ;
struct TYPE_2__ {int show_branchflag_count; int use_callchain; } ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

int FUNC_1(struct hist_entry *VAR_2, struct perf_sample *VAR_3)
{
 if ((!VAR_1.use_callchain || VAR_3->callchain == ((void*)0)) &&
  !VAR_1.show_branchflag_count)
  return 0;
 return FUNC_0(VAR_2->callchain, &VAR_0, VAR_3->period);
}
