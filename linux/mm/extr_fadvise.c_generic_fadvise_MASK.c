
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int i_size; int i_mode; } ;
struct TYPE_2__ {int ra_pages; } ;
struct file {int f_lock; int f_mode; TYPE_1__ f_ra; struct address_space* f_mapping; } ;
struct backing_dev_info {int ra_pages; } ;
struct address_space {int host; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;






 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (struct address_space*,scalar_t__,scalar_t__,int ) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (struct address_space*,struct file*,scalar_t__,unsigned long) ;
 struct backing_dev_info* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 unsigned long FUNC_7 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct backing_dev_info VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct file *VAR_8, loff_t VAR_9, loff_t VAR_10, int VAR_11)
{
 struct inode *VAR_12;
 struct address_space *VAR_13;
 struct backing_dev_info *VAR_14;
 loff_t VAR_15;
 pgoff_t VAR_16;
 pgoff_t VAR_17;
 unsigned long VAR_18;

 VAR_12 = FUNC_3(VAR_8);
 if (FUNC_1(VAR_12->i_mode))
  return -VAR_1;

 VAR_13 = VAR_8->f_mapping;
 if (!VAR_13 || VAR_10 < 0)
  return -VAR_0;

 VAR_14 = FUNC_5(VAR_13->host);

 if (FUNC_0(VAR_12) || (VAR_14 == &VAR_7)) {
  switch (VAR_11) {
  case 131:
  case 130:
  case 129:
  case 128:
  case 132:
  case 133:

   break;
  default:
   return -VAR_0;
  }
  return 0;
 }






 VAR_15 = (u64)VAR_9 + (u64)VAR_10;
 if (!VAR_10 || VAR_15 < VAR_10)
  VAR_15 = -1;
 else
  VAR_15--;

 switch (VAR_11) {
 case 131:
  VAR_8->f_ra.ra_pages = VAR_14->ra_pages;
  FUNC_10(&VAR_8->f_lock);
  VAR_8->f_mode &= ~VAR_2;
  FUNC_11(&VAR_8->f_lock);
  break;
 case 130:
  FUNC_10(&VAR_8->f_lock);
  VAR_8->f_mode |= VAR_2;
  FUNC_11(&VAR_8->f_lock);
  break;
 case 129:
  VAR_8->f_ra.ra_pages = VAR_14->ra_pages * 2;
  FUNC_10(&VAR_8->f_lock);
  VAR_8->f_mode &= ~VAR_2;
  FUNC_11(&VAR_8->f_lock);
  break;
 case 128:

  VAR_16 = VAR_9 >> VAR_4;
  VAR_17 = VAR_15 >> VAR_4;


  VAR_18 = VAR_17 - VAR_16 + 1;
  if (!VAR_18)
   VAR_18 = ~0UL;





  FUNC_4(VAR_13, VAR_8, VAR_16, VAR_18);
  break;
 case 132:
  break;
 case 133:
  if (!FUNC_6(VAR_13->host))
   FUNC_2(VAR_13, VAR_9, VAR_15,
         VAR_6);






  VAR_16 = (VAR_9+(VAR_5-1)) >> VAR_4;
  VAR_17 = (VAR_15 >> VAR_4);







  if ((VAR_15 & ~VAR_3) != ~VAR_3 &&
    VAR_15 != VAR_12->i_size - 1) {





   if (VAR_17 == 0)
    break;

   VAR_17--;
  }

  if (VAR_17 >= VAR_16) {
   unsigned long VAR_19;
   FUNC_8();

   VAR_19 = FUNC_7(VAR_13,
      VAR_16, VAR_17);







   if (VAR_19 < (VAR_17 - VAR_16 + 1)) {
    FUNC_9();
    FUNC_7(VAR_13, VAR_16,
      VAR_17);
   }
  }
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
