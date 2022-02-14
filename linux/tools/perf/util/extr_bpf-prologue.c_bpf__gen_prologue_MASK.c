
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_arg_ref {struct probe_trace_arg_ref* next; int offset; } ;
struct probe_trace_arg {char* value; struct probe_trace_arg_ref* ref; } ;
struct bpf_insn_pos {struct bpf_insn* pos; struct bpf_insn* end; struct bpf_insn* begin; } ;
struct bpf_insn {int dummy; } ;


 int FUNC_0 (int ,scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct bpf_insn_pos*) ;
 int FUNC_4 (struct bpf_insn_pos*,struct probe_trace_arg*,int) ;
 int FUNC_5 (struct bpf_insn_pos*,struct probe_trace_arg*,int) ;
 int FUNC_6 (int ,struct bpf_insn_pos*) ;
 size_t FUNC_7 (struct bpf_insn_pos*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,...) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (struct bpf_insn_pos*,struct bpf_insn*,struct bpf_insn*,struct bpf_insn*) ;

int FUNC_12(struct probe_trace_arg *VAR_15, int VAR_16,
        struct bpf_insn *VAR_17, size_t *VAR_18,
        size_t VAR_19)
{
 struct bpf_insn *VAR_20 = ((void*)0);
 struct bpf_insn *VAR_21 = ((void*)0);
 struct bpf_insn *VAR_22 = ((void*)0);
 struct bpf_insn_pos VAR_23;
 bool VAR_24 = 1;
 int VAR_25 = 0, VAR_26;

 if (!VAR_17 || !VAR_18)
  return -VAR_10;

 if (VAR_19 > VAR_2)
  VAR_19 = VAR_2;

 VAR_23.begin = VAR_17;
 VAR_23.end = VAR_17 + VAR_19;
 VAR_23.pos = VAR_17;

 if (!VAR_16) {
  FUNC_6(FUNC_0(VAR_3, VAR_4, 0),
      &VAR_23);

  if (FUNC_3(&VAR_23))
   goto errout;

  *VAR_18 = FUNC_7(&VAR_23);
  return 0;
 }

 if (VAR_16 > VAR_5) {
  FUNC_10("bpf: prologue: %d arguments are dropped\n",
      VAR_16 - VAR_5);
  VAR_16 = VAR_5;
 }


 for (VAR_26 = 0; VAR_26 < VAR_16; VAR_26++) {
  struct probe_trace_arg_ref *VAR_27 = VAR_15[VAR_26].ref;

  if (VAR_15[VAR_26].value[0] == '@') {

   FUNC_9("bpf: prologue: global %s%+ld not support\n",
    VAR_15[VAR_26].value, VAR_27 ? VAR_27->offset : 0);
   return -VAR_11;
  }

  while (VAR_27) {

   VAR_24 = 0;
   if (VAR_27->offset > ((1LL << 31) - 1) ||
     VAR_27->offset < ((1LL << 31) * -1)) {
    FUNC_9("bpf: prologue: offset out of bound: %ld\n",
           VAR_27->offset);
    return -VAR_1;
   }

   VAR_27 = VAR_27->next;
  }
 }
 FUNC_8("prologue: pass validation\n");

 if (VAR_24) {

  FUNC_8("prologue: fast path\n");
  VAR_25 = FUNC_4(&VAR_23, VAR_15, VAR_16);
  if (VAR_25)
   goto errout;
 } else {
  FUNC_8("prologue: slow path\n");


  FUNC_6(FUNC_2(VAR_9, VAR_8), &VAR_23);

  VAR_25 = FUNC_5(&VAR_23, VAR_15, VAR_16);
  if (VAR_25)
   goto errout;
  VAR_21 = VAR_23.pos;
  FUNC_6(FUNC_0(VAR_3, VAR_4, 1),
      &VAR_23);

  for (VAR_26 = 0; VAR_26 < VAR_16; VAR_26++)
   FUNC_6(FUNC_0(VAR_3,
       VAR_6 + VAR_26,
       0),
       &VAR_23);
  FUNC_6(FUNC_1(VAR_0, VAR_7, 0, VAR_12),
    &VAR_23);
 }






 VAR_20 = VAR_23.pos;
 FUNC_6(FUNC_0(VAR_3, VAR_4, 0), &VAR_23);





 VAR_22 = VAR_23.pos;
 if (!VAR_24) {




  FUNC_6(FUNC_2(VAR_8, VAR_9), &VAR_23);
  VAR_25 = FUNC_11(&VAR_23, VAR_21, VAR_20,
     VAR_22);
  if (VAR_25)
   goto errout;
 }

 VAR_25 = FUNC_3(&VAR_23);
 if (VAR_25)
  goto errout;

 *VAR_18 = FUNC_7(&VAR_23);
 return 0;
errout:
 return VAR_25;
}
