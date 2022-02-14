
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swap_info_struct {int flags; int bdev; struct file* swap_file; } ;
struct page {int dummy; } ;
struct gendisk {int queue; } ;
struct file {struct address_space* f_mapping; } ;
struct bio {int bi_private; int bi_opf; struct gendisk* bi_disk; } ;
struct address_space {TYPE_1__* a_ops; } ;
typedef int blk_qc_t ;
struct TYPE_2__ {int (* readpage ) (struct file*,struct page*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct page*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int,struct page*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,struct page*) ;
 int FUNC_8 (struct bio*) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (struct bio*,int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (struct page*) ;
 struct bio* FUNC_14 (int ,struct page*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 struct swap_info_struct* FUNC_17 (struct page*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct file*,struct page*) ;
 int FUNC_20 (struct bio*) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct page*) ;
 scalar_t__ FUNC_23 (struct page*) ;
 int FUNC_24 (struct page*) ;

int FUNC_25(struct page *VAR_10, bool VAR_11)
{
 struct bio *VAR_12;
 int VAR_13 = 0;
 struct swap_info_struct *VAR_14 = FUNC_17(VAR_10);
 blk_qc_t VAR_15;
 struct gendisk *VAR_16;

 FUNC_5(!FUNC_1(VAR_10) && !VAR_11, VAR_10);
 FUNC_5(!FUNC_0(VAR_10), VAR_10);
 FUNC_5(FUNC_2(VAR_10), VAR_10);
 if (FUNC_13(VAR_10) == 0) {
  FUNC_4(VAR_10);
  FUNC_24(VAR_10);
  goto out;
 }

 if (VAR_14->flags & VAR_5) {
  struct file *VAR_17 = VAR_14->swap_file;
  struct address_space *VAR_18 = VAR_17->f_mapping;

  VAR_13 = VAR_18->a_ops->readpage(VAR_17, VAR_10);
  if (!VAR_13)
   FUNC_12(VAR_2);
  return VAR_13;
 }

 VAR_13 = FUNC_7(VAR_14->bdev, FUNC_21(VAR_10), VAR_10);
 if (!VAR_13) {
  if (FUNC_23(VAR_10)) {
   FUNC_22(VAR_10);
   FUNC_24(VAR_10);
  }

  FUNC_12(VAR_2);
  return 0;
 }

 VAR_13 = 0;
 VAR_12 = FUNC_14(VAR_1, VAR_10, VAR_9);
 if (VAR_12 == ((void*)0)) {
  FUNC_24(VAR_10);
  VAR_13 = -VAR_0;
  goto out;
 }
 VAR_16 = VAR_12->bi_disk;




 FUNC_10(VAR_12, VAR_4, 0);
 if (VAR_11) {
  VAR_12->bi_opf |= VAR_3;
  FUNC_15(VAR_8);
  VAR_12->bi_private = VAR_8;
 }
 FUNC_12(VAR_2);
 FUNC_8(VAR_12);
 VAR_15 = FUNC_20(VAR_12);
 while (VAR_11) {
  FUNC_18(VAR_7);
  if (!FUNC_3(VAR_12->bi_private))
   break;

  if (!FUNC_11(VAR_16->queue, VAR_15, 1))
   FUNC_16();
 }
 FUNC_6(VAR_6);
 FUNC_9(VAR_12);

out:
 return VAR_13;
}
