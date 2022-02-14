
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_load_program_attr {int key_size; int value_size; int max_entries; char* license; int insns_cnt; struct bpf_insn* insns; int prog_type; int map_type; } ;
struct bpf_insn {int imm; } ;
struct bpf_create_map_attr {int key_size; int value_size; int max_entries; char* license; int insns_cnt; struct bpf_insn* insns; int prog_type; int map_type; } ;
typedef int prog ;
typedef int map ;
typedef int data ;
typedef int __u8 ;
typedef int __u32 ;


 int FUNC_0 (struct bpf_insn*) ;
 int VAR_0 ;
 struct bpf_insn FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 struct bpf_insn FUNC_2 (int ) ;
 struct bpf_insn FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bpf_insn FUNC_4 (int ,int ,int ,int) ;
 struct bpf_insn FUNC_5 (int ,int ,int ,int ) ;
 struct bpf_insn FUNC_6 (int ,unsigned long long) ;
 struct bpf_insn FUNC_7 (int ,int) ;
 struct bpf_insn FUNC_8 (int ,int ,int ) ;
 int VAR_5 ;
 struct bpf_insn FUNC_9 (int ,int) ;
 struct bpf_insn FUNC_10 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct bpf_insn FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct bpf_load_program_attr*) ;
 int FUNC_14 (struct bpf_load_program_attr*,int *,int ) ;
 int FUNC_15 (int,int*,void*) ;
 int FUNC_16 (int,int,int *,int,int *,int *,int*,int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 (struct bpf_load_program_attr*,int ,int) ;

__attribute__((used)) static int FUNC_19(int VAR_13, unsigned long long VAR_14,
         void *VAR_15)
{
 struct bpf_load_program_attr VAR_16;
 struct bpf_create_map_attr VAR_17;
 struct bpf_insn VAR_18[] = {
  FUNC_8(VAR_12, 0, 0),
  FUNC_7(VAR_8, VAR_13),
  FUNC_6(VAR_11, VAR_14),
  FUNC_10(VAR_10, VAR_9),
  FUNC_1(VAR_0, VAR_10, -8),
  FUNC_11(VAR_1, VAR_10, VAR_11, 0),
  FUNC_2(VAR_2),
  FUNC_4(VAR_4, VAR_7, 0, 4),
  FUNC_5(VAR_1, VAR_8, VAR_7, 0),
  FUNC_11(VAR_1, VAR_12, VAR_8, 0),
  FUNC_9(VAR_7, 42),
  FUNC_4(VAR_3, 0, 0, 1),
  FUNC_9(VAR_7, 1),
  FUNC_3(),
 };
 __u8 VAR_19[64] = {};
 int VAR_20, VAR_21, VAR_22, VAR_23 = 0;
 __u32 VAR_24 = 0;

 FUNC_18(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.map_type = VAR_5;
 VAR_17.key_size = sizeof(int);
 VAR_17.value_size = sizeof(unsigned long long);
 VAR_17.max_entries = 1;

 VAR_20 = FUNC_13(&VAR_17);
 if (VAR_20 < 0)
  return -1;

 VAR_18[0].imm = VAR_20;

 FUNC_18(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.prog_type = VAR_6;
 VAR_16.insns = VAR_18;
 VAR_16.insns_cnt = FUNC_0(VAR_18);
 VAR_16.license = "GPL";

 VAR_21 = FUNC_14(&VAR_16, ((void*)0), 0);
 if (VAR_21 < 0) {
  FUNC_17(VAR_20);
  return -1;
 }

 VAR_22 = FUNC_16(VAR_21, 1, VAR_19, sizeof(VAR_19),
    ((void*)0), ((void*)0), &VAR_24, ((void*)0));
 if (VAR_22 < 0 || VAR_24 != 42) {
  VAR_22 = -1;
 } else {
  FUNC_12(!FUNC_15(VAR_20, &VAR_23, VAR_15));
  VAR_22 = 0;
 }
 FUNC_17(VAR_21);
 FUNC_17(VAR_20);
 return VAR_22;
}
