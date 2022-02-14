
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_arg_ref {char const* offset; struct probe_trace_arg_ref* next; } ;
struct probe_trace_arg {char* value; int type; struct probe_trace_arg_ref* ref; } ;
struct bpf_insn_pos {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int,scalar_t__,int ,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int,int ,scalar_t__,int) ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bpf_insn_pos*) ;
 int FUNC_7 (struct bpf_insn_pos*,int ,char const*,scalar_t__) ;
 int FUNC_8 (struct bpf_insn_pos*,int ,int ,char const*) ;
 int FUNC_9 (int ,struct bpf_insn_pos*) ;
 char const* FUNC_10 (int) ;
 int FUNC_11 (char*,int,char const*) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static int
FUNC_13(struct bpf_insn_pos *VAR_12,
        struct probe_trace_arg *VAR_13, int VAR_14)
{
 int VAR_15, VAR_16;

 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  struct probe_trace_arg *VAR_17 = &VAR_13[VAR_16];
  const char *VAR_18 = VAR_17->value;
  struct probe_trace_arg_ref *VAR_19 = ((void*)0);
  int VAR_20 = (VAR_16 + 1) * -8;

  FUNC_11("prologue: fetch arg %d, base reg is %s\n",
    VAR_16, VAR_18);


  VAR_15 = FUNC_7(VAR_12, VAR_8, VAR_18,
        VAR_7);
  if (VAR_15) {
   FUNC_12("prologue: failed to get offset of register %s\n",
          VAR_18);
   goto errout;
  }


  FUNC_9(FUNC_3(VAR_6, VAR_9), VAR_12);

  FUNC_9(FUNC_0(VAR_0, VAR_6, VAR_20), VAR_12);







  FUNC_9(FUNC_4(VAR_1, VAR_9, VAR_7,
    VAR_20), VAR_12);

  VAR_19 = VAR_17->ref;
  while (VAR_19) {
   FUNC_11("prologue: arg %d: offset %ld\n",
     VAR_16, VAR_19->offset);
   VAR_15 = FUNC_8(VAR_12, VAR_5, VAR_6,
        VAR_19->offset);
   if (VAR_15) {
    FUNC_12("prologue: failed to generate probe_read function call\n");
    goto errout;
   }

   VAR_19 = VAR_19->next;





   if (VAR_19)
    FUNC_9(FUNC_2(VAR_1, VAR_7,
      VAR_9, VAR_20), VAR_12);
  }
 }


 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  int VAR_21 = (VAR_13[VAR_16].ref) ? FUNC_5(VAR_13[VAR_16].type) : VAR_1;

  FUNC_11("prologue: load arg %d, insn_sz is %s\n",
    VAR_16, FUNC_10(VAR_21));
  FUNC_9(FUNC_2(VAR_21, VAR_3 + VAR_16,
    VAR_9, -VAR_10 * (VAR_16 + 1)), VAR_12);
 }

 FUNC_9(FUNC_1(VAR_2, VAR_4, 0, VAR_11), VAR_12);

 return FUNC_6(VAR_12);
errout:
 return VAR_15;
}
