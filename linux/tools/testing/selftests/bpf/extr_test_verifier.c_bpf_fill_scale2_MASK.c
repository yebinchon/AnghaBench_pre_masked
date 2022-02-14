
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_test {int prog_len; int retval; struct bpf_insn* fill_insns; } ;
struct bpf_insn {int dummy; } ;


 struct bpf_insn FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 struct bpf_insn FUNC_1 (int) ;
 int VAR_1 ;
 struct bpf_insn FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bpf_insn FUNC_3 (int ,int ,int ,int) ;
 int VAR_5 ;
 struct bpf_insn FUNC_4 (int ,int ) ;
 struct bpf_insn FUNC_5 (int,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct bpf_insn FUNC_6 (int ,int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct bpf_test *VAR_13)
{
 struct bpf_insn *VAR_14 = VAR_13->fill_insns;
 int VAR_15 = 0, VAR_16 = 0;


 for (VAR_16 = 0; VAR_16 < 7; VAR_16++) {
  VAR_14[VAR_15++] = FUNC_1(1);
  VAR_14[VAR_15++] = FUNC_2();
 }
 VAR_14[VAR_15++] = FUNC_4(VAR_9, VAR_7);

 VAR_16 = 0;
 while (VAR_16++ < VAR_11) {
  VAR_14[VAR_15++] = FUNC_5(VAR_4 | VAR_0, 0, 0, 0,
      VAR_2);
  VAR_14[VAR_15++] = FUNC_3(VAR_3, VAR_6, FUNC_7(), 2);
  VAR_14[VAR_15++] = FUNC_4(VAR_7, VAR_8);
  VAR_14[VAR_15++] = FUNC_6(VAR_1, VAR_7, VAR_9,
     -8 * (VAR_16 % (64 - 4 * 7) + 1));
 }
 while (VAR_15 < VAR_12 - VAR_11 * 4)
  VAR_14[VAR_15++] = FUNC_0(VAR_5, VAR_6, 42);
 VAR_14[VAR_15] = FUNC_2();
 VAR_13->prog_len = VAR_15 + 1;
 VAR_13->retval = 42;
}
