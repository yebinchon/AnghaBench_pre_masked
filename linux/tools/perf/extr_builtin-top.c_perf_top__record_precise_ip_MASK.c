
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct symbol {int name; } ;
struct perf_top {TYPE_2__* sym_filter_entry; } ;
struct perf_sample {int dummy; } ;
struct TYPE_8__ {TYPE_5__* map; struct symbol* sym; } ;
struct hist_entry {TYPE_4__* hists; TYPE_3__ ms; } ;
struct evsel {int dummy; } ;
struct annotation {int lock; } ;
struct TYPE_10__ {int erange_warned; } ;
struct TYPE_9__ {int lock; } ;
struct TYPE_6__ {struct symbol* sym; } ;
struct TYPE_7__ {TYPE_1__ ms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hist_entry*,struct perf_sample*,struct evsel*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 struct annotation* FUNC_6 (struct symbol*) ;
 int FUNC_7 (TYPE_5__*,struct symbol*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_9(struct perf_top *VAR_3,
     struct hist_entry *VAR_4,
     struct perf_sample *VAR_5,
     struct evsel *VAR_6, u64 VAR_7)
{
 struct annotation *VAR_8;
 struct symbol *VAR_9 = VAR_4->ms.sym;
 int VAR_10 = 0;

 if (VAR_9 == ((void*)0) || (VAR_2 == 0 &&
       (VAR_3->sym_filter_entry == ((void*)0) ||
        VAR_3->sym_filter_entry->ms.sym != VAR_9)))
  return;

 VAR_8 = FUNC_6(VAR_9);

 if (FUNC_3(&VAR_8->lock))
  return;

 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_4(&VAR_8->lock);

 if (FUNC_8(VAR_10)) {




  FUNC_4(&VAR_4->hists->lock);

  if (VAR_10 == -VAR_1 && !VAR_4->ms.map->erange_warned)
   FUNC_7(VAR_4->ms.map, VAR_9, VAR_7);
  else if (VAR_10 == -VAR_0) {
   FUNC_1("Not enough memory for annotating '%s' symbol!\n",
          VAR_9->name);
   FUNC_5(1);
  }

  FUNC_2(&VAR_4->hists->lock);
 }
}
