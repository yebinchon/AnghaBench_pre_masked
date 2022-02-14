
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bpf_prog {int dummy; } ;
struct bpf_insn_access_aux {int reg_type; } ;
typedef enum bpf_access_type { ____Placeholder_bpf_access_type } bpf_access_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,struct bpf_prog const*,struct bpf_insn_access_aux*) ;

__attribute__((used)) static bool FUNC_1(int VAR_2, int VAR_3,
       enum bpf_access_type VAR_4,
       const struct bpf_prog *VAR_5,
       struct bpf_insn_access_aux *VAR_6)
{
 if (VAR_2 == 0) {
  if (VAR_3 != sizeof(u64) || VAR_4 != VAR_0)
   return 0;
  VAR_6->reg_type = VAR_1;
 }
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
