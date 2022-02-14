
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct report {int nonany_branch_mode; struct perf_session* session; } ;
struct perf_session {int evlist; TYPE_1__* itrace_synth_opts; int header; int data; } ;
struct TYPE_9__ {scalar_t__ mode; int record_mode; int enabled; } ;
struct TYPE_8__ {scalar_t__ parent; } ;
struct TYPE_7__ {int use_callchain; int cumulate_callchain; int show_branchflag_count; } ;
struct TYPE_6__ {scalar_t__ last_branch; int set; scalar_t__ callchain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_4__ VAR_12 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 () ;
 TYPE_3__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_2__ VAR_16 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct report *VAR_17)
{
 struct perf_session *VAR_18 = VAR_17->session;
 u64 VAR_19 = FUNC_3(VAR_18->evlist);
 bool VAR_20 = FUNC_1(VAR_18->data);

 if (VAR_18->itrace_synth_opts->callchain ||
     (!VAR_20 &&
      FUNC_4(&VAR_18->header, VAR_5) &&
      !VAR_18->itrace_synth_opts->set))
  VAR_19 |= VAR_8;

 if (VAR_18->itrace_synth_opts->last_branch)
  VAR_19 |= VAR_7;

 if (!VAR_20 && !(VAR_19 & VAR_8)) {
  if (VAR_14.parent) {
   FUNC_6("Selected --sort parent, but no "
        "callchain data. Did you call "
        "'perf record' without -g?\n");
   return -VAR_4;
  }
  if (VAR_16.use_callchain &&
   !VAR_16.show_branchflag_count) {
   FUNC_6("Selected -g or --branch-history.\n"
      "But no callchain or branch data.\n"
      "Did you call 'perf record' without -g or -b?\n");
   return -1;
  }
 } else if (!VAR_12.enabled &&
     VAR_12.mode != VAR_3 &&
     !VAR_16.use_callchain) {
   VAR_16.use_callchain = 1;
   if (FUNC_0(&VAR_12) < 0) {
    FUNC_6("Can't register callchain params.\n");
    return -VAR_4;
   }
 }

 if (VAR_16.cumulate_callchain) {

  if (!(VAR_19 & VAR_8)) {
   VAR_16.cumulate_callchain = 0;
   FUNC_5();
  }
 }

 if (VAR_15 == VAR_11) {
  if (!VAR_20 &&
      !(VAR_19 & VAR_7)) {
   FUNC_6("Selected -b but no branch data. "
      "Did you call perf record without -b?\n");
   return -1;
  }
 }

 if (VAR_16.use_callchain || VAR_16.cumulate_callchain) {
  if ((VAR_19 & VAR_9) &&
      (VAR_19 & VAR_10)) {
   VAR_12.record_mode = VAR_0;
   VAR_13 = 1;
  } else if (VAR_19 & VAR_7)
   VAR_12.record_mode = VAR_2;
  else
   VAR_12.record_mode = VAR_1;
 }


 if (!(FUNC_2(VAR_18->evlist) &
    VAR_6))
  VAR_17->nonany_branch_mode = 1;

 return 0;
}
