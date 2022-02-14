
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct kvm_memslots {int dummy; } ;
struct kvm_memory_slot {unsigned long* dirty_bitmap; } ;
struct kvm_dirty_log {int slot; int dirty_bitmap; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct kvm_memslots* FUNC_0 (struct kvm*,int) ;
 scalar_t__ FUNC_1 (int ,unsigned long*,unsigned long) ;
 struct kvm_memory_slot* FUNC_2 (struct kvm_memslots*,int) ;
 unsigned long FUNC_3 (struct kvm_memory_slot*) ;

int FUNC_4(struct kvm *VAR_5,
   struct kvm_dirty_log *VAR_6, int *VAR_7)
{
 struct kvm_memslots *VAR_8;
 struct kvm_memory_slot *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14 = 0;

 VAR_11 = VAR_6->slot >> 16;
 VAR_12 = (u16)VAR_6->slot;
 if (VAR_11 >= VAR_3 || VAR_12 >= VAR_4)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_5, VAR_11);
 VAR_9 = FUNC_2(VAR_8, VAR_12);
 if (!VAR_9->dirty_bitmap)
  return -VAR_2;

 VAR_13 = FUNC_3(VAR_9);

 for (VAR_10 = 0; !VAR_14 && VAR_10 < VAR_13/sizeof(long); ++VAR_10)
  VAR_14 = VAR_9->dirty_bitmap[VAR_10];

 if (FUNC_1(VAR_6->dirty_bitmap, VAR_9->dirty_bitmap, VAR_13))
  return -VAR_0;

 if (VAR_14)
  *VAR_7 = 1;
 return 0;
}
