
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_load_program_attr {int prog_type; size_t insns_cnt; char* license; int prog_ifindex; struct bpf_insn const* insns; int kern_version; int expected_attach_type; } ;
struct bpf_insn {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_load_program_attr*,char*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(enum bpf_prog_type VAR_1, const struct bpf_insn *VAR_2,
    size_t VAR_3, char *VAR_4, size_t VAR_5, __u32 VAR_6)
{
 struct bpf_load_program_attr VAR_7 = {};
 int VAR_8;

 switch (VAR_1) {
 case 149:
  VAR_7.expected_attach_type = VAR_0;
  break;
 case 146:
  VAR_7.kern_version = FUNC_2();
  break;
 case 129:
 case 132:
 case 136:
 case 137:
 case 130:
 case 128:
 case 140:
 case 152:
 case 151:
 case 144:
 case 143:
 case 141:
 case 131:
 case 133:
 case 153:
 case 135:
 case 139:
 case 138:
 case 142:
 case 145:
 case 134:
 case 147:
 case 148:
 case 150:
 default:
  break;
 }

 VAR_7.prog_type = VAR_1;
 VAR_7.insns = VAR_2;
 VAR_7.insns_cnt = VAR_3;
 VAR_7.license = "GPL";
 VAR_7.prog_ifindex = VAR_6;

 VAR_8 = FUNC_0(&VAR_7, VAR_4, VAR_5);
 if (VAR_8 >= 0)
  FUNC_1(VAR_8);
}
