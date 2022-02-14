
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {struct bpf_insn* insns; } ;
struct bpf_insn {scalar_t__ imm; int off; int dst_reg; int src_reg; int code; } ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct bpf_program*,int) ;
 int FUNC_3 (char*,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,int ,int,int ,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct bpf_program *VAR_4, int VAR_5,
          __u32 VAR_6, __u32 VAR_7)
{
 struct bpf_insn *VAR_8;
 int VAR_9;
 __u8 VAR_10;

 if (VAR_5 % sizeof(struct bpf_insn))
  return -VAR_3;
 VAR_9 = VAR_5 / sizeof(struct bpf_insn);

 VAR_8 = &VAR_4->insns[VAR_9];
 VAR_10 = FUNC_0(VAR_8->code);

 if (VAR_10 == VAR_0 || VAR_10 == VAR_1) {
  if (FUNC_1(VAR_8->code) != VAR_2)
   return -VAR_3;
  if (VAR_8->imm != VAR_6)
   return -VAR_3;
  VAR_8->imm = VAR_7;
  FUNC_3("prog '%s': patched insn #%d (ALU/ALU64) imm %d -> %d\n",
    FUNC_2(VAR_4, 0),
    VAR_9, VAR_6, VAR_7);
 } else {
  FUNC_4("prog '%s': trying to relocate unrecognized insn #%d, code:%x, src:%x, dst:%x, off:%x, imm:%x\n",
      FUNC_2(VAR_4, 0),
      VAR_9, VAR_8->code, VAR_8->src_reg, VAR_8->dst_reg,
      VAR_8->off, VAR_8->imm);
  return -VAR_3;
 }
 return 0;
}
