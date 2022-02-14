
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union perf_event {TYPE_1__ header; } ;
struct perf_tool {int dummy; } ;
struct perf_session {int machines; struct perf_tool* tool; struct evlist* evlist; } ;
struct perf_sample {int dummy; } ;
struct evlist {int stats; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct evlist*,union perf_event*,struct perf_sample*,struct perf_tool*,int ) ;
 int FUNC_2 (struct perf_session*,union perf_event*,int ) ;

int FUNC_3(struct perf_session *VAR_1,
          union perf_event *VAR_2,
          struct perf_sample *VAR_3)
{
 struct evlist *VAR_4 = VAR_1->evlist;
 struct perf_tool *VAR_5 = VAR_1->tool;

 FUNC_0(&VAR_4->stats, VAR_2->header.type);

 if (VAR_2->header.type >= VAR_0)
  return FUNC_2(VAR_1, VAR_2, 0);

 return FUNC_1(&VAR_1->machines, VAR_4, VAR_2, VAR_3, VAR_5, 0);
}
