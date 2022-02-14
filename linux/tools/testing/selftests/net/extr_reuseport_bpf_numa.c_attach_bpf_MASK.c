
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int insn_cnt; unsigned long insns; unsigned long license; unsigned long log_buf; int log_size; int log_level; int prog_type; } ;
struct bpf_insn {int member_0; int member_4; int member_3; int member_2; int member_1; } ;
typedef int prog ;
typedef int bpf_log_buf ;
typedef int bpf_fd ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (int,int ,char*,...) ;
 int FUNC_2 (union bpf_attr*,int ,int) ;
 scalar_t__ FUNC_3 (int,int ,int ,int*,int) ;
 int FUNC_4 (int ,int ,union bpf_attr*,int) ;

__attribute__((used)) static void FUNC_5(int VAR_10)
{
 static char VAR_11[65536];
 static const char VAR_12[] = "";

 int VAR_13;
 const struct bpf_insn VAR_14[] = {

  { VAR_3 | VAR_0, 0, 0, 0, VAR_2 },

  { VAR_3 | VAR_1, 0, 0, 0, 0 }
 };
 union bpf_attr VAR_15;

 FUNC_2(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.prog_type = VAR_5;
 VAR_15.insn_cnt = sizeof(VAR_14) / sizeof(VAR_14[0]);
 VAR_15.insns = (unsigned long) &VAR_14;
 VAR_15.license = (unsigned long) &VAR_12;
 VAR_15.log_buf = (unsigned long) &VAR_11;
 VAR_15.log_size = sizeof(VAR_11);
 VAR_15.log_level = 1;

 VAR_13 = FUNC_4(VAR_8, VAR_4, &VAR_15, sizeof(VAR_15));
 if (VAR_13 < 0)
  FUNC_1(1, VAR_9, "ebpf error. log:\n%s\n", VAR_11);

 if (FUNC_3(VAR_10, VAR_6, VAR_7, &VAR_13,
   sizeof(VAR_13)))
  FUNC_1(1, VAR_9, "failed to set SO_ATTACH_REUSEPORT_EBPF");

 FUNC_0(VAR_13);
}
