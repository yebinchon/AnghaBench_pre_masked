
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
typedef int __u64 ;


 scalar_t__ FUNC_0 (struct pt_regs volatile*) ;

int FUNC_1(volatile struct pt_regs* VAR_0)
{
 __u64 VAR_1 = 0, VAR_2 = 0;
 do {
  VAR_1++;
  VAR_2 += FUNC_0(VAR_0);
 } while (VAR_1 < 0x100000000ULL);
 return VAR_2;
}
