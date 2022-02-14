
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int * mapping; } ;
struct kiocb {int ki_pos; int ki_flags; struct file* ki_filp; } ;
struct iov_iter {int count; } ;
struct inode {int i_blkbits; TYPE_1__* i_sb; } ;
struct file_ra_state {int prev_pos; } ;
struct file {struct file_ra_state f_ra; struct address_space* f_mapping; } ;
struct address_space {TYPE_2__* a_ops; struct inode* host; } ;
typedef int ssize_t ;
typedef unsigned long pgoff_t ;
typedef int loff_t ;
struct TYPE_4__ {int (* readpage ) (struct file*,struct page*) ;int (* is_partially_uptodate ) (struct page*,unsigned long,int) ;} ;
struct TYPE_3__ {int s_maxbytes; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,struct address_space*,unsigned long,int ) ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (struct page*,unsigned long,unsigned long,struct iov_iter*) ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct file*) ;
 struct page* FUNC_8 (struct address_space*,unsigned long) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct iov_iter*) ;
 int FUNC_12 (struct iov_iter*) ;
 int FUNC_13 (struct iov_iter*,int) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct address_space*,int ) ;
 scalar_t__ FUNC_16 (struct address_space*) ;
 int FUNC_17 (struct page*) ;
 struct page* FUNC_18 (struct address_space*) ;
 int FUNC_19 (struct address_space*,struct file_ra_state*,struct file*,struct page*,unsigned long,unsigned long) ;
 int FUNC_20 (struct address_space*,struct file_ra_state*,struct file*,unsigned long,unsigned long) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct file*,struct file_ra_state*) ;
 int FUNC_23 (struct page*,unsigned long,int) ;
 int FUNC_24 (struct file*,struct page*) ;
 int FUNC_25 (struct page*) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (struct page*) ;

__attribute__((used)) static ssize_t FUNC_29(struct kiocb *VAR_13,
  struct iov_iter *VAR_14, ssize_t VAR_15)
{
 struct file *VAR_16 = VAR_13->ki_filp;
 struct address_space *VAR_17 = VAR_16->f_mapping;
 struct inode *VAR_18 = VAR_17->host;
 struct file_ra_state *VAR_19 = &VAR_16->f_ra;
 loff_t *VAR_20 = &VAR_13->ki_pos;
 pgoff_t VAR_21;
 pgoff_t VAR_22;
 pgoff_t VAR_23;
 unsigned long VAR_24;
 unsigned int VAR_25;
 int VAR_26 = 0;

 if (FUNC_26(*VAR_20 >= VAR_18->i_sb->s_maxbytes))
  return 0;
 FUNC_13(VAR_14, VAR_18->i_sb->s_maxbytes);

 VAR_21 = *VAR_20 >> VAR_10;
 VAR_23 = VAR_19->prev_pos >> VAR_10;
 VAR_25 = VAR_19->prev_pos & (VAR_11-1);
 VAR_22 = (*VAR_20 + VAR_14->count + VAR_11-1) >> VAR_10;
 VAR_24 = *VAR_20 & ~VAR_9;

 for (;;) {
  struct page *VAR_27;
  pgoff_t VAR_28;
  loff_t VAR_29;
  unsigned long VAR_30, VAR_31;

  FUNC_4();
find_page:
  if (FUNC_6(VAR_12)) {
   VAR_26 = -VAR_4;
   goto out;
  }

  VAR_27 = FUNC_8(VAR_17, VAR_21);
  if (!VAR_27) {
   if (VAR_13->ki_flags & VAR_8)
    goto would_block;
   FUNC_20(VAR_17,
     VAR_19, VAR_16,
     VAR_21, VAR_22 - VAR_21);
   VAR_27 = FUNC_8(VAR_17, VAR_21);
   if (FUNC_26(VAR_27 == ((void*)0)))
    goto no_cached_page;
  }
  if (FUNC_1(VAR_27)) {
   FUNC_19(VAR_17,
     VAR_19, VAR_16, VAR_27,
     VAR_21, VAR_22 - VAR_21);
  }
  if (!FUNC_2(VAR_27)) {
   if (VAR_13->ki_flags & VAR_8) {
    FUNC_21(VAR_27);
    goto would_block;
   }






   VAR_26 = FUNC_28(VAR_27);
   if (FUNC_26(VAR_26))
    goto readpage_error;
   if (FUNC_2(VAR_27))
    goto page_ok;

   if (VAR_18->i_blkbits == VAR_10 ||
     !VAR_17->a_ops->is_partially_uptodate)
    goto page_not_up_to_date;

   if (FUNC_26(FUNC_12(VAR_14)))
    goto page_not_up_to_date;
   if (!FUNC_25(VAR_27))
    goto page_not_up_to_date;

   if (!VAR_27->mapping)
    goto page_not_up_to_date_locked;
   if (!VAR_17->a_ops->is_partially_uptodate(VAR_27,
       VAR_24, VAR_14->count))
    goto page_not_up_to_date_locked;
   FUNC_27(VAR_27);
  }
page_ok:
  VAR_29 = FUNC_10(VAR_18);
  VAR_28 = (VAR_29 - 1) >> VAR_10;
  if (FUNC_26(!VAR_29 || VAR_21 > VAR_28)) {
   FUNC_21(VAR_27);
   goto out;
  }


  VAR_30 = VAR_11;
  if (VAR_21 == VAR_28) {
   VAR_30 = ((VAR_29 - 1) & ~VAR_9) + 1;
   if (VAR_30 <= VAR_24) {
    FUNC_21(VAR_27);
    goto out;
   }
  }
  VAR_30 = VAR_30 - VAR_24;





  if (FUNC_16(VAR_17))
   FUNC_9(VAR_27);





  if (VAR_23 != VAR_21 || VAR_24 != VAR_25)
   FUNC_17(VAR_27);
  VAR_23 = VAR_21;






  VAR_31 = FUNC_5(VAR_27, VAR_24, VAR_30, VAR_14);
  VAR_24 += VAR_31;
  VAR_21 += VAR_24 >> VAR_10;
  VAR_24 &= ~VAR_9;
  VAR_25 = VAR_24;

  FUNC_21(VAR_27);
  VAR_15 += VAR_31;
  if (!FUNC_11(VAR_14))
   goto out;
  if (VAR_31 < VAR_30) {
   VAR_26 = -VAR_3;
   goto out;
  }
  continue;

page_not_up_to_date:

  VAR_26 = FUNC_14(VAR_27);
  if (FUNC_26(VAR_26))
   goto readpage_error;

page_not_up_to_date_locked:

  if (!VAR_27->mapping) {
   FUNC_27(VAR_27);
   FUNC_21(VAR_27);
   continue;
  }


  if (FUNC_2(VAR_27)) {
   FUNC_27(VAR_27);
   goto page_ok;
  }

readpage:





  FUNC_0(VAR_27);

  VAR_26 = VAR_17->a_ops->readpage(VAR_16, VAR_27);

  if (FUNC_26(VAR_26)) {
   if (VAR_26 == VAR_0) {
    FUNC_21(VAR_27);
    VAR_26 = 0;
    goto find_page;
   }
   goto readpage_error;
  }

  if (!FUNC_2(VAR_27)) {
   VAR_26 = FUNC_14(VAR_27);
   if (FUNC_26(VAR_26))
    goto readpage_error;
   if (!FUNC_2(VAR_27)) {
    if (VAR_27->mapping == ((void*)0)) {



     FUNC_27(VAR_27);
     FUNC_21(VAR_27);
     goto find_page;
    }
    FUNC_27(VAR_27);
    FUNC_22(VAR_16, VAR_19);
    VAR_26 = -VAR_5;
    goto readpage_error;
   }
   FUNC_27(VAR_27);
  }

  goto page_ok;

readpage_error:

  FUNC_21(VAR_27);
  goto out;

no_cached_page:




  VAR_27 = FUNC_18(VAR_17);
  if (!VAR_27) {
   VAR_26 = -VAR_6;
   goto out;
  }
  VAR_26 = FUNC_3(VAR_27, VAR_17, VAR_21,
    FUNC_15(VAR_17, VAR_7));
  if (VAR_26) {
   FUNC_21(VAR_27);
   if (VAR_26 == -VAR_2) {
    VAR_26 = 0;
    goto find_page;
   }
   goto out;
  }
  goto readpage;
 }

would_block:
 VAR_26 = -VAR_1;
out:
 VAR_19->prev_pos = VAR_23;
 VAR_19->prev_pos <<= VAR_10;
 VAR_19->prev_pos |= VAR_25;

 *VAR_20 = ((loff_t)VAR_21 << VAR_10) + VAR_24;
 FUNC_7(VAR_16);
 return VAR_15 ? VAR_15 : VAR_26;
}
