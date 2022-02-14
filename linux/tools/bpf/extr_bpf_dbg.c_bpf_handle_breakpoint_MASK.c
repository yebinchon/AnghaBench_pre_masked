
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sock_filter {int dummy; } ;
struct bpf_regs {size_t Pc; } ;


 int FUNC_0 (struct bpf_regs*,struct sock_filter*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(struct bpf_regs *VAR_0, struct sock_filter *VAR_1,
      uint8_t *VAR_2, uint32_t VAR_3,
      uint32_t VAR_4)
{
 FUNC_2("-- register dump --\n");
 FUNC_0(VAR_0, &VAR_1[VAR_0->Pc]);
 FUNC_2("-- packet dump --\n");
 FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_2("(breakpoint)\n");
 return 1;
}
