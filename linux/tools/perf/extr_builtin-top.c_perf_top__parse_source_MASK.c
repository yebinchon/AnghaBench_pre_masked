
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct symbol {int name; } ;
struct perf_top {struct hist_entry* sym_filter_entry; int annotation_opts; TYPE_3__* evlist; } ;
struct map {TYPE_4__* dso; } ;
struct TYPE_5__ {struct map* map; struct symbol* sym; } ;
struct hist_entry {TYPE_1__ ms; int hists; } ;
struct evsel {int dummy; } ;
struct annotation {int lock; } ;
typedef int msg ;
struct TYPE_8__ {scalar_t__ symtab_type; } ;
struct TYPE_6__ {int nr_entries; } ;
struct TYPE_7__ {TYPE_2__ core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 struct evsel* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct symbol*,struct map*,struct evsel*,int ,int *,int *) ;
 struct annotation* FUNC_7 (struct symbol*) ;
 int FUNC_8 (struct symbol*,int ) ;
 int FUNC_9 (struct symbol*,struct map*,int,char*,int) ;

__attribute__((used)) static int FUNC_10(struct perf_top *VAR_2, struct hist_entry *VAR_3)
{
 struct evsel *VAR_4;
 struct symbol *VAR_5;
 struct annotation *VAR_6;
 struct map *VAR_7;
 int VAR_8 = -1;

 if (!VAR_3 || !VAR_3->ms.sym)
  return -1;

 VAR_4 = FUNC_1(VAR_3->hists);

 VAR_5 = VAR_3->ms.sym;
 VAR_7 = VAR_3->ms.map;




 if (VAR_7->dso->symtab_type == VAR_1 &&
     !FUNC_0(VAR_7->dso)) {
  FUNC_2("Can't annotate %s: No vmlinux file was found in the "
         "path\n", VAR_5->name);
  FUNC_5(1);
  return -1;
 }

 VAR_6 = FUNC_7(VAR_5);
 FUNC_3(&VAR_6->lock);

 if (!FUNC_8(VAR_5, VAR_2->evlist->core.nr_entries)) {
  FUNC_4(&VAR_6->lock);
  FUNC_2("Not enough memory for annotating '%s' symbol!\n",
         VAR_5->name);
  FUNC_5(1);
  return VAR_8;
 }

 VAR_8 = FUNC_6(VAR_5, VAR_7, VAR_4, 0, &VAR_2->annotation_opts, ((void*)0));
 if (VAR_8 == 0) {
  VAR_2->sym_filter_entry = VAR_3;
 } else {
  char VAR_9[VAR_0];
  FUNC_9(VAR_5, VAR_7, VAR_8, VAR_9, sizeof(VAR_9));
  FUNC_2("Couldn't annotate %s: %s\n", VAR_5->name, VAR_9);
 }

 FUNC_4(&VAR_6->lock);
 return VAR_8;
}
