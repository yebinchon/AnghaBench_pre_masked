
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_test {int prog_len; struct bpf_insn* fill_insns; } ;
struct bpf_insn {int dummy; } ;


 int VAR_0 ;
 struct bpf_insn FUNC_0 () ;
 int VAR_1 ;
 struct bpf_insn FUNC_1 (int ,int ,int,unsigned int) ;
 struct bpf_insn FUNC_2 (int ,int) ;
 struct bpf_insn FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct bpf_test *VAR_5)
{
 struct bpf_insn *VAR_6 = VAR_5->fill_insns;






 unsigned int VAR_7 = (1 << 15) / 7;
 int VAR_8 = 0;

 VAR_6[VAR_8++] = FUNC_3(VAR_4, VAR_3);
 VAR_6[VAR_8++] = FUNC_2(VAR_0, 0);
 VAR_6[VAR_8] = FUNC_1(VAR_1, VAR_2, 10, VAR_7 - VAR_8 - 2);
 VAR_8++;
 while (VAR_8 < VAR_7 - 1)
  VAR_6[VAR_8++] = FUNC_2(VAR_0, 1);
 VAR_6[VAR_8] = FUNC_0();
 VAR_5->prog_len = VAR_8 + 1;
}
