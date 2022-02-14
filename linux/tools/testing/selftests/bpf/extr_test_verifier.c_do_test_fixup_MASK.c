
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct test_val {int dummy; } ;
struct other_val {int dummy; } ;
struct bpf_test {int* fixup_map_hash_8b; int* fixup_map_hash_48b; int* fixup_map_hash_16b; int* fixup_map_array_48b; int* fixup_map_sockmap; int* fixup_map_sockhash; int* fixup_map_xskmap; int* fixup_map_stacktrace; int* fixup_prog1; int* fixup_prog2; int* fixup_map_in_map; int* fixup_cgroup_storage; int* fixup_percpu_cgroup_storage; int* fixup_map_spin_lock; int* fixup_map_array_ro; int* fixup_map_array_wo; int* fixup_map_array_small; int* fixup_sk_storage_map; int* fixup_map_event_output; int (* fill_helper ) (struct bpf_test*) ;int fill_insns; } ;
struct bpf_insn {int imm; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int,int,int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct bpf_test*) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static void FUNC_10(struct bpf_test *VAR_10, enum bpf_prog_type VAR_11,
     struct bpf_insn *VAR_12, int *VAR_13)
{
 int *VAR_14 = VAR_10->fixup_map_hash_8b;
 int *VAR_15 = VAR_10->fixup_map_hash_48b;
 int *VAR_16 = VAR_10->fixup_map_hash_16b;
 int *VAR_17 = VAR_10->fixup_map_array_48b;
 int *VAR_18 = VAR_10->fixup_map_sockmap;
 int *VAR_19 = VAR_10->fixup_map_sockhash;
 int *VAR_20 = VAR_10->fixup_map_xskmap;
 int *VAR_21 = VAR_10->fixup_map_stacktrace;
 int *VAR_22 = VAR_10->fixup_prog1;
 int *VAR_23 = VAR_10->fixup_prog2;
 int *VAR_24 = VAR_10->fixup_map_in_map;
 int *VAR_25 = VAR_10->fixup_cgroup_storage;
 int *VAR_26 = VAR_10->fixup_percpu_cgroup_storage;
 int *VAR_27 = VAR_10->fixup_map_spin_lock;
 int *VAR_28 = VAR_10->fixup_map_array_ro;
 int *VAR_29 = VAR_10->fixup_map_array_wo;
 int *VAR_30 = VAR_10->fixup_map_array_small;
 int *VAR_31 = VAR_10->fixup_sk_storage_map;
 int *VAR_32 = VAR_10->fixup_map_event_output;

 if (VAR_10->fill_helper) {
  VAR_10->fill_insns = FUNC_1(VAR_9, sizeof(struct bpf_insn));
  VAR_10->fill_helper(VAR_10);
 }





 if (*VAR_14) {
  VAR_13[0] = FUNC_3(VAR_3, sizeof(long long),
     sizeof(long long), 1);
  do {
   VAR_12[*VAR_14].imm = VAR_13[0];
   VAR_14++;
  } while (*VAR_14);
 }

 if (*VAR_15) {
  VAR_13[1] = FUNC_3(VAR_3, sizeof(long long),
     sizeof(struct test_val), 1);
  do {
   VAR_12[*VAR_15].imm = VAR_13[1];
   VAR_15++;
  } while (*VAR_15);
 }

 if (*VAR_16) {
  VAR_13[2] = FUNC_3(VAR_3, sizeof(long long),
     sizeof(struct other_val), 1);
  do {
   VAR_12[*VAR_16].imm = VAR_13[2];
   VAR_16++;
  } while (*VAR_16);
 }

 if (*VAR_17) {
  VAR_13[3] = FUNC_3(VAR_2, sizeof(int),
     sizeof(struct test_val), 1);
  FUNC_9(VAR_13[3], 0);
  do {
   VAR_12[*VAR_17].imm = VAR_13[3];
   VAR_17++;
  } while (*VAR_17);
 }

 if (*VAR_22) {
  VAR_13[4] = FUNC_6(VAR_11, 4, 0);
  do {
   VAR_12[*VAR_22].imm = VAR_13[4];
   VAR_22++;
  } while (*VAR_22);
 }

 if (*VAR_23) {
  VAR_13[5] = FUNC_6(VAR_11, 8, 7);
  do {
   VAR_12[*VAR_23].imm = VAR_13[5];
   VAR_23++;
  } while (*VAR_23);
 }

 if (*VAR_24) {
  VAR_13[6] = FUNC_4();
  do {
   VAR_12[*VAR_24].imm = VAR_13[6];
   VAR_24++;
  } while (*VAR_24);
 }

 if (*VAR_25) {
  VAR_13[7] = FUNC_2(0);
  do {
   VAR_12[*VAR_25].imm = VAR_13[7];
   VAR_25++;
  } while (*VAR_25);
 }

 if (*VAR_26) {
  VAR_13[8] = FUNC_2(1);
  do {
   VAR_12[*VAR_26].imm = VAR_13[8];
   VAR_26++;
  } while (*VAR_26);
 }
 if (*VAR_18) {
  VAR_13[9] = FUNC_3(VAR_6, sizeof(int),
     sizeof(int), 1);
  do {
   VAR_12[*VAR_18].imm = VAR_13[9];
   VAR_18++;
  } while (*VAR_18);
 }
 if (*VAR_19) {
  VAR_13[10] = FUNC_3(VAR_5, sizeof(int),
     sizeof(int), 1);
  do {
   VAR_12[*VAR_19].imm = VAR_13[10];
   VAR_19++;
  } while (*VAR_19);
 }
 if (*VAR_20) {
  VAR_13[11] = FUNC_3(VAR_8, sizeof(int),
     sizeof(int), 1);
  do {
   VAR_12[*VAR_20].imm = VAR_13[11];
   VAR_20++;
  } while (*VAR_20);
 }
 if (*VAR_21) {
  VAR_13[12] = FUNC_3(VAR_7, sizeof(u32),
      sizeof(u64), 1);
  do {
   VAR_12[*VAR_21].imm = VAR_13[12];
   VAR_21++;
  } while (*VAR_21);
 }
 if (*VAR_27) {
  VAR_13[13] = FUNC_5();
  do {
   VAR_12[*VAR_27].imm = VAR_13[13];
   VAR_27++;
  } while (*VAR_27);
 }
 if (*VAR_28) {
  VAR_13[14] = FUNC_0(VAR_2, sizeof(int),
        sizeof(struct test_val), 1,
        VAR_0);
  FUNC_9(VAR_13[14], 0);
  do {
   VAR_12[*VAR_28].imm = VAR_13[14];
   VAR_28++;
  } while (*VAR_28);
 }
 if (*VAR_29) {
  VAR_13[15] = FUNC_0(VAR_2, sizeof(int),
        sizeof(struct test_val), 1,
        VAR_1);
  FUNC_9(VAR_13[15], 0);
  do {
   VAR_12[*VAR_29].imm = VAR_13[15];
   VAR_29++;
  } while (*VAR_29);
 }
 if (*VAR_30) {
  VAR_13[16] = FUNC_0(VAR_2, sizeof(int),
        1, 1, 0);
  FUNC_9(VAR_13[16], 0);
  do {
   VAR_12[*VAR_30].imm = VAR_13[16];
   VAR_30++;
  } while (*VAR_30);
 }
 if (*VAR_31) {
  VAR_13[17] = FUNC_7();
  do {
   VAR_12[*VAR_31].imm = VAR_13[17];
   VAR_31++;
  } while (*VAR_31);
 }
 if (*VAR_32) {
  VAR_13[18] = FUNC_0(VAR_4,
        sizeof(int), sizeof(int), 1, 0);
  do {
   VAR_12[*VAR_32].imm = VAR_13[18];
   VAR_32++;
  } while (*VAR_32);
 }
}
