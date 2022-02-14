
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct record_opts {int tail_synthesize; int sample_address; int target; scalar_t__ full_auxtrace; } ;
struct perf_tool {int dummy; } ;
struct perf_data {scalar_t__ is_pipe; } ;
struct record {int bytes_written; TYPE_2__* evlist; struct perf_tool tool; int itr; struct record_opts opts; struct perf_data data; struct perf_session* session; } ;
struct machine {int dummy; } ;
struct TYPE_10__ {struct machine host; } ;
struct perf_session {TYPE_7__ machines; } ;
struct TYPE_8__ {int threads; int cpus; int entries; } ;
struct TYPE_9__ {TYPE_1__ core; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct machine*,struct perf_tool*,int *,int ,int ,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*,int ,struct perf_tool*) ;
 int FUNC_4 (struct perf_data*) ;
 int FUNC_5 (int ,struct perf_tool*,int ,struct machine*) ;
 int FUNC_6 (struct perf_tool*,TYPE_2__*,int ) ;
 int FUNC_7 (int ,struct perf_tool*,struct perf_session*,int ) ;
 int FUNC_8 (struct perf_session*,int ,struct machine*,struct record_opts*) ;
 int FUNC_9 (struct perf_tool*,int ,int ,int *) ;
 int FUNC_10 (struct perf_tool*,TYPE_2__*,int ,scalar_t__) ;
 int FUNC_11 (struct perf_tool*,struct perf_session*,TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_12 (struct perf_tool*,int ,struct machine*) ;
 int FUNC_13 (struct perf_tool*,int ,struct machine*) ;
 int FUNC_14 (struct perf_tool*,int ,int ,int *) ;
 int FUNC_15 (struct perf_tool*,int,TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int VAR_2 ;
 int FUNC_19 (struct record*) ;

__attribute__((used)) static int FUNC_20(struct record *VAR_3, bool VAR_4)
{
 struct perf_session *VAR_5 = VAR_3->session;
 struct machine *VAR_6 = &VAR_5->machines.host;
 struct perf_data *VAR_7 = &VAR_3->data;
 struct record_opts *VAR_8 = &VAR_3->opts;
 struct perf_tool *VAR_9 = &VAR_3->tool;
 int VAR_10 = FUNC_4(VAR_7);
 int VAR_11 = 0;

 if (VAR_3->opts.tail_synthesize != VAR_4)
  return 0;

 if (VAR_7->is_pipe) {




  VAR_11 = FUNC_6(VAR_9, VAR_3->evlist,
         VAR_2);
  if (VAR_11 < 0) {
   FUNC_17("Couldn't synthesize attrs.\n");
   goto out;
  }

  VAR_11 = FUNC_11(VAR_9, VAR_5, VAR_3->evlist,
            VAR_2);
  if (VAR_11 < 0) {
   FUNC_17("Couldn't synthesize features.\n");
   return VAR_11;
  }

  if (FUNC_2(&VAR_3->evlist->core.entries)) {
   VAR_11 = FUNC_15(VAR_9, VAR_10, VAR_3->evlist,
          VAR_2);
   if (VAR_11 <= 0) {
    FUNC_17("Couldn't record tracing data.\n");
    goto out;
   }
   VAR_3->bytes_written += VAR_11;
  }
 }

 VAR_11 = FUNC_5(FUNC_19(VAR_3), VAR_9,
       VAR_2, VAR_6);
 if (VAR_11)
  goto out;

 if (VAR_3->opts.full_auxtrace) {
  VAR_11 = FUNC_7(VAR_3->itr, VAR_9,
     VAR_5, VAR_2);
  if (VAR_11)
   goto out;
 }

 if (!FUNC_16(VAR_3->evlist)) {
  VAR_11 = FUNC_12(VAR_9, VAR_2,
        VAR_6);
  FUNC_0(VAR_11 < 0, "Couldn't record kernel reference relocation symbol\n"
       "Symbol resolution may be skewed if relocation was used (e.g. kexec).\n"
       "Check /proc/kallsyms permission or run as root.\n");

  VAR_11 = FUNC_13(VAR_9, VAR_2,
           VAR_6);
  FUNC_0(VAR_11 < 0, "Couldn't record kernel module information.\n"
       "Symbol resolution may be skewed if relocation was used (e.g. kexec).\n"
       "Check /proc/modules permission or run as root.\n");
 }

 if (VAR_1) {
  FUNC_3(&VAR_5->machines,
      VAR_0, VAR_9);
 }

 VAR_11 = FUNC_10(&VAR_3->tool,
      VAR_3->evlist,
      VAR_2,
      VAR_7->is_pipe);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_14(&VAR_3->tool, VAR_3->evlist->core.threads,
       VAR_2,
      ((void*)0));
 if (VAR_11 < 0) {
  FUNC_17("Couldn't synthesize thread map.\n");
  return VAR_11;
 }

 VAR_11 = FUNC_9(&VAR_3->tool, VAR_3->evlist->core.cpus,
          VAR_2, ((void*)0));
 if (VAR_11 < 0) {
  FUNC_17("Couldn't synthesize cpu map.\n");
  return VAR_11;
 }

 VAR_11 = FUNC_8(VAR_5, VAR_2,
      VAR_6, VAR_8);
 if (VAR_11 < 0)
  FUNC_18("Couldn't synthesize bpf events.\n");

 VAR_11 = FUNC_1(VAR_6, VAR_9, &VAR_8->target, VAR_3->evlist->core.threads,
         VAR_2, VAR_8->sample_address,
         1);
out:
 return VAR_11;
}
