
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mm_struct {int mmap_sem; } ;
struct mempolicy {int flags; } ;
typedef int nodemask_t ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 scalar_t__ FUNC_0 (struct mempolicy*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 long FUNC_4 (struct mempolicy*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ) ;
 TYPE_1__* VAR_19 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mm_struct*,unsigned long,unsigned long,struct mempolicy*) ;
 int FUNC_10 (int *,int ,int *,unsigned long,int ,int ) ;
 int FUNC_11 () ;
 struct mempolicy* FUNC_12 (unsigned short,unsigned short,int *) ;
 int FUNC_13 (struct mempolicy*) ;
 int FUNC_14 (struct mempolicy*,int *,scalar_t__) ;
 int VAR_20 ;
 int * FUNC_15 (int ) ;
 int VAR_21 ;
 int FUNC_16 (char*,unsigned long,unsigned long,unsigned short,unsigned short,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct mm_struct*,unsigned long,unsigned long,int *,unsigned long,int *) ;
 scalar_t__ VAR_22 ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static long FUNC_22(unsigned long VAR_23, unsigned long VAR_24,
       unsigned short VAR_25, unsigned short VAR_26,
       nodemask_t *VAR_27, unsigned long VAR_28)
{
 struct mm_struct *VAR_29 = VAR_19->mm;
 struct mempolicy *VAR_30;
 unsigned long VAR_31;
 int VAR_32;
 int VAR_33;
 FUNC_1(VAR_21);

 if (VAR_28 & ~(unsigned long)VAR_14)
  return -VAR_1;
 if ((VAR_28 & VAR_12) && !FUNC_6(VAR_0))
  return -VAR_4;

 if (VAR_23 & ~VAR_17)
  return -VAR_1;

 if (VAR_25 == VAR_6)
  VAR_28 &= ~VAR_13;

 VAR_24 = (VAR_24 + VAR_18 - 1) & VAR_17;
 VAR_31 = VAR_23 + VAR_24;

 if (VAR_31 < VAR_23)
  return -VAR_1;
 if (VAR_31 == VAR_23)
  return 0;

 VAR_30 = FUNC_12(VAR_25, VAR_26, VAR_27);
 if (FUNC_0(VAR_30))
  return FUNC_4(VAR_30);

 if (VAR_28 & VAR_10)
  VAR_30->flags |= VAR_7;





 if (!VAR_30)
  VAR_28 |= VAR_8;

 FUNC_16("mbind %lx-%lx mode:%d flags:%d nodes:%lx\n",
   VAR_23, VAR_23 + VAR_24, VAR_25, VAR_26,
   VAR_27 ? FUNC_15(*VAR_27)[0] : VAR_16);

 if (VAR_28 & (VAR_11 | VAR_12)) {

  VAR_32 = FUNC_11();
  if (VAR_32)
   goto mpol_out;
 }
 {
  FUNC_2(VAR_22);
  if (VAR_22) {
   FUNC_7(&VAR_29->mmap_sem);
   FUNC_19(VAR_19);
   VAR_32 = FUNC_14(VAR_30, VAR_27, VAR_22);
   FUNC_20(VAR_19);
   if (VAR_32)
    FUNC_21(&VAR_29->mmap_sem);
  } else
   VAR_32 = -VAR_3;
  FUNC_3(VAR_22);
 }
 if (VAR_32)
  goto mpol_out;

 VAR_33 = FUNC_18(VAR_29, VAR_23, VAR_31, VAR_27,
     VAR_28 | VAR_9, &VAR_21);

 if (VAR_33 < 0) {
  VAR_32 = -VAR_2;
  goto up_out;
 }

 VAR_32 = FUNC_9(VAR_29, VAR_23, VAR_31, VAR_30);

 if (!VAR_32) {
  int VAR_34 = 0;

  if (!FUNC_8(&VAR_21)) {
   FUNC_5(VAR_28 & VAR_10);
   VAR_34 = FUNC_10(&VAR_21, VAR_20, ((void*)0),
    VAR_23, VAR_5, VAR_15);
   if (VAR_34)
    FUNC_17(&VAR_21);
  }

  if ((VAR_33 > 0) || (VAR_34 && (VAR_28 & VAR_13)))
   VAR_32 = -VAR_2;
 } else
  FUNC_17(&VAR_21);

up_out:
 FUNC_21(&VAR_29->mmap_sem);
mpol_out:
 FUNC_13(VAR_30);
 return VAR_32;
}
