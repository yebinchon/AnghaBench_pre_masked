
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_sample {int period; int weight; } ;
struct hists {int dummy; } ;
struct hist_entry_iter {int curr; struct hist_entry* he; int parent; scalar_t__ hide_unresolved; struct branch_info* priv; struct perf_sample* sample; struct evsel* evsel; } ;
struct hist_entry {int filtered; } ;
struct evsel {int dummy; } ;
struct TYPE_6__ {int cycles; } ;
struct TYPE_5__ {scalar_t__ sym; } ;
struct TYPE_4__ {scalar_t__ sym; } ;
struct branch_info {TYPE_3__ flags; TYPE_2__ to; TYPE_1__ from; } ;
struct addr_location {int dummy; } ;


 int VAR_0 ;
 struct hists* FUNC_0 (struct evsel*) ;
 struct hist_entry* FUNC_1 (struct hists*,struct addr_location*,int ,struct branch_info*,int *,struct perf_sample*,int) ;
 int FUNC_2 (struct hists*,int ) ;

__attribute__((used)) static int
FUNC_3(struct hist_entry_iter *VAR_1, struct addr_location *VAR_2)
{
 struct branch_info *VAR_3;
 struct evsel *VAR_4 = VAR_1->evsel;
 struct hists *VAR_5 = FUNC_0(VAR_4);
 struct perf_sample *VAR_6 = VAR_1->sample;
 struct hist_entry *VAR_7 = ((void*)0);
 int VAR_8 = VAR_1->curr;
 int VAR_9 = 0;

 VAR_3 = VAR_1->priv;

 if (VAR_1->hide_unresolved && !(VAR_3[VAR_8].from.sym && VAR_3[VAR_8].to.sym))
  goto out;





 VAR_6->period = 1;
 VAR_6->weight = VAR_3->flags.cycles ? VAR_3->flags.cycles : 1;

 VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_1->parent, &VAR_3[VAR_8], ((void*)0),
         VAR_6, 1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_5, VAR_7->filtered);

out:
 VAR_1->he = VAR_7;
 VAR_1->curr++;
 return VAR_9;
}
