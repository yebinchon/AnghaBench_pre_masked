
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_progress {int dummy; } ;
struct evsel {int dummy; } ;
typedef int hists__resort_cb_t ;
struct TYPE_2__ {int use_callchain; int show_branchflag_count; int show_ref_callgraph; } ;


 int FUNC_0 (struct evsel*) ;
 int FUNC_1 (struct evsel*) ;
 int FUNC_2 (int ,struct ui_progress*,int,int ,void*) ;
 TYPE_1__ VAR_0 ;

void FUNC_3(struct evsel *VAR_1, struct ui_progress *VAR_2,
      hists__resort_cb_t VAR_3, void *VAR_4)
{
 bool VAR_5;

 if (VAR_1 && VAR_0.use_callchain && !VAR_0.show_ref_callgraph)
  VAR_5 = FUNC_0(VAR_1);
 else
  VAR_5 = VAR_0.use_callchain;

 VAR_5 |= VAR_0.show_branchflag_count;

 FUNC_2(FUNC_1(VAR_1), VAR_2, VAR_5, VAR_3, VAR_4);
}
