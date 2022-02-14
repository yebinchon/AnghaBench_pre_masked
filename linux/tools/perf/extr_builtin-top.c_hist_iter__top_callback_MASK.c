
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int branch_stack; } ;
struct perf_top {TYPE_1__ record_opts; } ;
struct hist_entry_iter {TYPE_2__* sample; struct evsel* evsel; struct hist_entry* he; } ;
struct hist_entry {int dummy; } ;
struct evsel {int dummy; } ;
struct addr_location {int addr; } ;
struct TYPE_7__ {scalar_t__ sym; } ;
struct TYPE_6__ {int branch_stack; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct addr_location*,TYPE_2__*,int) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (struct perf_top*,struct hist_entry*,TYPE_2__*,struct evsel*,int ) ;

__attribute__((used)) static int FUNC_2(struct hist_entry_iter *VAR_2,
       struct addr_location *VAR_3, bool VAR_4,
       void *VAR_5)
{
 struct perf_top *VAR_6 = VAR_5;
 struct hist_entry *VAR_7 = VAR_2->he;
 struct evsel *VAR_8 = VAR_2->evsel;

 if (VAR_1.sym && VAR_4)
  FUNC_1(VAR_6, VAR_7, VAR_2->sample, VAR_8, VAR_3->addr);

 FUNC_0(VAR_2->sample->branch_stack, VAR_3, VAR_2->sample,
       !(VAR_6->record_opts.branch_stack & VAR_0));
 return 0;
}
