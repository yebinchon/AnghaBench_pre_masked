
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int expected_attach_type; } ;
struct bpf_insn_access_aux {int dummy; } ;
typedef enum bpf_access_type { ____Placeholder_bpf_access_type } bpf_access_type ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int,int,struct bpf_insn_access_aux*) ;

__attribute__((used)) static bool FUNC_2(int VAR_0, int VAR_1,
     enum bpf_access_type VAR_2,
     const struct bpf_prog *VAR_3,
     struct bpf_insn_access_aux *VAR_4)
{
 if (!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4))
  return 0;
 return FUNC_0(VAR_0, VAR_2,
            VAR_3->expected_attach_type);
}
