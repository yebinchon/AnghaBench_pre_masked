
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct symbol {char* name; } ;
struct TYPE_9__ {int min_pcnt; } ;
struct perf_top {TYPE_3__* sym_evsel; scalar_t__ zero; TYPE_2__* evlist; TYPE_4__ annotation_opts; struct hist_entry* sym_filter_entry; } ;
struct TYPE_6__ {int map; struct symbol* sym; } ;
struct hist_entry {TYPE_1__ ms; int hists; } ;
struct evsel {int dummy; } ;
struct annotation {int lock; int * src; } ;
struct TYPE_8__ {int idx; } ;
struct TYPE_7__ {scalar_t__ enabled; } ;


 struct evsel* FUNC_0 (int ) ;
 char* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct symbol*,int ) ;
 int FUNC_6 (struct symbol*,int ,TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (struct symbol*,int ) ;
 struct annotation* FUNC_8 (struct symbol*) ;
 int FUNC_9 (struct symbol*,struct evsel*) ;

__attribute__((used)) static void FUNC_10(struct perf_top *VAR_0)
{
 struct hist_entry *VAR_1 = VAR_0->sym_filter_entry;
 struct evsel *VAR_2;
 struct annotation *VAR_3;
 struct symbol *VAR_4;
 int VAR_5;

 if (!VAR_1)
  return;

 VAR_2 = FUNC_0(VAR_1->hists);

 VAR_4 = VAR_1->ms.sym;
 VAR_3 = FUNC_8(VAR_4);

 FUNC_3(&VAR_3->lock);

 FUNC_9(VAR_4, VAR_2);

 if (VAR_3->src == ((void*)0))
  goto out_unlock;

 FUNC_2("Showing %s for %s\n", FUNC_1(VAR_0->sym_evsel), VAR_4->name);
 FUNC_2("  Events  Pcnt (>=%d%%)\n", VAR_0->annotation_opts.min_pcnt);

 VAR_5 = FUNC_6(VAR_4, VAR_1->ms.map, VAR_0->sym_evsel, &VAR_0->annotation_opts);

 if (VAR_0->evlist->enabled) {
  if (VAR_0->zero)
   FUNC_7(VAR_4, VAR_0->sym_evsel->idx);
  else
   FUNC_5(VAR_4, VAR_0->sym_evsel->idx);
 }
 if (VAR_5 != 0)
  FUNC_2("%d lines not displayed, maybe increase display entries [e]\n", VAR_5);
out_unlock:
 FUNC_4(&VAR_3->lock);
}
