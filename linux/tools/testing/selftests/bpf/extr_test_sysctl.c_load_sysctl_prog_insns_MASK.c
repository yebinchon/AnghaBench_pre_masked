
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_test {scalar_t__ result; scalar_t__ fixup_value_insn; struct bpf_insn* insns; } ;
struct bpf_load_program_attr {char* license; struct bpf_insn* insns; int insns_cnt; int prog_type; } ;
struct bpf_insn {int dummy; } ;
typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bpf_load_program_attr*,char const*,int ) ;
 char const* VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int,struct bpf_insn*,scalar_t__) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (struct bpf_load_program_attr*,int ,int) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (struct bpf_insn*) ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static int FUNC_8(struct sysctl_test *VAR_6,
      const char *VAR_7)
{
 struct bpf_insn *VAR_8 = VAR_6->insns;
 struct bpf_load_program_attr VAR_9;
 int VAR_10;

 FUNC_4(&VAR_9, 0, sizeof(struct bpf_load_program_attr));
 VAR_9.prog_type = VAR_1;
 VAR_9.insns = VAR_8;
 VAR_9.insns_cnt = FUNC_6(VAR_9.insns);
 VAR_9.license = "GPL";

 if (VAR_6->fixup_value_insn) {
  char VAR_11[128];
  ssize_t VAR_12;
  int VAR_13;

  VAR_13 = FUNC_5(VAR_7, VAR_4 | VAR_3);
  if (VAR_13 < 0) {
   FUNC_3("open(%s) failed", VAR_7);
   return -1;
  }
  VAR_12 = FUNC_7(VAR_13, VAR_11, sizeof(VAR_11));
  if (VAR_12 == -1) {
   FUNC_3("read(%s) failed", VAR_7);
   FUNC_1(VAR_13);
   return -1;
  }
  FUNC_1(VAR_13);
  if (FUNC_2(VAR_11, VAR_12, VAR_8, VAR_6->fixup_value_insn))
   return -1;
 }

 VAR_10 = FUNC_0(&VAR_9, VAR_5, VAR_0);
 if (VAR_10 < 0 && VAR_6->result != VAR_2) {
  FUNC_3(">>> Loading program error.\n"
   ">>> Verifier output:\n%s\n-------\n", VAR_5);
 }

 return VAR_10;
}
