
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_addr_test {int dummy; } ;
struct bpf_insn {int dummy; } ;
typedef int int32_t ;
typedef int insns ;


 struct bpf_insn FUNC_0 () ;
 struct bpf_insn FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct sock_addr_test const*,struct bpf_insn*,int) ;

__attribute__((used)) static int FUNC_3(const struct sock_addr_test *VAR_1,
       int32_t VAR_2)
{
 struct bpf_insn VAR_3[] = {

  FUNC_1(VAR_0, VAR_2),
  FUNC_0(),
 };
 return FUNC_2(VAR_1, VAR_3, sizeof(VAR_3) / sizeof(struct bpf_insn));
}
