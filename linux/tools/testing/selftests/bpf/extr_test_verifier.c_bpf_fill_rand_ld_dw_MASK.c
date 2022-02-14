
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct bpf_test {int retval; int prog_len; struct bpf_insn* fill_insns; } ;
struct bpf_insn {int dummy; } ;


 struct bpf_insn FUNC_0 (int ,int ,int) ;
 struct bpf_insn FUNC_1 (int ,int ,int ) ;
 struct bpf_insn FUNC_2 () ;
 struct bpf_insn FUNC_3 (int ,int) ;
 struct bpf_insn FUNC_4 (int ,int ) ;
 struct bpf_insn FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct bpf_test *VAR_4)
{
 struct bpf_insn *VAR_5 = VAR_4->fill_insns;
 uint64_t VAR_6 = 0;
 int VAR_7 = 0;

 VAR_5[VAR_7++] = FUNC_4(VAR_0, 0);
 while (VAR_7 < VAR_4->retval) {
  uint64_t VAR_8 = FUNC_6();
  struct bpf_insn VAR_9[2] = { FUNC_3(VAR_1, VAR_8) };

  VAR_6 ^= VAR_8;
  VAR_5[VAR_7++] = VAR_9[0];
  VAR_5[VAR_7++] = VAR_9[1];
  VAR_5[VAR_7++] = FUNC_1(VAR_3, VAR_0, VAR_1);
 }
 VAR_5[VAR_7++] = FUNC_5(VAR_1, VAR_0);
 VAR_5[VAR_7++] = FUNC_0(VAR_2, VAR_1, 32);
 VAR_5[VAR_7++] = FUNC_1(VAR_3, VAR_0, VAR_1);
 VAR_5[VAR_7] = FUNC_2();
 VAR_4->prog_len = VAR_7 + 1;
 VAR_6 ^= (VAR_6 >> 32);
 VAR_4->retval = (uint32_t)VAR_6;
}
