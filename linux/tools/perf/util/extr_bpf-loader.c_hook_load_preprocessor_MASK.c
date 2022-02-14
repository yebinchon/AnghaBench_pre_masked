
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_event {scalar_t__ nargs; } ;
struct perf_probe_event {int ntevs; struct probe_trace_event* tevs; } ;
struct bpf_program {int dummy; } ;
struct bpf_prog_priv {int need_prologue; int nr_types; void* type_mapping; void* insns_buf; struct perf_probe_event pev; scalar_t__ is_tp; } ;
struct bpf_insn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bpf_prog_priv*) ;
 struct bpf_prog_priv* FUNC_1 (struct bpf_program*) ;
 int FUNC_2 (struct bpf_program*,int ,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct perf_probe_event*,void*,int *) ;
 int FUNC_5 (void*,int,int) ;
 int FUNC_6 (char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct bpf_program *VAR_4)
{
 struct bpf_prog_priv *VAR_5 = FUNC_1(VAR_4);
 struct perf_probe_event *VAR_6;
 bool VAR_7 = 0;
 int VAR_8, VAR_9;

 if (FUNC_0(VAR_5) || !VAR_5) {
  FUNC_6("Internal error when hook preprocessor\n");
  return -VAR_0;
 }

 if (VAR_5->is_tp) {
  VAR_5->need_prologue = 0;
  return 0;
 }

 VAR_6 = &VAR_5->pev;
 for (VAR_9 = 0; VAR_9 < VAR_6->ntevs; VAR_9++) {
  struct probe_trace_event *VAR_10 = &VAR_6->tevs[VAR_9];

  if (VAR_10->nargs > 0) {
   VAR_7 = 1;
   break;
  }
 }





 if (!VAR_7) {
  VAR_5->need_prologue = 0;
  return 0;
 }

 VAR_5->need_prologue = 1;
 VAR_5->insns_buf = FUNC_3(sizeof(struct bpf_insn) * VAR_1);
 if (!VAR_5->insns_buf) {
  FUNC_6("Not enough memory: alloc insns_buf failed\n");
  return -VAR_2;
 }

 VAR_5->type_mapping = FUNC_3(sizeof(int) * VAR_6->ntevs);
 if (!VAR_5->type_mapping) {
  FUNC_6("Not enough memory: alloc type_mapping failed\n");
  return -VAR_2;
 }
 FUNC_5(VAR_5->type_mapping, -1,
        sizeof(int) * VAR_6->ntevs);

 VAR_8 = FUNC_4(VAR_6, VAR_5->type_mapping, &VAR_5->nr_types);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_5->nr_types,
        VAR_3);
 return VAR_8;
}
