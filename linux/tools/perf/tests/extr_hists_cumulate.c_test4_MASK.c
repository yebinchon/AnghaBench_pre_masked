
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct result {int member_0; int member_1; char* member_2; char* member_3; char* member_4; } ;
struct machine {int dummy; } ;
struct hists {int dummy; } ;
struct evsel {int dummy; } ;
struct callchain_result {int member_0; int member_1; char* member_2; char* member_3; char* member_4; } ;
struct TYPE_14__ {int use_callchain; int cumulate_callchain; } ;
struct TYPE_13__ {char* member_0; char* member_1; } ;
struct TYPE_12__ {char* member_0; char* member_1; } ;
struct TYPE_11__ {char* member_0; char* member_1; } ;
struct TYPE_10__ {char* member_0; char* member_1; } ;
struct TYPE_9__ {char* member_0; char* member_1; } ;
struct TYPE_8__ {char* member_0; char* member_1; } ;


 int FUNC_0 (struct result*) ;
 int VAR_0 ;
 int FUNC_1 (struct hists*,struct machine*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hists*) ;
 int FUNC_4 (struct hists*,struct result*,int ,struct result*,int ) ;
 struct hists* FUNC_5 (struct evsel*) ;
 int FUNC_6 (struct evsel*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 TYPE_7__ VAR_3 ;

__attribute__((used)) static int FUNC_9(struct evsel *VAR_4, struct machine *VAR_5)
{
 int VAR_6;
 struct hists *VAR_7 = FUNC_5(VAR_4);
 struct result VAR_8[] = {
  { 7000, 2000, "perf", "perf", "main" },
  { 5000, 0, "perf", "perf", "run_command" },
  { 3000, 1000, "bash", "bash", "main" },
  { 3000, 1000, "perf", "perf", "cmd_record" },
  { 2000, 0, "bash", "libc", "malloc" },
  { 1000, 1000, "bash", "[kernel]", "page_fault" },
  { 1000, 1000, "bash", "bash", "xmalloc" },
  { 1000, 0, "perf", "[kernel]", "sys_perf_event_open" },
  { 1000, 1000, "perf", "[kernel]", "page_fault" },
  { 1000, 1000, "perf", "[kernel]", "schedule" },
  { 1000, 1000, "perf", "libc", "free" },
  { 1000, 1000, "perf", "libc", "malloc" },
 };
 struct callchain_result VAR_9[] = {
  {
   1, { { "perf", "main" }, },
  },
  {
   2, { { "perf", "run_command" },
    { "perf", "main" }, },
  },
  {
   1, { { "bash", "main" }, },
  },
  {
   3, { { "perf", "cmd_record" },
    { "perf", "run_command" },
    { "perf", "main" }, },
  },
  {
   4, { { "libc", "malloc" },
    { "bash", "xmalloc" },
    { "bash", "main" },
    { "bash", "main" }, },
  },
  {
   3, { { "[kernel]", "page_fault" },
    { "libc", "malloc" },
    { "bash", "main" }, },
  },
  {
   6, { { "bash", "xmalloc" },
    { "libc", "malloc" },
    { "bash", "xmalloc" },
    { "libc", "malloc" },
    { "bash", "xmalloc" },
    { "bash", "main" }, },
  },
  {
   3, { { "[kernel]", "sys_perf_event_open" },
    { "perf", "run_command" },
    { "perf", "main" }, },
  },
  {
   4, { { "[kernel]", "page_fault" },
    { "[kernel]", "sys_perf_event_open" },
    { "perf", "run_command" },
    { "perf", "main" }, },
  },
  {
   3, { { "[kernel]", "schedule" },
    { "perf", "run_command" },
    { "perf", "main" }, },
  },
  {
   4, { { "libc", "free" },
    { "perf", "cmd_record" },
    { "perf", "run_command" },
    { "perf", "main" }, },
  },
  {
   4, { { "libc", "malloc" },
    { "perf", "cmd_record" },
    { "perf", "run_command" },
    { "perf", "main" }, },
  },
 };

 VAR_3.use_callchain = 1;
 VAR_3.cumulate_callchain = 1;
 FUNC_6(VAR_4, VAR_0);

 FUNC_8(((void*)0));

 VAR_1 = VAR_2;
 FUNC_2(&VAR_1);

 VAR_6 = FUNC_1(VAR_7, VAR_5);
 if (VAR_6 < 0)
  goto out;

 VAR_6 = FUNC_4(VAR_7, VAR_8, FUNC_0(VAR_8),
        VAR_9, FUNC_0(VAR_9));

out:
 FUNC_3(VAR_7);
 FUNC_7();
 return VAR_6;
}
