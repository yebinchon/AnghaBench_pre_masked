
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {int* id_to_index; int used_slots; struct kvm_memory_slot* memslots; } ;
struct kvm_memory_slot {int id; scalar_t__ base_gfn; scalar_t__ npages; } ;
typedef enum kvm_mr_change { ____Placeholder_kvm_mr_change } kvm_mr_change ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct kvm_memslots *VAR_1,
       struct kvm_memory_slot *VAR_2,
       enum kvm_mr_change VAR_3)
{
 int VAR_4 = VAR_2->id;
 int VAR_5 = VAR_1->id_to_index[VAR_4];
 struct kvm_memory_slot *VAR_6 = VAR_1->memslots;

 FUNC_0(VAR_6[VAR_5].id != VAR_4);
 switch (VAR_3) {
 case 129:
  VAR_1->used_slots++;
  FUNC_0(VAR_6[VAR_5].npages || !VAR_2->npages);
  break;
 case 128:
  VAR_1->used_slots--;
  FUNC_0(VAR_2->npages || !VAR_6[VAR_5].npages);
  break;
 default:
  break;
 }

 while (VAR_5 < VAR_0 - 1 &&
        VAR_2->base_gfn <= VAR_6[VAR_5 + 1].base_gfn) {
  if (!VAR_6[VAR_5 + 1].npages)
   break;
  VAR_6[VAR_5] = VAR_6[VAR_5 + 1];
  VAR_1->id_to_index[VAR_6[VAR_5].id] = VAR_5;
  VAR_5++;
 }
 if (VAR_2->npages) {
  while (VAR_5 > 0 &&
         VAR_2->base_gfn >= VAR_6[VAR_5 - 1].base_gfn) {
   VAR_6[VAR_5] = VAR_6[VAR_5 - 1];
   VAR_1->id_to_index[VAR_6[VAR_5].id] = VAR_5;
   VAR_5--;
  }
 } else
  FUNC_1(VAR_5 != VAR_1->used_slots);

 VAR_6[VAR_5] = *VAR_2;
 VAR_1->id_to_index[VAR_6[VAR_5].id] = VAR_5;
}
