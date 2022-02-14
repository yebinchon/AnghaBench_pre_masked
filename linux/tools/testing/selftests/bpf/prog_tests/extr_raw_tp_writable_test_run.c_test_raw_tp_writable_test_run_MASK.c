
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trace_program ;
typedef int test_skb ;
struct bpf_load_program_attr {char* license; int insns_cnt; int log_level; struct bpf_insn const* insns; int prog_type; } ;
struct bpf_insn {int dummy; } ;
typedef int skb_program ;
typedef int error ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 struct bpf_insn const FUNC_0 () ;
 struct bpf_insn const FUNC_1 (int ,int ,int ,int ) ;
 struct bpf_insn const FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bpf_insn const FUNC_3 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (int,char*,char*,...) ;
 int FUNC_5 (struct bpf_load_program_attr*,char*,int) ;
 int FUNC_6 (int,int,char*,int,int ,int ,scalar_t__*,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int) ;
 int VAR_7 ;

void FUNC_9(void)
{
 __u32 VAR_8 = 0;
 char VAR_9[4096];

 const struct bpf_insn VAR_10[] = {
  FUNC_1(VAR_0, VAR_5, VAR_4, 0),
  FUNC_1(VAR_6, VAR_3, VAR_5, 0),
  FUNC_2(VAR_3, 42),
  FUNC_3(VAR_6, VAR_5, VAR_3, 0),
  FUNC_0(),
 };

 struct bpf_load_program_attr VAR_11 = {
  .prog_type = VAR_1,
  .license = "GPL v2",
  .insns = VAR_10,
  .insns_cnt = sizeof(VAR_10) / sizeof(struct bpf_insn),
  .log_level = 2,
 };

 int VAR_12 = FUNC_5(&VAR_11, VAR_9, sizeof(VAR_9));
 if (FUNC_4(VAR_12 < 0, "bpf_raw_tracepoint_writable loaded",
    "failed: %d errno %d\n", VAR_12, VAR_7))
  return;

 const struct bpf_insn VAR_13[] = {
  FUNC_2(VAR_3, 0),
  FUNC_0(),
 };

 struct bpf_load_program_attr VAR_14 = {
  .prog_type = VAR_2,
  .license = "GPL v2",
  .insns = VAR_13,
  .insns_cnt = sizeof(VAR_13) / sizeof(struct bpf_insn),
 };

 int VAR_15 =
  FUNC_5(&VAR_14, VAR_9, sizeof(VAR_9));
 if (FUNC_4(VAR_15 < 0, "test_program_loaded", "failed: %d errno %d\n",
    VAR_15, VAR_7))
  goto out_bpffd;

 int VAR_16 = FUNC_7("bpf_test_finish", VAR_12);
 if (FUNC_4(VAR_16 < 0, "bpf_raw_tracepoint_writable opened",
    "failed: %d errno %d\n", VAR_16, VAR_7))
  goto out_filterfd;

 char VAR_17[128] = {
  0,
 };

 __u32 VAR_18;
 int VAR_19 = FUNC_6(VAR_15, 1, VAR_17, sizeof(VAR_17), 0,
        0, &VAR_18, 0);
 FUNC_4(VAR_19 != 42, "test_run",
       "tracepoint did not modify return value\n");
 FUNC_4(VAR_18 != 0, "test_run_ret",
       "socket_filter did not return 0\n");

 FUNC_8(VAR_16);

 VAR_19 = FUNC_6(VAR_15, 1, VAR_17, sizeof(VAR_17), 0, 0,
    &VAR_18, 0);
 FUNC_4(VAR_19 != 0, "test_run_notrace",
       "test_run failed with %d errno %d\n", VAR_19, VAR_7);
 FUNC_4(VAR_18 != 0, "test_run_ret_notrace",
       "socket_filter did not return 0\n");

out_filterfd:
 FUNC_8(VAR_15);
out_bpffd:
 FUNC_8(VAR_12);
}
