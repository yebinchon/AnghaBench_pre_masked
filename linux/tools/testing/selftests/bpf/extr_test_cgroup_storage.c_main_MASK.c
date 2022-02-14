
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct bpf_insn {int imm; } ;
struct bpf_cgroup_storage_key {int dummy; } ;
typedef int prog ;
typedef int key ;


 int VAR_0 ;
 struct bpf_insn FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bpf_insn FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 struct bpf_insn FUNC_2 (int ,int ,int ,int ) ;
 struct bpf_insn FUNC_3 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct bpf_insn FUNC_4 (int ,int) ;
 struct bpf_insn FUNC_5 (int ,int ) ;
 int VAR_10 ;
 struct bpf_insn FUNC_6 (int,int ,int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct bpf_insn FUNC_7 (int ,int ,int ,int ) ;
 struct bpf_insn FUNC_8 (int ,int ,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int,int,int ,int ) ;
 int FUNC_11 (int ,struct bpf_insn*,size_t,char*,int ,char*,int ) ;
 char* VAR_17 ;
 scalar_t__ FUNC_12 (int,int *,struct bpf_cgroup_storage_key*) ;
 scalar_t__ FUNC_13 (int,struct bpf_cgroup_storage_key*,unsigned long long*) ;
 scalar_t__ FUNC_14 (int,struct bpf_cgroup_storage_key*,unsigned long long*,int ) ;
 scalar_t__ FUNC_15 (int,int,int ,int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 int VAR_18 ;
 int FUNC_18 (unsigned long long*) ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (int ) ;
 unsigned long long* FUNC_21 (int) ;
 int FUNC_22 (char*,...) ;
 scalar_t__ FUNC_23 () ;
 char* FUNC_24 (int ) ;
 int FUNC_25 (char*) ;

int FUNC_26(int VAR_19, char **VAR_20)
{
 struct bpf_insn VAR_21[] = {
  FUNC_3(VAR_12, 0),
  FUNC_4(VAR_13, 0),
  FUNC_6(VAR_6 | VAR_2, 0, 0, 0,
        VAR_5),
  FUNC_2(VAR_4, VAR_14, VAR_11, 0),
  FUNC_0(VAR_0, VAR_14, 0x1),
  FUNC_7(VAR_4, VAR_11, VAR_14, 0),

  FUNC_3(VAR_12, 0),
  FUNC_4(VAR_13, 0),
  FUNC_6(VAR_6 | VAR_2, 0, 0, 0,
        VAR_5),
  FUNC_4(VAR_12, 1),
  FUNC_8(VAR_4, VAR_11, VAR_12, 0),
  FUNC_2(VAR_4, VAR_12, VAR_11, 0),
  FUNC_0(VAR_1, VAR_12, 0x1),
  FUNC_5(VAR_11, VAR_12),
  FUNC_1(),
 };
 size_t VAR_22 = sizeof(VAR_21) / sizeof(struct bpf_insn);
 int VAR_23 = VAR_15;
 int VAR_24, VAR_25, VAR_26, VAR_27;
 struct bpf_cgroup_storage_key VAR_28;
 unsigned long long VAR_29;
 unsigned long long *VAR_30;
 int VAR_31, VAR_32;

 VAR_32 = FUNC_19();
 VAR_30 = FUNC_21(sizeof(*VAR_30) * VAR_32);
 if (!VAR_30) {
  FUNC_22("Not enough memory for per-cpu area (%d cpus)\n", VAR_32);
  goto err;
 }

 VAR_24 = FUNC_10(VAR_8, sizeof(VAR_28),
    sizeof(VAR_29), 0, 0);
 if (VAR_24 < 0) {
  FUNC_22("Failed to create map: %s\n", FUNC_24(VAR_18));
  goto out;
 }

 VAR_25 = FUNC_10(VAR_9,
           sizeof(VAR_28), sizeof(VAR_29), 0, 0);
 if (VAR_25 < 0) {
  FUNC_22("Failed to create map: %s\n", FUNC_24(VAR_18));
  goto out;
 }

 VAR_21[0].imm = VAR_25;
 VAR_21[7].imm = VAR_24;
 VAR_26 = FUNC_11(VAR_10,
       VAR_21, VAR_22, "GPL", 0,
       VAR_17, VAR_7);
 if (VAR_26 < 0) {
  FUNC_22("Failed to load bpf program: %s\n", VAR_17);
  goto out;
 }

 if (FUNC_23()) {
  FUNC_22("Failed to setup cgroup environment\n");
  goto err;
 }


 VAR_27 = FUNC_17(VAR_16);
 if (VAR_27 < 0) {
  FUNC_22("Failed to create test cgroup\n");
  goto err;
 }

 if (FUNC_20(VAR_16)) {
  FUNC_22("Failed to join cgroup\n");
  goto err;
 }


 if (FUNC_15(VAR_26, VAR_27, VAR_3, 0)) {
  FUNC_22("Failed to attach bpf program\n");
  goto err;
 }

 if (FUNC_12(VAR_24, ((void*)0), &VAR_28)) {
  FUNC_22("Failed to get the first key in cgroup storage\n");
  goto err;
 }

 if (FUNC_13(VAR_24, &VAR_28, &VAR_29)) {
  FUNC_22("Failed to lookup cgroup storage 0\n");
  goto err;
 }

 for (VAR_31 = 0; VAR_31 < VAR_32; VAR_31++)
  VAR_30[VAR_31] = 1000;

 if (FUNC_14(VAR_25, &VAR_28, VAR_30, 0)) {
  FUNC_22("Failed to update the data in the cgroup storage\n");
  goto err;
 }


 FUNC_9(FUNC_25("ping localhost -c 1 -W 1 -q > /dev/null") == 0);
 FUNC_9(FUNC_25("ping localhost -c 1 -W 1 -q > /dev/null"));
 FUNC_9(FUNC_25("ping localhost -c 1 -W 1 -q > /dev/null") == 0);


 if (FUNC_13(VAR_24, &VAR_28, &VAR_29)) {
  FUNC_22("Failed to lookup cgroup storage\n");
  goto err;
 }

 if (VAR_29 != 3) {
  FUNC_22("Unexpected data in the cgroup storage: %llu\n", VAR_29);
  goto err;
 }


 VAR_29++;
 if (FUNC_14(VAR_24, &VAR_28, &VAR_29, 0)) {
  FUNC_22("Failed to update the data in the cgroup storage\n");
  goto err;
 }


 FUNC_9(FUNC_25("ping localhost -c 1 -W 1 -q > /dev/null") == 0);
 FUNC_9(FUNC_25("ping localhost -c 1 -W 1 -q > /dev/null"));
 FUNC_9(FUNC_25("ping localhost -c 1 -W 1 -q > /dev/null") == 0);


 if (FUNC_13(VAR_24, &VAR_28, &VAR_29)) {
  FUNC_22("Failed to lookup the cgroup storage\n");
  goto err;
 }

 if (VAR_29 != 7) {
  FUNC_22("Unexpected data in the cgroup storage: %llu\n", VAR_29);
  goto err;
 }



 for (VAR_31 = 0; VAR_31 < VAR_32; VAR_31++)
  VAR_30[VAR_31] = 0;

 if (FUNC_13(VAR_25, &VAR_28, VAR_30)) {
  FUNC_22("Failed to lookup the per-cpu cgroup storage\n");
  goto err;
 }

 VAR_29 = 0;
 for (VAR_31 = 0; VAR_31 < VAR_32; VAR_31++)
  VAR_29 += VAR_30[VAR_31];

 if (VAR_29 != VAR_32 * 1000 + 6) {
  FUNC_22("Unexpected data in the per-cpu cgroup storage\n");
  goto err;
 }

 VAR_23 = 0;
 FUNC_22("test_cgroup_storage:PASS\n");

err:
 FUNC_16();
 FUNC_18(VAR_30);

out:
 return VAR_23;
}
