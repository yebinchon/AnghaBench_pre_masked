
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct kvm_vm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vm*,int ,int ,int ) ;
 int VAR_3 ;
 struct kvm_vm* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct kvm_vm*,int ,void*) ;

struct kvm_vm *FUNC_3(uint32_t VAR_4, uint64_t VAR_5,
     void *VAR_6)
{





 uint64_t VAR_7 = VAR_5 / 256 * 2;
 struct kvm_vm *VAR_8;

 VAR_8 = FUNC_1(VAR_2,
         VAR_0 + VAR_7, VAR_1);

 FUNC_0(VAR_8, VAR_3, 0, 0);
 FUNC_2(VAR_8, VAR_4, VAR_6);

 return VAR_8;
}
