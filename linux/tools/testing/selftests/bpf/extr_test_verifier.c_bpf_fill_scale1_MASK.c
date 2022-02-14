
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_test {int prog_len; int retval; struct bpf_insn* fill_insns; } ;
struct bpf_insn {int dummy; } ;


 struct bpf_insn FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bpf_insn FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bpf_insn FUNC_2 (int ,int ,int ,int) ;
 int VAR_5 ;
 struct bpf_insn FUNC_3 (int ,int ) ;
 struct bpf_insn FUNC_4 (int,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct bpf_insn FUNC_5 (int ,int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct bpf_test *VAR_12)
{
 struct bpf_insn *VAR_13 = VAR_12->fill_insns;
 int VAR_14 = 0, VAR_15 = 0;

 VAR_13[VAR_14++] = FUNC_3(VAR_9, VAR_7);

 while (VAR_15++ < VAR_10) {
  VAR_13[VAR_14++] = FUNC_4(VAR_4 | VAR_0, 0, 0, 0,
      VAR_2);
  VAR_13[VAR_14++] = FUNC_2(VAR_3, VAR_6, FUNC_6(), 2);
  VAR_13[VAR_14++] = FUNC_3(VAR_7, VAR_8);
  VAR_13[VAR_14++] = FUNC_5(VAR_1, VAR_7, VAR_9,
     -8 * (VAR_15 % 64 + 1));
 }



 while (VAR_14 < VAR_11 - VAR_10 * 4)
  VAR_13[VAR_14++] = FUNC_0(VAR_5, VAR_6, 42);
 VAR_13[VAR_14] = FUNC_1();
 VAR_12->prog_len = VAR_14 + 1;
 VAR_12->retval = 42;
}
