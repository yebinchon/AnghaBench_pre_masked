
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int title ;
struct map_symbol {int map; int sym; } ;
struct hist_browser_timer {int dummy; } ;
struct evsel {TYPE_2__* evlist; } ;
struct TYPE_12__ {TYPE_6__* sym; } ;
struct TYPE_13__ {TYPE_3__ target; } ;
struct disasm_line {TYPE_4__ ops; } ;
struct annotation {int lock; } ;
struct TYPE_14__ {struct map_symbol* priv; } ;
struct annotate_browser {TYPE_5__ b; TYPE_7__* opts; int selection; } ;
struct TYPE_16__ {int percent_type; } ;
struct TYPE_15__ {int name; } ;
struct TYPE_10__ {int nr_entries; } ;
struct TYPE_11__ {TYPE_1__ core; } ;


 int VAR_0 ;
 struct disasm_line* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,char*,int,int ) ;
 struct annotation* FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ,struct evsel*,struct hist_browser_timer*,TYPE_7__*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_5__*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static bool FUNC_10(struct annotate_browser *VAR_1,
        struct evsel *VAR_2,
        struct hist_browser_timer *VAR_3)
{
 struct map_symbol *VAR_4 = VAR_1->b.priv;
 struct disasm_line *VAR_5 = FUNC_0(VAR_1->selection);
 struct annotation *VAR_6;
 char VAR_7[VAR_0];

 if (!VAR_5->ops.target.sym) {
  FUNC_9("The called function was not found.");
  return 1;
 }

 VAR_6 = FUNC_4(VAR_5->ops.target.sym);
 FUNC_1(&VAR_6->lock);

 if (!FUNC_5(VAR_5->ops.target.sym, VAR_2->evlist->core.nr_entries)) {
  FUNC_2(&VAR_6->lock);
  FUNC_7("Not enough memory for annotating '%s' symbol!\n",
       VAR_5->ops.target.sym->name);
  return 1;
 }

 FUNC_2(&VAR_6->lock);
 FUNC_6(VAR_5->ops.target.sym, VAR_4->map, VAR_2, VAR_3, VAR_1->opts);
 FUNC_3(VAR_4->sym, VAR_4->map, VAR_7, sizeof(VAR_7), VAR_1->opts->percent_type);
 FUNC_8(&VAR_1->b, VAR_7);
 return 1;
}
