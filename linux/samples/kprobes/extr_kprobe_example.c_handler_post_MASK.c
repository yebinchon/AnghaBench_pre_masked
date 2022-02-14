
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {long flags; long msr; long cp0_status; scalar_t__ pstate; } ;
struct kprobe {int addr; int symbol_name; } ;


 int FUNC_0 (char*,int ,int ,long) ;

__attribute__((used)) static void FUNC_1(struct kprobe *VAR_0, struct pt_regs *VAR_1,
    unsigned long VAR_2)
{
}
