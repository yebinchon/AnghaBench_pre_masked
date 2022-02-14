
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {unsigned long insns; unsigned long license; unsigned long log_buf; int log_size; int log_level; scalar_t__ kern_version; int insn_cnt; int prog_type; } ;
typedef int uint16_t ;
struct bpf_insn {int member_0; int member_4; int member_3; int member_2; int member_1; } ;
typedef int bpf_log_buf ;
typedef int bpf_fd ;
typedef int attr ;


 int FUNC_0 (struct bpf_insn const*) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int) ;
 int VAR_18 ;
 int FUNC_2 (int,int ,char*,...) ;
 int FUNC_3 (union bpf_attr*,int ,int) ;
 scalar_t__ FUNC_4 (int,int ,int ,int*,int) ;
 int FUNC_5 (int ,int ,union bpf_attr*,int) ;

__attribute__((used)) static void FUNC_6(int VAR_19, uint16_t VAR_20)
{
 static char VAR_21[65536];
 static const char VAR_22[] = "GPL";

 int VAR_23;
 const struct bpf_insn VAR_24[] = {

  { VAR_1 | VAR_7 | VAR_14, VAR_12, VAR_11, 0, 0 },

  { VAR_5 | VAR_0 | VAR_13, 0, 0, 0, 0 },

  { VAR_1 | VAR_6 | VAR_4, VAR_10, 0, 0, VAR_20 },

  { VAR_3 | VAR_2, 0, 0, 0, 0 }
 };
 union bpf_attr VAR_25;

 FUNC_3(&VAR_25, 0, sizeof(VAR_25));
 VAR_25.prog_type = VAR_9;
 VAR_25.insn_cnt = FUNC_0(VAR_24);
 VAR_25.insns = (unsigned long) &VAR_24;
 VAR_25.license = (unsigned long) &VAR_22;
 VAR_25.log_buf = (unsigned long) &VAR_21;
 VAR_25.log_size = sizeof(VAR_21);
 VAR_25.log_level = 1;
 VAR_25.kern_version = 0;

 VAR_23 = FUNC_5(VAR_17, VAR_8, &VAR_25, sizeof(VAR_25));
 if (VAR_23 < 0)
  FUNC_2(1, VAR_18, "ebpf error. log:\n%s\n", VAR_21);

 if (FUNC_4(VAR_19, VAR_15, VAR_16, &VAR_23,
   sizeof(VAR_23)))
  FUNC_2(1, VAR_18, "failed to set SO_ATTACH_REUSEPORT_EBPF");

 FUNC_1(VAR_23);
}
