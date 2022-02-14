
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int dummy; } ;
struct bpf_insn_access_aux {int dummy; } ;
typedef enum bpf_access_type { ____Placeholder_bpf_access_type } bpf_access_type ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(int VAR_2, int VAR_3, enum bpf_access_type VAR_4,
        const struct bpf_prog *VAR_5,
        struct bpf_insn_access_aux *VAR_6)
{
 if (VAR_2 < sizeof(void *) || VAR_2 >= VAR_1)
  return 0;
 if (VAR_4 != VAR_0)
  return 0;
 if (VAR_2 % VAR_3 != 0)
  return 0;

 FUNC_0(VAR_1 % sizeof(__u64));
 return 1;
}
