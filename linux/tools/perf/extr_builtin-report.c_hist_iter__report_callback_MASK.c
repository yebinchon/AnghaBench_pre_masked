
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct report {scalar_t__ mem_mode; int symbol_ipc; } ;
struct perf_sample {int dummy; } ;
struct mem_info {int daddr; } ;
struct hist_entry_iter {struct perf_sample* sample; struct evsel* evsel; struct hist_entry* he; } ;
struct hist_entry {struct mem_info* mem_info; struct branch_info* branch_info; } ;
struct evsel {int dummy; } ;
struct branch_info {int to; int from; } ;
struct addr_location {int addr; } ;
struct TYPE_2__ {scalar_t__ cumulate_callchain; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct perf_sample*,struct evsel*) ;
 int FUNC_1 (struct hist_entry*,struct perf_sample*,struct evsel*,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct hist_entry_iter *VAR_3,
          struct addr_location *VAR_4, bool VAR_5,
          void *VAR_6)
{
 int VAR_7 = 0;
 struct report *VAR_8 = VAR_6;
 struct hist_entry *VAR_9 = VAR_3->he;
 struct evsel *VAR_10 = VAR_3->evsel;
 struct perf_sample *VAR_11 = VAR_3->sample;
 struct mem_info *VAR_12;
 struct branch_info *VAR_13;

 if (!FUNC_2() && !VAR_8->symbol_ipc)
  return 0;

 if (VAR_1 == VAR_0) {
  VAR_13 = VAR_9->branch_info;
  VAR_7 = FUNC_0(&VAR_13->from, VAR_11, VAR_10);
  if (VAR_7)
   goto out;

  VAR_7 = FUNC_0(&VAR_13->to, VAR_11, VAR_10);

 } else if (VAR_8->mem_mode) {
  VAR_12 = VAR_9->mem_info;
  VAR_7 = FUNC_0(&VAR_12->daddr, VAR_11, VAR_10);
  if (VAR_7)
   goto out;

  VAR_7 = FUNC_1(VAR_9, VAR_11, VAR_10, VAR_4->addr);

 } else if (VAR_2.cumulate_callchain) {
  if (VAR_5)
   VAR_7 = FUNC_1(VAR_9, VAR_11, VAR_10, VAR_4->addr);
 } else {
  VAR_7 = FUNC_1(VAR_9, VAR_11, VAR_10, VAR_4->addr);
 }

out:
 return VAR_7;
}
