
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_load_program_attr {int prog_type; size_t insns_cnt; char const* license; int prog_flags; int kern_version; struct bpf_insn const* insns; int * name; scalar_t__ expected_attach_type; } ;
struct bpf_insn {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_load_program_attr*,char*,size_t) ;
 int FUNC_1 (struct bpf_load_program_attr*,int ,int) ;

int FUNC_2(enum bpf_prog_type VAR_1, const struct bpf_insn *VAR_2,
     size_t VAR_3, const char *VAR_4,
     __u32 VAR_5, char *VAR_6,
       size_t VAR_7)
{
 struct bpf_load_program_attr VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(struct bpf_load_program_attr));
 VAR_8.prog_type = VAR_1;
 VAR_8.expected_attach_type = 0;
 VAR_8.name = ((void*)0);
 VAR_8.insns = VAR_2;
 VAR_8.insns_cnt = VAR_3;
 VAR_8.license = VAR_4;
 VAR_8.kern_version = VAR_5;
 VAR_8.prog_flags = VAR_0;

 return FUNC_0(&VAR_8, VAR_6, VAR_7);
}
