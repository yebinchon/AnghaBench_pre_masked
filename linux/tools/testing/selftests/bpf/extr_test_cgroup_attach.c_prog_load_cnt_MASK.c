
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn {int dummy; } ;
struct bpf_cgroup_storage_key {int dummy; } ;
typedef int prog ;


 int VAR_0 ;
 struct bpf_insn FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct bpf_insn FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct bpf_insn FUNC_2 (int ,int ,int ,int) ;
 struct bpf_insn FUNC_3 (int,int ,int ,int ) ;
 struct bpf_insn FUNC_4 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct bpf_insn FUNC_5 (int ,int ) ;
 struct bpf_insn FUNC_6 (int ,int) ;
 struct bpf_insn FUNC_7 (int ,int ) ;
 int VAR_11 ;
 struct bpf_insn FUNC_8 (int,int ,int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct bpf_insn FUNC_9 (int,int ,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_10 (int ,int,int,int,int ) ;
 int FUNC_11 (int ,struct bpf_insn*,size_t,char*,int ,char*,int ) ;
 char* VAR_20 ;
 int FUNC_12 (int) ;
 int VAR_21 ;
 int FUNC_13 (char*) ;
 scalar_t__ VAR_22 ;
 int FUNC_14 (char*,char*) ;
 char* FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(int VAR_23, int VAR_24)
{
 int VAR_25, VAR_26;

 if (VAR_22 < 0)
  VAR_22 = FUNC_10(VAR_8, 4, 8, 1, 0);
 if (VAR_22 < 0) {
  FUNC_14("failed to create map '%s'\n", FUNC_15(VAR_21));
  return -1;
 }

 VAR_25 = FUNC_10(VAR_9,
    sizeof(struct bpf_cgroup_storage_key), 8, 0, 0);
 if (VAR_25 < 0) {
  FUNC_14("failed to create map '%s'\n", FUNC_15(VAR_21));
  return -1;
 }

 VAR_26 = FUNC_10(
  VAR_10,
  sizeof(struct bpf_cgroup_storage_key), 8, 0, 0);
 if (VAR_26 < 0) {
  FUNC_14("failed to create map '%s'\n", FUNC_15(VAR_21));
  return -1;
 }

 struct bpf_insn VAR_27[] = {
  FUNC_5(VAR_12, 0),
  FUNC_9(VAR_18, VAR_14, VAR_12, -4),
  FUNC_7(VAR_15, VAR_14),
  FUNC_0(VAR_0, VAR_15, -4),
  FUNC_4(VAR_13, VAR_22),
  FUNC_8(VAR_6 | VAR_1, 0, 0, 0, VAR_4),
  FUNC_2(VAR_5, VAR_12, 0, 2),
  FUNC_6(VAR_13, VAR_24),
  FUNC_8(VAR_17 | VAR_19 | VAR_2, VAR_12, VAR_13, 0, 0),

  FUNC_4(VAR_13, VAR_25),
  FUNC_6(VAR_15, 0),
  FUNC_8(VAR_6 | VAR_1, 0, 0, 0, VAR_3),
  FUNC_6(VAR_13, VAR_24),
  FUNC_8(VAR_17 | VAR_19 | VAR_18, VAR_12, VAR_13, 0, 0),

  FUNC_4(VAR_13, VAR_26),
  FUNC_6(VAR_15, 0),
  FUNC_8(VAR_6 | VAR_1, 0, 0, 0, VAR_3),
  FUNC_3(VAR_18, VAR_16, VAR_12, 0),
  FUNC_0(VAR_0, VAR_16, 0x1),
  FUNC_9(VAR_18, VAR_12, VAR_16, 0),

  FUNC_6(VAR_12, VAR_23),
  FUNC_1(),
 };
 size_t VAR_28 = sizeof(VAR_27) / sizeof(struct bpf_insn);
 int VAR_29;

 VAR_29 = FUNC_11(VAR_11,
          VAR_27, VAR_28, "GPL", 0,
          VAR_20, VAR_7);

 if (VAR_29 < 0) {
  FUNC_13("Loading program");
  FUNC_14("Output from verifier:\n%s\n-------\n", VAR_20);
  return 0;
 }
 FUNC_12(VAR_25);
 return VAR_29;
}
