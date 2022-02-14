
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct kprobe {scalar_t__ (* fault_handler ) (struct kprobe*,struct pt_regs*,int) ;} ;


 struct kprobe* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct kprobe*,struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_2(struct kprobe *VAR_1, struct pt_regs *VAR_2,
         int VAR_3)
{
 struct kprobe *VAR_4 = FUNC_0(VAR_0);





 if (VAR_4 && VAR_4->fault_handler) {
  if (VAR_4->fault_handler(VAR_4, VAR_2, VAR_3))
   return 1;
 }
 return 0;
}
