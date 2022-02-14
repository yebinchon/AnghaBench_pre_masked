
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int val; } ;
typedef TYPE_2__ swp_entry_t ;
struct swap_info_struct {int flags; TYPE_4__* bdev; } ;
struct page {int dummy; } ;
struct gendisk {TYPE_1__* fops; } ;
struct TYPE_7__ {struct gendisk* bd_disk; } ;
struct TYPE_5__ {int (* swap_slot_free_notify ) (TYPE_4__*,unsigned long) ;} ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct swap_info_struct* FUNC_3 (struct page*) ;
 int FUNC_4 (TYPE_4__*,unsigned long) ;
 unsigned long FUNC_5 (TYPE_2__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct page *VAR_1)
{
 struct swap_info_struct *VAR_2;
 struct gendisk *VAR_3;







 if (FUNC_6(!FUNC_0(VAR_1)))
  return;

 VAR_2 = FUNC_3(VAR_1);
 if (!(VAR_2->flags & VAR_0))
  return;
 VAR_3 = VAR_2->bdev->bd_disk;
 if (VAR_3->fops->swap_slot_free_notify) {
  swp_entry_t VAR_4;
  unsigned long VAR_5;

  VAR_4.val = FUNC_2(VAR_1);
  VAR_5 = FUNC_5(VAR_4);

  FUNC_1(VAR_1);
  VAR_3->fops->swap_slot_free_notify(VAR_2->bdev,
    VAR_5);
 }
}
