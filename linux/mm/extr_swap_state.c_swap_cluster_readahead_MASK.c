
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int swp_entry_t ;
struct vm_fault {unsigned long address; struct vm_area_struct* vma; } ;
struct vm_area_struct {int dummy; } ;
struct swap_info_struct {int flags; unsigned long max; TYPE_2__* swap_file; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct blk_plug {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {TYPE_1__* f_mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ,int ,struct vm_area_struct*,unsigned long,int*) ;
 int FUNC_2 (struct blk_plug*) ;
 int FUNC_3 (struct blk_plug*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct page*) ;
 struct page* FUNC_9 (int ,int ,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_10 (struct page*,int) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (int ,unsigned long) ;
 unsigned long FUNC_13 (int ) ;
 struct swap_info_struct* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

struct page *FUNC_16(swp_entry_t VAR_3, gfp_t VAR_4,
    struct vm_fault *VAR_5)
{
 struct page *VAR_6;
 unsigned long VAR_7 = FUNC_13(VAR_3);
 unsigned long VAR_8 = VAR_7;
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11;
 struct swap_info_struct *VAR_12 = FUNC_14(VAR_3);
 struct blk_plug VAR_13;
 bool VAR_14 = 1, VAR_15;
 struct vm_area_struct *VAR_16 = VAR_5->vma;
 unsigned long VAR_17 = VAR_5->address;

 VAR_11 = FUNC_11(VAR_8) - 1;
 if (!VAR_11)
  goto skip;


 if (FUNC_6(VAR_12->flags & (VAR_1 | VAR_2))) {
  struct inode *VAR_18 = VAR_12->swap_file->f_mapping->host;
  if (FUNC_5(VAR_18))
   goto skip;
 }

 VAR_14 = 0;

 VAR_9 = VAR_8 & ~VAR_11;
 VAR_10 = VAR_8 | VAR_11;
 if (!VAR_9)
  VAR_9++;
 if (VAR_10 >= VAR_12->max)
  VAR_10 = VAR_12->max - 1;

 FUNC_3(&VAR_13);
 for (VAR_8 = VAR_9; VAR_8 <= VAR_10 ; VAR_8++) {

  VAR_6 = FUNC_1(
   FUNC_12(FUNC_15(VAR_3), VAR_8),
   VAR_4, VAR_16, VAR_17, &VAR_15);
  if (!VAR_6)
   continue;
  if (VAR_15) {
   FUNC_10(VAR_6, 0);
   if (VAR_8 != VAR_7) {
    FUNC_0(VAR_6);
    FUNC_4(VAR_0);
   }
  }
  FUNC_8(VAR_6);
 }
 FUNC_2(&VAR_13);

 FUNC_7();
skip:
 return FUNC_9(VAR_3, VAR_4, VAR_16, VAR_17, VAR_14);
}
