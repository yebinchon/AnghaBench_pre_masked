
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_flags_t ;
struct vm_area_struct {unsigned long vm_start; } ;
struct mm_struct {scalar_t__ map_count; int def_flags; } ;
struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_mode; TYPE_2__* f_op; int f_path; TYPE_1__* f_mapping; } ;
struct TYPE_6__ {int personality; struct mm_struct* mm; } ;
struct TYPE_5__ {unsigned long mmap_supported_flags; int mmap; } ;
struct TYPE_4__ {int host; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;



 unsigned long VAR_19 ;
 scalar_t__ VAR_20 ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,int) ;
 int FUNC_6 () ;
 TYPE_3__* VAR_36 ;
 int FUNC_7 (struct mm_struct*) ;
 struct inode* FUNC_8 (struct file*) ;
 int FUNC_9 (struct file*,struct inode*,unsigned long,unsigned long) ;
 struct vm_area_struct* FUNC_10 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_11 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_12 (struct file*) ;
 int FUNC_13 (struct file*) ;
 scalar_t__ FUNC_14 (struct mm_struct*,int,unsigned long) ;
 unsigned long FUNC_15 (struct file*,unsigned long,unsigned long,int,unsigned long,struct list_head*) ;
 scalar_t__ FUNC_16 (unsigned long) ;
 scalar_t__ FUNC_17 (int *) ;
 unsigned long FUNC_18 (unsigned long) ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;

unsigned long FUNC_19(struct file *VAR_39, unsigned long VAR_40,
   unsigned long VAR_41, unsigned long VAR_42,
   unsigned long VAR_43, vm_flags_t VAR_44,
   unsigned long VAR_45, unsigned long *VAR_46,
   struct list_head *VAR_47)
{
 struct mm_struct *VAR_48 = VAR_36->mm;
 int VAR_49 = 0;

 *VAR_46 = 0;

 if (!VAR_41)
  return -VAR_3;







 if ((VAR_42 & VAR_23) && (VAR_36->personality & VAR_25))
  if (!(VAR_39 && FUNC_17(&VAR_39->f_path)))
   VAR_42 |= VAR_22;


 if (VAR_43 & VAR_14)
  VAR_43 |= VAR_13;

 if (!(VAR_43 & VAR_13))
  VAR_40 = FUNC_18(VAR_40);


 VAR_41 = FUNC_3(VAR_41);
 if (!VAR_41)
  return -VAR_5;


 if ((VAR_45 + (VAR_41 >> VAR_21)) < VAR_45)
  return -VAR_7;


 if (VAR_48->map_count > VAR_37)
  return -VAR_5;




 VAR_40 = FUNC_11(VAR_39, VAR_40, VAR_41, VAR_45, VAR_43);
 if (FUNC_16(VAR_40))
  return VAR_40;

 if (VAR_43 & VAR_14) {
  struct vm_area_struct *VAR_50 = FUNC_10(VAR_48, VAR_40);

  if (VAR_50 && VAR_50->vm_start < VAR_40 + VAR_41)
   return -VAR_2;
 }

 if (VAR_42 == VAR_22) {
  VAR_49 = FUNC_7(VAR_48);
  if (VAR_49 < 0)
   VAR_49 = 0;
 }





 VAR_44 |= FUNC_5(VAR_42, VAR_49) | FUNC_4(VAR_43) |
   VAR_48->def_flags | VAR_31 | VAR_33 | VAR_30;

 if (VAR_43 & VAR_15)
  if (!FUNC_6())
   return -VAR_8;

 if (FUNC_14(VAR_48, VAR_44, VAR_41))
  return -VAR_1;

 if (VAR_39) {
  struct inode *VAR_51 = FUNC_8(VAR_39);
  unsigned long VAR_52;

  if (!FUNC_9(VAR_39, VAR_51, VAR_45, VAR_41))
   return -VAR_7;

  VAR_52 = VAR_12 | VAR_39->f_op->mmap_supported_flags;

  switch (VAR_43 & VAR_19) {
  case 129:







   VAR_43 &= VAR_12;

  case 128:
   if (VAR_43 & ~VAR_52)
    return -VAR_6;
   if (VAR_42 & VAR_24) {
    if (!(VAR_39->f_mode & VAR_11))
     return -VAR_0;
    if (FUNC_2(VAR_39->f_mapping->host))
     return -VAR_9;
   }





   if (FUNC_0(VAR_51) && (VAR_39->f_mode & VAR_11))
    return -VAR_0;




   if (FUNC_13(VAR_39))
    return -VAR_1;

   VAR_44 |= VAR_35 | VAR_32;
   if (!(VAR_39->f_mode & VAR_11))
    VAR_44 &= ~(VAR_33 | VAR_35);


  case 130:
   if (!(VAR_39->f_mode & VAR_10))
    return -VAR_0;
   if (FUNC_17(&VAR_39->f_path)) {
    if (VAR_44 & VAR_26)
     return -VAR_8;
    VAR_44 &= ~VAR_30;
   }

   if (!VAR_39->f_op->mmap)
    return -VAR_4;
   if (VAR_44 & (VAR_27|VAR_28))
    return -VAR_3;
   break;

  default:
   return -VAR_3;
  }
 } else {
  switch (VAR_43 & VAR_19) {
  case 129:
   if (VAR_44 & (VAR_27|VAR_28))
    return -VAR_3;



   VAR_45 = 0;
   VAR_44 |= VAR_35 | VAR_32;
   break;
  case 130:



   VAR_45 = VAR_40 >> VAR_21;
   break;
  default:
   return -VAR_3;
  }
 }





 if (VAR_43 & VAR_17) {

  if (VAR_38 != VAR_20)
   VAR_44 |= VAR_34;


  if (VAR_39 && FUNC_12(VAR_39))
   VAR_44 |= VAR_34;
 }

 VAR_40 = FUNC_15(VAR_39, VAR_40, VAR_41, VAR_44, VAR_45, VAR_47);
 if (!FUNC_1(VAR_40) &&
     ((VAR_44 & VAR_29) ||
      (VAR_43 & (VAR_18 | VAR_16)) == VAR_18))
  *VAR_46 = VAR_41;
 return VAR_40;
}
