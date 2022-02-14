
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hist_entry {TYPE_1__* hists; int filtered; } ;
struct TYPE_4__ {int use_callchain; } ;
struct TYPE_3__ {int callchain_non_filtered_period; int callchain_period; } ;


 int FUNC_0 (struct hist_entry*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct hist_entry *VAR_1, u64 VAR_2)
{
 if (!FUNC_0(VAR_1) || !VAR_0.use_callchain)
  return;

 VAR_1->hists->callchain_period += VAR_2;
 if (!VAR_1->filtered)
  VAR_1->hists->callchain_non_filtered_period += VAR_2;
}
