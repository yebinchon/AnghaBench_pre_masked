
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int annotate2; } ;
struct report {scalar_t__ symbol_ipc; } ;
struct TYPE_2__ {int map; struct symbol* sym; } ;
struct hist_entry {TYPE_1__ ms; int hists; } ;
struct evsel {int dummy; } ;


 int VAR_0 ;
 struct evsel* FUNC_0 (int ) ;
 int FUNC_1 (struct symbol*,int ,struct evsel*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct hist_entry *VAR_1, void *VAR_2)
{
 struct report *VAR_3 = VAR_2;
 struct symbol *VAR_4 = VAR_1->ms.sym;

 if (VAR_3->symbol_ipc && VAR_4 && !VAR_4->annotate2) {
  struct evsel *VAR_5 = FUNC_0(VAR_1->hists);

  FUNC_1(VAR_4, VAR_1->ms.map, VAR_5,
      &VAR_0, ((void*)0));
 }

 return 0;
}
