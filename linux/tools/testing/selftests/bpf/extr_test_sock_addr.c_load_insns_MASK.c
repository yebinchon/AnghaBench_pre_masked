
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_addr_test {scalar_t__ expected_result; int expected_attach_type; } ;
struct bpf_load_program_attr {size_t insns_cnt; char* license; struct bpf_insn const* insns; int expected_attach_type; int prog_type; } ;
struct bpf_insn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bpf_load_program_attr*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct bpf_load_program_attr*,int ,int) ;

__attribute__((used)) static int FUNC_3(const struct sock_addr_test *VAR_4,
        const struct bpf_insn *VAR_5, size_t VAR_6)
{
 struct bpf_load_program_attr VAR_7;
 int VAR_8;

 FUNC_2(&VAR_7, 0, sizeof(struct bpf_load_program_attr));
 VAR_7.prog_type = VAR_1;
 VAR_7.expected_attach_type = VAR_4->expected_attach_type;
 VAR_7.insns = VAR_5;
 VAR_7.insns_cnt = VAR_6;
 VAR_7.license = "GPL";

 VAR_8 = FUNC_0(&VAR_7, VAR_3, VAR_0);
 if (VAR_8 < 0 && VAR_4->expected_result != VAR_2) {
  FUNC_1(">>> Loading program error.\n"
   ">>> Verifier output:\n%s\n-------\n", VAR_3);
 }

 return VAR_8;
}
