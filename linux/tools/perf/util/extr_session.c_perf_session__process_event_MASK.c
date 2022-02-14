
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
union perf_event {TYPE_2__ header; } ;
typedef unsigned long long u64 ;
struct perf_tool {scalar_t__ ordered_events; } ;
struct TYPE_3__ {scalar_t__ needs_swap; } ;
struct perf_session {TYPE_1__ header; struct perf_tool* tool; struct evlist* evlist; } ;
struct evlist {int stats; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union perf_event*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct evlist*,union perf_event*,unsigned long long*) ;
 int FUNC_3 (struct evlist*) ;
 int FUNC_4 (struct perf_session*,union perf_event*,struct perf_tool*,unsigned long long) ;
 int FUNC_5 (struct perf_session*,union perf_event*,unsigned long long) ;
 int FUNC_6 (struct perf_session*,union perf_event*,unsigned long long,unsigned long long) ;

__attribute__((used)) static s64 FUNC_7(struct perf_session *VAR_4,
           union perf_event *VAR_5, u64 VAR_6)
{
 struct evlist *VAR_7 = VAR_4->evlist;
 struct perf_tool *VAR_8 = VAR_4->tool;
 int VAR_9;

 if (VAR_4->header.needs_swap)
  FUNC_0(VAR_5, FUNC_3(VAR_7));

 if (VAR_5->header.type >= VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_7->stats, VAR_5->header.type);

 if (VAR_5->header.type >= VAR_3)
  return FUNC_5(VAR_4, VAR_5, VAR_6);

 if (VAR_8->ordered_events) {
  u64 VAR_10 = -1ULL;

  VAR_9 = FUNC_2(VAR_7, VAR_5, &VAR_10);
  if (VAR_9 && VAR_9 != -1)
   return VAR_9;

  VAR_9 = FUNC_6(VAR_4, VAR_5, VAR_10, VAR_6);
  if (VAR_9 != -VAR_1)
   return VAR_9;
 }

 return FUNC_4(VAR_4, VAR_5, VAR_8, VAR_6);
}
