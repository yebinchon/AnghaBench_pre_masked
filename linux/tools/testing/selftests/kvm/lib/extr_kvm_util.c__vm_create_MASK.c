
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct kvm_vm {int mode; int pgtable_levels; int pa_bits; int va_bits; int page_size; int page_shift; unsigned long long max_gfn; void* vpages_mapped; void* vpages_valid; scalar_t__ type; } ;
typedef enum vm_guest_mode { ____Placeholder_vm_guest_mode } vm_guest_mode ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_0 ;







 struct kvm_vm* FUNC_3 (int,int) ;
 int FUNC_4 (int*,int*) ;
 void* FUNC_5 () ;
 int FUNC_6 (void*,unsigned long long,unsigned long long) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct kvm_vm*,int) ;
 int FUNC_9 (struct kvm_vm*,int ,int ,int ,scalar_t__,int ) ;

struct kvm_vm *FUNC_10(enum vm_guest_mode VAR_1, uint64_t VAR_2, int VAR_3)
{
 struct kvm_vm *VAR_4;

 FUNC_0("Testing guest mode: %s\n", FUNC_7(VAR_1));

 VAR_4 = FUNC_3(1, sizeof(*VAR_4));
 FUNC_2(VAR_4 != ((void*)0), "Insufficient Memory");

 VAR_4->mode = VAR_1;
 VAR_4->type = 0;


 switch (VAR_4->mode) {
 case 130:
  VAR_4->pgtable_levels = 4;
  VAR_4->pa_bits = 52;
  VAR_4->va_bits = 48;
  VAR_4->page_size = 0x1000;
  VAR_4->page_shift = 12;
  break;
 case 129:
  VAR_4->pgtable_levels = 3;
  VAR_4->pa_bits = 52;
  VAR_4->va_bits = 48;
  VAR_4->page_size = 0x10000;
  VAR_4->page_shift = 16;
  break;
 case 132:
  VAR_4->pgtable_levels = 4;
  VAR_4->pa_bits = 48;
  VAR_4->va_bits = 48;
  VAR_4->page_size = 0x1000;
  VAR_4->page_shift = 12;
  break;
 case 131:
  VAR_4->pgtable_levels = 3;
  VAR_4->pa_bits = 48;
  VAR_4->va_bits = 48;
  VAR_4->page_size = 0x10000;
  VAR_4->page_shift = 16;
  break;
 case 134:
  VAR_4->pgtable_levels = 4;
  VAR_4->pa_bits = 40;
  VAR_4->va_bits = 48;
  VAR_4->page_size = 0x1000;
  VAR_4->page_shift = 12;
  break;
 case 133:
  VAR_4->pgtable_levels = 3;
  VAR_4->pa_bits = 40;
  VAR_4->va_bits = 48;
  VAR_4->page_size = 0x10000;
  VAR_4->page_shift = 16;
  break;
 case 128:

  FUNC_4(&VAR_4->pa_bits, &VAR_4->va_bits);
  FUNC_2(VAR_4->va_bits == 48, "Linear address width "
       "(%d bits) not supported", VAR_4->va_bits);
  VAR_4->pgtable_levels = 4;
  VAR_4->page_size = 0x1000;
  VAR_4->page_shift = 12;
  FUNC_0("Guest physical address width detected: %d\n",
        VAR_4->pa_bits);




  break;
 default:
  FUNC_2(0, "Unknown guest mode, mode: 0x%x", VAR_1);
 }






 FUNC_8(VAR_4, VAR_3);


 VAR_4->vpages_valid = FUNC_5();
 FUNC_6(VAR_4->vpages_valid,
  0, (1ULL << (VAR_4->va_bits - 1)) >> VAR_4->page_shift);
 FUNC_6(VAR_4->vpages_valid,
  (~((1ULL << (VAR_4->va_bits - 1)) - 1)) >> VAR_4->page_shift,
  (1ULL << (VAR_4->va_bits - 1)) >> VAR_4->page_shift);


 VAR_4->max_gfn = ((1ULL << VAR_4->pa_bits) >> VAR_4->page_shift) - 1;


 VAR_4->vpages_mapped = FUNC_5();
 if (VAR_2 != 0)
  FUNC_9(VAR_4, VAR_0,
         0, 0, VAR_2, 0);

 return VAR_4;
}
