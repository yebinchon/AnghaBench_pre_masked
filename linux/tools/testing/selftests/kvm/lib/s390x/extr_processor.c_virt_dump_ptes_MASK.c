
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uint8_t ;
typedef scalar_t__ uint64_t ;
struct kvm_vm {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_0 (struct kvm_vm*,scalar_t__) ;
 int FUNC_1 (int *,char*,char*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_1, struct kvm_vm *VAR_2, uint8_t VAR_3,
      uint64_t VAR_4)
{
 uint64_t *VAR_5, VAR_6;

 for (VAR_6 = VAR_4; VAR_6 < VAR_4 + 0x100 * 8; VAR_6 += 8) {
  VAR_5 = FUNC_0(VAR_2, VAR_6);
  if (*VAR_5 & VAR_0)
   continue;
  FUNC_1(VAR_1, "%*spte @ 0x%lx: 0x%016lx\n",
   VAR_3, "", VAR_6, *VAR_5);
 }
}
