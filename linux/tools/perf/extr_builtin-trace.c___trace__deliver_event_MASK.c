
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct trace {int output; struct evlist* evlist; } ;
struct perf_sample {int dummy; } ;
struct evlist {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct evlist*,union perf_event*,struct perf_sample*) ;
 int FUNC_2 (struct trace*,union perf_event*,struct perf_sample*) ;

__attribute__((used)) static int FUNC_3(struct trace *VAR_0, union perf_event *VAR_1)
{
 struct evlist *VAR_2 = VAR_0->evlist;
 struct perf_sample VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1, &VAR_3);
 if (VAR_4)
  FUNC_0(VAR_0->output, "Can't parse sample, err = %d, skipping...\n", VAR_4);
 else
  FUNC_2(VAR_0, VAR_1, &VAR_3);

 return 0;
}
