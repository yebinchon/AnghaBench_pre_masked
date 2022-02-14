
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bpf_insn_pos {struct bpf_insn* pos; struct bpf_insn* begin; } ;
struct bpf_insn {int off; int code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;



 scalar_t__ FUNC_2 (struct bpf_insn_pos*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct bpf_insn_pos *VAR_4, struct bpf_insn *VAR_5,
    struct bpf_insn *VAR_6, struct bpf_insn *VAR_7)
{
 struct bpf_insn *VAR_8;

 if (FUNC_2(VAR_4))
  return -VAR_3;

 for (VAR_8 = VAR_4->begin; VAR_8 < VAR_4->pos; VAR_8++) {
  struct bpf_insn *VAR_9;
  u8 VAR_10 = FUNC_0(VAR_8->code);
  u8 VAR_11;

  if (VAR_10 != VAR_1)
   continue;
  VAR_11 = FUNC_1(VAR_8->code);
  if (VAR_11 == VAR_0)
   continue;

  switch (VAR_8->off) {
  case 130:
   VAR_9 = VAR_5;
   break;
  case 129:
   VAR_9 = VAR_6;
   break;
  case 128:
   VAR_9 = VAR_7;
   break;
  default:
   FUNC_3("bpf prologue: internal error: relocation failed\n");
   return -VAR_2;
  }

  VAR_8->off = VAR_9 - (VAR_8 + 1);
 }
 return 0;
}
