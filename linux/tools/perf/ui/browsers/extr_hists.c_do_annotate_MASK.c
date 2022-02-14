
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sym; } ;
struct popup_action {TYPE_1__ ms; } ;
struct hist_entry {scalar_t__ branch_info; } ;
struct hist_browser {int b; TYPE_3__* hists; TYPE_2__* annotation_opts; int hbt; int env; } ;
struct evsel {int dummy; } ;
struct annotation {int src; } ;
struct TYPE_6__ {int nr_entries; } ;
struct TYPE_5__ {int objdump_path; } ;


 int FUNC_0 (char) ;
 struct hist_entry* FUNC_1 (struct hist_browser*) ;
 struct evsel* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,struct evsel*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 struct annotation* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int
FUNC_8(struct hist_browser *VAR_0, struct popup_action *VAR_1)
{
 struct evsel *VAR_2;
 struct annotation *VAR_3;
 struct hist_entry *VAR_4;
 int VAR_5;

 if (!VAR_0->annotation_opts->objdump_path &&
     FUNC_4(VAR_0->env, &VAR_0->annotation_opts->objdump_path))
  return 0;

 VAR_3 = FUNC_5(VAR_1->ms.sym);
 if (!VAR_3->src)
  return 0;

 VAR_2 = FUNC_2(VAR_0->hists);
 VAR_5 = FUNC_3(&VAR_1->ms, VAR_2, VAR_0->hbt,
           VAR_0->annotation_opts);
 VAR_4 = FUNC_1(VAR_0);




 if ((VAR_5 == 'q' || VAR_5 == FUNC_0('c')) && VAR_4->branch_info)
  return 1;

 FUNC_7(&VAR_0->b, VAR_0->hists->nr_entries);
 if (VAR_5)
  FUNC_6(&VAR_0->b);
 return 0;
}
