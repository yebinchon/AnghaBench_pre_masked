
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_test {unsigned int prog_len; struct bpf_insn* fill_insns; } ;
struct bpf_insn {int dummy; } ;


 struct bpf_insn FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bpf_insn FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bpf_insn FUNC_2 (int ,int ,int,unsigned int) ;
 struct bpf_insn FUNC_3 (int) ;
 struct bpf_insn FUNC_4 (int ,int ,int ,unsigned int) ;
 int VAR_5 ;
 struct bpf_insn FUNC_5 (int ,int ) ;
 int VAR_6 ;
 struct bpf_insn FUNC_6 (int ,int ) ;
 struct bpf_insn FUNC_7 (int ,int) ;
 struct bpf_insn FUNC_8 (int ,int ) ;
 struct bpf_insn FUNC_9 (int,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_10(struct bpf_test *VAR_13)
{



 unsigned int VAR_14 = (1 << 15) - 51 * 2 * 5 * 6;
 struct bpf_insn *VAR_15 = VAR_13->fill_insns;
 int VAR_16 = 0, VAR_17, VAR_18 = 0;

 VAR_15[VAR_16++] = FUNC_8(VAR_11, VAR_8);
loop:
 for (VAR_17 = 0; VAR_17 < 51; VAR_17++) {
  VAR_15[VAR_16++] = FUNC_5(VAR_0, 0);

  VAR_15[VAR_16] = FUNC_2(VAR_5, VAR_7, 0x34, VAR_14 - VAR_16 - 3);
  VAR_16++;
  VAR_15[VAR_16++] = FUNC_8(VAR_8, VAR_11);
  VAR_15[VAR_16++] = FUNC_7(VAR_9, 1);
  VAR_15[VAR_16++] = FUNC_7(VAR_10, 2);
  VAR_15[VAR_16++] = FUNC_9(VAR_4 | VAR_1, 0, 0, 0,
      VAR_3),
  VAR_15[VAR_16] = FUNC_4(VAR_5, VAR_7, 0, VAR_14 - VAR_16 - 3);
  VAR_16++;
 }

 for (VAR_17 = 0; VAR_17 < 51; VAR_17++) {
  VAR_15[VAR_16++] = FUNC_5(VAR_0, 0);
  VAR_15[VAR_16] = FUNC_2(VAR_5, VAR_7, 0x34, VAR_14 - VAR_16 - 3);
  VAR_16++;
  VAR_15[VAR_16++] = FUNC_8(VAR_8, VAR_11);
  VAR_15[VAR_16++] = FUNC_9(VAR_4 | VAR_1, 0, 0, 0,
      VAR_2),
  VAR_15[VAR_16] = FUNC_4(VAR_5, VAR_7, 0, VAR_14 - VAR_16 - 3);
  VAR_16++;
 }
 if (++VAR_18 < 5)
  goto loop;

 for (; VAR_16 < VAR_14 - 3; VAR_16++)
  VAR_15[VAR_16] = FUNC_0(VAR_6, VAR_7, 0xbef);
 VAR_15[VAR_14 - 3] = FUNC_3(1);

 VAR_15[VAR_14 - 2] = FUNC_6(VAR_7, 0);
 VAR_15[VAR_14 - 1] = FUNC_1();
 VAR_13->prog_len = VAR_14;
}
