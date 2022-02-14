
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct bpf_prog {int dummy; } ;
struct bpf_insn_access_aux {int dummy; } ;
typedef enum bpf_access_type { ____Placeholder_bpf_access_type } bpf_access_type ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(int VAR_1, int VAR_2, enum bpf_access_type VAR_3,
     const struct bpf_prog *VAR_4,
     struct bpf_insn_access_aux *VAR_5)
{
 if (VAR_1 < 0 || VAR_1 >= sizeof(struct pt_regs))
  return 0;
 if (VAR_3 != VAR_0)
  return 0;
 if (VAR_1 % VAR_2 != 0)
  return 0;




 if (VAR_1 + VAR_2 > sizeof(struct pt_regs))
  return 0;

 return 1;
}
