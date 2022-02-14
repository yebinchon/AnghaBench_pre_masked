
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_vaddr_t ;
typedef int uint64_t ;
struct kvm_vm {size_t page_size; size_t page_shift; int vpages_mapped; int vpages_valid; } ;


 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static vm_vaddr_t FUNC_5(struct kvm_vm *VAR_0, size_t VAR_1,
          vm_vaddr_t VAR_2)
{
 uint64_t VAR_3 = (VAR_1 + VAR_0->page_size - 1) >> VAR_0->page_shift;


 uint64_t VAR_4 = (VAR_2 + VAR_0->page_size - 1) >> VAR_0->page_shift;
 if ((VAR_4 * VAR_0->page_size) < VAR_2)
  goto no_va_found;


 if (!FUNC_2(VAR_0->vpages_valid,
  VAR_4, VAR_3))
  VAR_4 = FUNC_4(VAR_0->vpages_valid,
   VAR_4, VAR_3);
 do {






  if (FUNC_1(VAR_0->vpages_mapped,
   VAR_4, VAR_3))
   goto va_found;
  VAR_4 = FUNC_3(VAR_0->vpages_mapped,
   VAR_4, VAR_3);
  if (VAR_4 == 0)
   goto no_va_found;





  if (!FUNC_2(VAR_0->vpages_valid,
   VAR_4, VAR_3)) {
   VAR_4 = FUNC_4(
    VAR_0->vpages_valid, VAR_4, VAR_3);
   if (VAR_4 == 0)
    goto no_va_found;
  }
 } while (VAR_4 != 0);

no_va_found:
 FUNC_0(0, "No vaddr of specified pages available, "
  "pages: 0x%lx", VAR_3);


 return -1;

va_found:
 FUNC_0(FUNC_2(VAR_0->vpages_valid,
  VAR_4, VAR_3),
  "Unexpected, invalid virtual page index range,\n"
  "  pgidx_start: 0x%lx\n"
  "  pages: 0x%lx",
  VAR_4, VAR_3);
 FUNC_0(FUNC_1(VAR_0->vpages_mapped,
  VAR_4, VAR_3),
  "Unexpected, pages already mapped,\n"
  "  pgidx_start: 0x%lx\n"
  "  pages: 0x%lx",
  VAR_4, VAR_3);

 return VAR_4 * VAR_0->page_size;
}
