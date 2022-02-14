
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_sync_regs {int dummy; } ;
struct kvm_sregs {int dummy; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(struct kvm_sregs *VAR_2, struct kvm_sync_regs *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
  FUNC_0(VAR_0[VAR_4]);

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
  FUNC_0(VAR_1[VAR_4]);
}
