
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vm*) ;
 int FUNC_1 (char*,int,int,int) ;
 struct kvm_vm* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct kvm_vm*,int) ;

void FUNC_4(int VAR_3, int VAR_4)
{
 struct kvm_vm *VAR_5;
 int VAR_6;

 FUNC_1("Testing creating %d vCPUs, with IDs %d...%d.\n",
        VAR_4, VAR_3, VAR_3 + VAR_4 - 1);

 VAR_5 = FUNC_2(VAR_2, VAR_0, VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  int VAR_7 = VAR_3 + VAR_6;


  FUNC_3(VAR_5, VAR_7);
 }

 FUNC_0(VAR_5);
}
