
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
typedef int u64 ;
struct perf_tool {int dummy; } ;
struct perf_session {int evlist; int machines; } ;
struct perf_sample {int dummy; } ;


 int FUNC_0 (struct perf_session*,union perf_event*,struct perf_sample*,struct perf_tool*) ;
 int FUNC_1 (int *,int ,union perf_event*,struct perf_sample*,struct perf_tool*,int ) ;
 int FUNC_2 (int ,union perf_event*,struct perf_sample*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct perf_session *VAR_0,
           union perf_event *VAR_1,
           struct perf_tool *VAR_2,
           u64 VAR_3)
{
 struct perf_sample VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0->evlist, VAR_1, &VAR_4);
 if (VAR_5) {
  FUNC_3("Can't parse sample, err = %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_5 > 0)
  return 0;

 return FUNC_1(&VAR_0->machines, VAR_0->evlist,
           VAR_1, &VAR_4, VAR_2, VAR_3);
}
