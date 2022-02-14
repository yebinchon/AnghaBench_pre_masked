
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct kvm_vm {int page_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vm*,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct kvm_vm*,int,int ,int ) ;

__attribute__((used)) static uint64_t FUNC_3(struct kvm_vm *VAR_5, int VAR_6, uint32_t VAR_7)
{
 uint64_t VAR_8;

 VAR_8 = FUNC_2(VAR_5, VAR_6 < 4 ? VAR_1 : 1,
       VAR_0, VAR_7);
 FUNC_1(FUNC_0(VAR_5, VAR_8), 0xff, VAR_1 * VAR_5->page_size);

 return (VAR_8 & VAR_3)
  | (((4 - VAR_6) << 2) & VAR_4)
  | ((VAR_6 < 4 ? (VAR_1 - 1) : 0) & VAR_2);
}
