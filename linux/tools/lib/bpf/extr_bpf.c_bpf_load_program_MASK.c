
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_load_program_attr {int prog_type; size_t insns_cnt; char const* license; int kern_version; struct bpf_insn const* insns; int * name; scalar_t__ expected_attach_type; } ;
struct bpf_insn {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef int __u32 ;


 int FUNC_0 (struct bpf_load_program_attr*,char*,size_t) ;
 int FUNC_1 (struct bpf_load_program_attr*,int ,int) ;

int FUNC_2(enum bpf_prog_type VAR_0, const struct bpf_insn *VAR_1,
       size_t VAR_2, const char *VAR_3,
       __u32 VAR_4, char *VAR_5,
       size_t VAR_6)
{
 struct bpf_load_program_attr VAR_7;

 FUNC_1(&VAR_7, 0, sizeof(struct bpf_load_program_attr));
 VAR_7.prog_type = VAR_0;
 VAR_7.expected_attach_type = 0;
 VAR_7.name = ((void*)0);
 VAR_7.insns = VAR_1;
 VAR_7.insns_cnt = VAR_2;
 VAR_7.license = VAR_3;
 VAR_7.kern_version = VAR_4;

 return FUNC_0(&VAR_7, VAR_5, VAR_6);
}
