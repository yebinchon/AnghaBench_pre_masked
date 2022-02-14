
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct result {int member_0; int member_1; char* member_2; char* member_3; char* member_4; } ;
struct machine {int dummy; } ;
struct hists {int dummy; } ;
struct evsel {int dummy; } ;
struct TYPE_2__ {int use_callchain; int cumulate_callchain; } ;


 int FUNC_0 (struct result*) ;
 int VAR_0 ;
 int FUNC_1 (struct hists*,struct machine*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hists*) ;
 int FUNC_4 (struct hists*,struct result*,int ,int *,int ) ;
 struct hists* FUNC_5 (struct evsel*) ;
 int FUNC_6 (struct evsel*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_9(struct evsel *VAR_3, struct machine *VAR_4)
{
 int VAR_5;
 struct hists *VAR_6 = FUNC_5(VAR_3);
 struct result VAR_7[] = {
  { 7000, 2000, "perf", "perf", "main" },
  { 5000, 0, "perf", "perf", "run_command" },
  { 3000, 1000, "bash", "bash", "main" },
  { 3000, 1000, "perf", "perf", "cmd_record" },
  { 2000, 0, "bash", "libc", "malloc" },
  { 1000, 1000, "bash", "[kernel]", "page_fault" },
  { 1000, 1000, "bash", "bash", "xmalloc" },
  { 1000, 1000, "perf", "[kernel]", "page_fault" },
  { 1000, 1000, "perf", "[kernel]", "schedule" },
  { 1000, 1000, "perf", "libc", "free" },
  { 1000, 1000, "perf", "libc", "malloc" },
  { 1000, 0, "perf", "[kernel]", "sys_perf_event_open" },
 };

 VAR_2.use_callchain = 0;
 VAR_2.cumulate_callchain = 1;
 FUNC_6(VAR_3, VAR_0);

 FUNC_8(((void*)0));
 FUNC_2(&VAR_1);

 VAR_5 = FUNC_1(VAR_6, VAR_4);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_4(VAR_6, VAR_7, FUNC_0(VAR_7), ((void*)0), 0);

out:
 FUNC_3(VAR_6);
 FUNC_7();
 return VAR_5;
}
