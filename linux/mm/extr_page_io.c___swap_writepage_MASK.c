
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct swap_info_struct {int flags; int bdev; struct file* swap_file; } ;
struct page {int dummy; } ;
struct kiocb {int ki_pos; } ;
struct iov_iter {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct bio_vec {int bv_len; int bv_offset; struct page* bv_page; } ;
struct bio {int bi_opf; } ;
struct address_space {TYPE_1__* a_ops; } ;
typedef int bio_end_io_t ;
struct TYPE_2__ {int (* direct_IO ) (struct kiocb*,struct iov_iter*) ;} ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct page*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,struct page*) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,struct page*,struct writeback_control*) ;
 int FUNC_4 (struct bio*,struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct page*) ;
 struct bio* FUNC_8 (int ,struct page*,int ) ;
 int FUNC_9 (struct kiocb*,struct file*) ;
 int FUNC_10 (struct iov_iter*,int ,struct bio_vec*,int,int) ;
 int FUNC_11 (struct page*) ;
 struct swap_info_struct* FUNC_12 (struct page*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct kiocb*,struct iov_iter*) ;
 int FUNC_17 (struct bio*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct writeback_control*) ;

int FUNC_21(struct page *VAR_8, struct writeback_control *VAR_9,
  bio_end_io_t VAR_10)
{
 struct bio *VAR_11;
 int VAR_12;
 struct swap_info_struct *VAR_13 = FUNC_12(VAR_8);

 FUNC_2(!FUNC_1(VAR_8), VAR_8);
 if (VAR_13->flags & VAR_6) {
  struct kiocb VAR_14;
  struct file *VAR_15 = VAR_13->swap_file;
  struct address_space *VAR_16 = VAR_15->f_mapping;
  struct bio_vec VAR_17 = {
   .bv_page = VAR_8,
   .bv_len = VAR_2,
   .bv_offset = 0
  };
  struct iov_iter VAR_18;

  FUNC_10(&VAR_18, VAR_7, &VAR_17, 1, VAR_2);
  FUNC_9(&VAR_14, VAR_15);
  VAR_14.ki_pos = FUNC_11(VAR_8);

  FUNC_15(VAR_8);
  FUNC_19(VAR_8);
  VAR_12 = VAR_16->a_ops->direct_IO(&VAR_14, &VAR_18);
  if (VAR_12 == VAR_2) {
   FUNC_6(VAR_3);
   VAR_12 = 0;
  } else {
   FUNC_14(VAR_8);
   FUNC_0(VAR_8);
   FUNC_13("Write error on dio swapfile (%llu)\n",
        FUNC_11(VAR_8));
  }
  FUNC_7(VAR_8);
  return VAR_12;
 }

 VAR_12 = FUNC_3(VAR_13->bdev, FUNC_18(VAR_8), VAR_8, VAR_9);
 if (!VAR_12) {
  FUNC_5(VAR_8);
  return 0;
 }

 VAR_12 = 0;
 VAR_11 = FUNC_8(VAR_1, VAR_8, VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_14(VAR_8);
  FUNC_19(VAR_8);
  VAR_12 = -VAR_0;
  goto out;
 }
 VAR_11->bi_opf = VAR_4 | VAR_5 | FUNC_20(VAR_9);
 FUNC_4(VAR_11, VAR_8);
 FUNC_5(VAR_8);
 FUNC_15(VAR_8);
 FUNC_19(VAR_8);
 FUNC_17(VAR_11);
out:
 return VAR_12;
}
