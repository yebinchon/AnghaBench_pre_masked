
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_sync_regs {int dummy; } ;
struct kvm_regs {int dummy; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1(struct kvm_regs *VAR_1, struct kvm_sync_regs *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
  FUNC_0(VAR_0[VAR_3]);
}
