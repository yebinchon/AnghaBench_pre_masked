
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_load_program_attr {int expected_attach_type; char* license; int log_level; struct bpf_insn const* insns; int insns_cnt; int prog_type; } ;
struct bpf_insn {int dummy; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_load_program_attr*,char*,int ) ;
 char* VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct bpf_load_program_attr*,int ,int) ;
 int FUNC_3 (struct bpf_insn const*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_4(const struct bpf_insn *VAR_5,
     enum bpf_attach_type VAR_6)
{
 struct bpf_load_program_attr VAR_7;
 int VAR_8;

 FUNC_2(&VAR_7, 0, sizeof(struct bpf_load_program_attr));
 VAR_7.prog_type = VAR_1;
 VAR_7.expected_attach_type = VAR_6;
 VAR_7.insns = VAR_5;
 VAR_7.insns_cnt = FUNC_3(VAR_7.insns);
 VAR_7.license = "GPL";
 VAR_7.log_level = 2;

 VAR_8 = FUNC_0(&VAR_7, VAR_2, VAR_0);
 if (VAR_4 && VAR_8 < 0)
  FUNC_1(VAR_3, "%s\n", VAR_2);

 return VAR_8;
}
