
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_event {int nargs; int args; } ;
struct perf_probe_event {int ntevs; struct probe_trace_event* tevs; } ;
struct bpf_program {int dummy; } ;
struct bpf_prog_priv {int nr_types; int* type_mapping; struct bpf_insn* insns_buf; struct perf_probe_event pev; scalar_t__ is_tp; } ;
struct bpf_prog_prep_result {size_t new_insn_cnt; int * pfd; struct bpf_insn* new_insn_ptr; } ;
struct bpf_insn {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bpf_prog_priv*) ;
 int FUNC_1 (int ,int ,struct bpf_insn*,size_t*,scalar_t__) ;
 struct bpf_prog_priv* FUNC_2 (struct bpf_program*) ;
 char* FUNC_3 (struct bpf_program*,int) ;
 int FUNC_4 (struct bpf_insn*,struct bpf_insn*,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(struct bpf_program *VAR_2, int VAR_3,
       struct bpf_insn *VAR_4, int VAR_5,
       struct bpf_prog_prep_result *VAR_6)
{
 struct bpf_prog_priv *VAR_7 = FUNC_2(VAR_2);
 struct probe_trace_event *VAR_8;
 struct perf_probe_event *VAR_9;
 struct bpf_insn *VAR_10;
 size_t VAR_11 = 0;
 int VAR_12, VAR_13;

 if (FUNC_0(VAR_7) || !VAR_7 || VAR_7->is_tp)
  goto errout;

 VAR_9 = &VAR_7->pev;

 if (VAR_3 < 0 || VAR_3 >= VAR_7->nr_types)
  goto errout;


 for (VAR_12 = 0; VAR_12 < VAR_9->ntevs; VAR_12++) {
  if (VAR_7->type_mapping[VAR_12] == VAR_3)
   break;
 }

 if (VAR_12 >= VAR_9->ntevs) {
  FUNC_5("Internal error: prologue type %d not found\n", VAR_3);
  return -VAR_0;
 }

 VAR_8 = &VAR_9->tevs[VAR_12];

 VAR_10 = VAR_7->insns_buf;
 VAR_13 = FUNC_1(VAR_8->args, VAR_8->nargs,
    VAR_10, &VAR_11,
    VAR_1 - VAR_5);
 if (VAR_13) {
  const char *VAR_14;

  VAR_14 = FUNC_3(VAR_2, 0);
  if (!VAR_14)
   VAR_14 = "[unknown]";

  FUNC_5("Failed to generate prologue for program %s\n",
    VAR_14);
  return VAR_13;
 }

 FUNC_4(&VAR_10[VAR_11], VAR_4,
        sizeof(struct bpf_insn) * VAR_5);

 VAR_6->new_insn_ptr = VAR_10;
 VAR_6->new_insn_cnt = VAR_11 + VAR_5;
 VAR_6->pfd = ((void*)0);
 return 0;

errout:
 FUNC_5("Internal error in preproc_gen_prologue\n");
 return -VAR_0;
}
