
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct kprobe {int addr; } ;


 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct kprobe *VAR_0, struct pt_regs *VAR_1, int VAR_2)
{
 FUNC_0("fault_handler: p->addr = 0x%p, trap #%dn", VAR_0->addr, VAR_2);

 return 0;
}
