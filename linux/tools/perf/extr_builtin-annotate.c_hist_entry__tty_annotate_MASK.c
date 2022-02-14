
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_annotate {int opts; int use_stdio2; } ;
struct TYPE_2__ {int map; int sym; } ;
struct hist_entry {TYPE_1__ ms; } ;
struct evsel {int dummy; } ;


 int FUNC_0 (int ,int ,struct evsel*,int *) ;
 int FUNC_1 (int ,int ,struct evsel*,int *) ;

__attribute__((used)) static int FUNC_2(struct hist_entry *VAR_0,
        struct evsel *VAR_1,
        struct perf_annotate *VAR_2)
{
 if (!VAR_2->use_stdio2)
  return FUNC_0(VAR_0->ms.sym, VAR_0->ms.map, VAR_1, &VAR_2->opts);

 return FUNC_1(VAR_0->ms.sym, VAR_0->ms.map, VAR_1, &VAR_2->opts);
}
