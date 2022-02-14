
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_request {int dummy; } ;
struct bpf_load_program_attr {char* license; int insns_cnt; int log_level; struct bpf_insn const* insns; int prog_type; } ;
struct bpf_insn {int dummy; } ;
typedef int program ;
typedef int error ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_insn const FUNC_0 () ;
 struct bpf_insn const FUNC_1 (int ,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,char*,char*,...) ;
 int FUNC_3 (struct bpf_load_program_attr*,char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int) ;
 int VAR_6 ;

void FUNC_6(void)
{
 __u32 VAR_7 = 0;
 char VAR_8[4096];
 int VAR_9 = -1, VAR_10 = -1;

 const struct bpf_insn VAR_11[] = {

  FUNC_1(VAR_1, VAR_5, VAR_4, 0),

  FUNC_1(VAR_0, VAR_3, VAR_5,
       sizeof(struct nbd_request)),
  FUNC_0(),
 };

 struct bpf_load_program_attr VAR_12 = {
  .prog_type = VAR_2,
  .license = "GPL v2",
  .insns = VAR_11,
  .insns_cnt = sizeof(VAR_11) / sizeof(struct bpf_insn),
  .log_level = 2,
 };

 VAR_9 = FUNC_3(&VAR_12, VAR_8, sizeof(VAR_8));
 if (FUNC_2(VAR_9 < 0, "bpf_raw_tracepoint_writable load",
    "failed: %d errno %d\n", VAR_9, VAR_6))
  return;

 VAR_10 = FUNC_4("nbd_send_request", VAR_9);
 if (FUNC_2(VAR_10 >= 0, "bpf_raw_tracepoint_writable open",
    "erroneously succeeded\n"))
  goto out_bpffd;

 FUNC_5(VAR_10);
out_bpffd:
 FUNC_5(VAR_9);
}
